/*
 * Copyright (C) 2011 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE INC. AND ITS CONTRIBUTORS ``AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL APPLE INC. OR ITS CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef InspectorConsoleAgent_h
#define InspectorConsoleAgent_h

#if ENABLE(INSPECTOR)

#include "ConsoleAPITypes.h"
#include "ConsoleTypes.h"
#include "InspectorWebAgentBase.h"
#include "InspectorWebBackendDispatchers.h"
#include "InspectorWebFrontendDispatchers.h"
#include "ScriptState.h"
#include <wtf/Forward.h>
#include <wtf/HashMap.h>
#include <wtf/Noncopyable.h>
#include <wtf/Vector.h>
#include <wtf/text/StringHash.h>

namespace WebCore {

class ConsoleMessage;
class DOMWindow;
class InstrumentingAgents;
class PageInjectedScriptManager;
class ResourceError;
class ResourceResponse;
class ScriptArguments;
class ScriptCallStack;
class ScriptProfile;

typedef String ErrorString;

class InspectorConsoleAgent : public InspectorAgentBase, public Inspector::InspectorConsoleBackendDispatcherHandler {
    WTF_MAKE_NONCOPYABLE(InspectorConsoleAgent);
public:
    InspectorConsoleAgent(InstrumentingAgents*, PageInjectedScriptManager*);
    virtual ~InspectorConsoleAgent();

    virtual void enable(ErrorString*);
    virtual void disable(ErrorString*);
    virtual void clearMessages(ErrorString*);
    bool enabled() const { return m_enabled; }
    void reset();

    virtual void didCreateFrontendAndBackend(Inspector::InspectorFrontendChannel*, Inspector::InspectorBackendDispatcher*) OVERRIDE;
    virtual void willDestroyFrontendAndBackend() OVERRIDE;

    void addMessageToConsole(MessageSource, MessageType, MessageLevel, const String& message, JSC::ExecState*, PassRefPtr<ScriptArguments>, unsigned long requestIdentifier = 0);
    void addMessageToConsole(MessageSource, MessageType, MessageLevel, const String& message, const String& scriptID, unsigned lineNumber, unsigned columnNumber, JSC::ExecState* = 0, unsigned long requestIdentifier = 0);

    // FIXME: Remove once we no longer generate stacks outside of Inspector.
    void addMessageToConsole(MessageSource, MessageType, MessageLevel, const String& message, PassRefPtr<ScriptCallStack>, unsigned long requestIdentifier = 0);

    Vector<unsigned> consoleMessageArgumentCounts();

    void startTiming(const String& title);
    void stopTiming(const String& title, PassRefPtr<ScriptCallStack>);
    void count(JSC::ExecState*, PassRefPtr<ScriptArguments>);

    void frameWindowDiscarded(DOMWindow*);

    void didFinishXHRLoading(unsigned long requestIdentifier, const String& url, const String& sendURL, unsigned sendLineNumber, unsigned sendColumnNumber);
    void didReceiveResponse(unsigned long requestIdentifier, const ResourceResponse&);
    void didFailLoading(unsigned long requestIdentifier, const ResourceError&);
#if ENABLE(JAVASCRIPT_DEBUGGER)
    void addProfileFinishedMessageToConsole(PassRefPtr<ScriptProfile>, unsigned lineNumber, unsigned columnNumber, const String& sourceURL);
    void addStartProfilingMessageToConsole(const String& title, unsigned lineNumber, unsigned columnNumber, const String& sourceURL);
#endif
    virtual void setMonitoringXHREnabled(ErrorString*, bool enabled);
    virtual void addInspectedNode(ErrorString*, int nodeId) = 0;
    virtual void addInspectedHeapObject(ErrorString*, int inspectedHeapObjectId);

    virtual bool isWorkerAgent() = 0;

protected:
    void addConsoleMessage(PassOwnPtr<ConsoleMessage>);

    PageInjectedScriptManager* m_injectedScriptManager;
    std::unique_ptr<Inspector::InspectorConsoleFrontendDispatcher> m_frontendDispatcher;
    RefPtr<Inspector::InspectorConsoleBackendDispatcher> m_backendDispatcher;
    ConsoleMessage* m_previousMessage;
    Vector<OwnPtr<ConsoleMessage>> m_consoleMessages;
    int m_expiredConsoleMessageCount;
    HashMap<String, unsigned> m_counts;
    HashMap<String, double> m_times;
    bool m_enabled;
    bool m_monitoringXHREnabled;
private:
    static int s_enabledAgentCount;
};

} // namespace WebCore

#endif // ENABLE(INSPECTOR)

#endif // !defined(InspectorConsoleAgent_h)
