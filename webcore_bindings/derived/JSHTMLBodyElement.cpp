/*
    This file is part of the WebKit open source project.
    This file has been generated by generate-bindings.pl. DO NOT MODIFY!

    This library is free software; you can redistribute it and/or
    modify it under the terms of the GNU Library General Public
    License as published by the Free Software Foundation; either
    version 2 of the License, or (at your option) any later version.

    This library is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
    Library General Public License for more details.

    You should have received a copy of the GNU Library General Public License
    along with this library; see the file COPYING.LIB.  If not, write to
    the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
    Boston, MA 02110-1301, USA.
*/

#include "config.h"
#include "JSHTMLBodyElement.h"

#include "EventListener.h"
#include "HTMLBodyElement.h"
#include "HTMLNames.h"
#include "JSEventListener.h"
#include "URL.h"
#include <runtime/JSString.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHTMLBodyElementTableValues[] =
{
    { "aLink", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementALink), (intptr_t)setJSHTMLBodyElementALink },
    { "background", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementBackground), (intptr_t)setJSHTMLBodyElementBackground },
    { "bgColor", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementBgColor), (intptr_t)setJSHTMLBodyElementBgColor },
    { "link", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementLink), (intptr_t)setJSHTMLBodyElementLink },
    { "text", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementText), (intptr_t)setJSHTMLBodyElementText },
    { "vLink", DontDelete, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementVLink), (intptr_t)setJSHTMLBodyElementVLink },
    { "onbeforeunload", DontDelete | DontEnum, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnbeforeunload), (intptr_t)setJSHTMLBodyElementOnbeforeunload },
    { "onhashchange", DontDelete | DontEnum, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnhashchange), (intptr_t)setJSHTMLBodyElementOnhashchange },
    { "onmessage", DontDelete | DontEnum, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnmessage), (intptr_t)setJSHTMLBodyElementOnmessage },
    { "onoffline", DontDelete | DontEnum, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnoffline), (intptr_t)setJSHTMLBodyElementOnoffline },
    { "ononline", DontDelete | DontEnum, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnonline), (intptr_t)setJSHTMLBodyElementOnonline },
    { "onpopstate", DontDelete | DontEnum, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnpopstate), (intptr_t)setJSHTMLBodyElementOnpopstate },
    { "onresize", DontDelete | DontEnum, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnresize), (intptr_t)setJSHTMLBodyElementOnresize },
    { "onstorage", DontDelete | DontEnum, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnstorage), (intptr_t)setJSHTMLBodyElementOnstorage },
    { "onunload", DontDelete | DontEnum, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnunload), (intptr_t)setJSHTMLBodyElementOnunload },
#if ENABLE(ORIENTATION_EVENTS)
    { "onorientationchange", DontDelete | DontEnum, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnorientationchange), (intptr_t)setJSHTMLBodyElementOnorientationchange },
#endif
    { "onblur", DontDelete | DontEnum, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnblur), (intptr_t)setJSHTMLBodyElementOnblur },
    { "onerror", DontDelete | DontEnum, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnerror), (intptr_t)setJSHTMLBodyElementOnerror },
    { "onfocus", DontDelete | DontEnum, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnfocus), (intptr_t)setJSHTMLBodyElementOnfocus },
    { "onload", DontDelete | DontEnum, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementOnload), (intptr_t)setJSHTMLBodyElementOnload },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHTMLBodyElementConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLBodyElementTable = { 64, 63, JSHTMLBodyElementTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHTMLBodyElementConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLBodyElementConstructorTable = { 1, 0, JSHTMLBodyElementConstructorTableValues, 0 };
const ClassInfo JSHTMLBodyElementConstructor::s_info = { "HTMLBodyElementConstructor", &Base::s_info, &JSHTMLBodyElementConstructorTable, 0, CREATE_METHOD_TABLE(JSHTMLBodyElementConstructor) };

JSHTMLBodyElementConstructor::JSHTMLBodyElementConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHTMLBodyElementConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHTMLBodyElementPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHTMLBodyElementConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHTMLBodyElementConstructor, JSDOMWrapper>(exec, JSHTMLBodyElementConstructorTable, jsCast<JSHTMLBodyElementConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSHTMLBodyElementPrototypeTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHTMLBodyElementPrototypeTable = { 1, 0, JSHTMLBodyElementPrototypeTableValues, 0 };
const ClassInfo JSHTMLBodyElementPrototype::s_info = { "HTMLBodyElementPrototype", &Base::s_info, &JSHTMLBodyElementPrototypeTable, 0, CREATE_METHOD_TABLE(JSHTMLBodyElementPrototype) };

JSObject* JSHTMLBodyElementPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHTMLBodyElement>(vm, globalObject);
}

const ClassInfo JSHTMLBodyElement::s_info = { "HTMLBodyElement", &Base::s_info, &JSHTMLBodyElementTable, 0 , CREATE_METHOD_TABLE(JSHTMLBodyElement) };

JSHTMLBodyElement::JSHTMLBodyElement(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<HTMLBodyElement> impl)
    : JSHTMLElement(structure, globalObject, impl)
{
}

void JSHTMLBodyElement::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSHTMLBodyElement::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHTMLBodyElementPrototype::create(vm, globalObject, JSHTMLBodyElementPrototype::createStructure(vm, globalObject, JSHTMLElementPrototype::self(vm, globalObject)));
}

bool JSHTMLBodyElement::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHTMLBodyElement* thisObject = jsCast<JSHTMLBodyElement*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    return getStaticValueSlot<JSHTMLBodyElement, Base>(exec, JSHTMLBodyElementTable, thisObject, propertyName, slot);
}

EncodedJSValue jsHTMLBodyElementALink(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLBodyElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::alinkAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLBodyElementBackground(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLBodyElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::backgroundAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLBodyElementBgColor(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLBodyElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::bgcolorAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLBodyElementLink(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLBodyElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::linkAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLBodyElementText(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLBodyElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::textAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLBodyElementVLink(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLBodyElement& impl = castedThis->impl();
    JSValue result = jsStringWithCache(exec, impl.fastGetAttribute(WebCore::HTMLNames::vlinkAttr));
    return JSValue::encode(result);
}


EncodedJSValue jsHTMLBodyElementOnbeforeunload(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLBodyElement& impl = castedThis->impl();
    if (EventListener* listener = impl.onbeforeunload()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return JSValue::encode(jsFunction);
        }
    }
    return JSValue::encode(jsNull());
}


EncodedJSValue jsHTMLBodyElementOnhashchange(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLBodyElement& impl = castedThis->impl();
    if (EventListener* listener = impl.onhashchange()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return JSValue::encode(jsFunction);
        }
    }
    return JSValue::encode(jsNull());
}


EncodedJSValue jsHTMLBodyElementOnmessage(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLBodyElement& impl = castedThis->impl();
    if (EventListener* listener = impl.onmessage()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return JSValue::encode(jsFunction);
        }
    }
    return JSValue::encode(jsNull());
}


EncodedJSValue jsHTMLBodyElementOnoffline(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLBodyElement& impl = castedThis->impl();
    if (EventListener* listener = impl.onoffline()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return JSValue::encode(jsFunction);
        }
    }
    return JSValue::encode(jsNull());
}


EncodedJSValue jsHTMLBodyElementOnonline(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLBodyElement& impl = castedThis->impl();
    if (EventListener* listener = impl.ononline()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return JSValue::encode(jsFunction);
        }
    }
    return JSValue::encode(jsNull());
}


EncodedJSValue jsHTMLBodyElementOnpopstate(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLBodyElement& impl = castedThis->impl();
    if (EventListener* listener = impl.onpopstate()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return JSValue::encode(jsFunction);
        }
    }
    return JSValue::encode(jsNull());
}


EncodedJSValue jsHTMLBodyElementOnresize(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLBodyElement& impl = castedThis->impl();
    if (EventListener* listener = impl.onresize()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return JSValue::encode(jsFunction);
        }
    }
    return JSValue::encode(jsNull());
}


EncodedJSValue jsHTMLBodyElementOnstorage(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLBodyElement& impl = castedThis->impl();
    if (EventListener* listener = impl.onstorage()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return JSValue::encode(jsFunction);
        }
    }
    return JSValue::encode(jsNull());
}


EncodedJSValue jsHTMLBodyElementOnunload(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLBodyElement& impl = castedThis->impl();
    if (EventListener* listener = impl.onunload()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return JSValue::encode(jsFunction);
        }
    }
    return JSValue::encode(jsNull());
}


#if ENABLE(ORIENTATION_EVENTS)
EncodedJSValue jsHTMLBodyElementOnorientationchange(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLBodyElement& impl = castedThis->impl();
    if (EventListener* listener = impl.onorientationchange()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return JSValue::encode(jsFunction);
        }
    }
    return JSValue::encode(jsNull());
}

#endif

EncodedJSValue jsHTMLBodyElementOnblur(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLBodyElement& impl = castedThis->impl();
    if (EventListener* listener = impl.onblur()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return JSValue::encode(jsFunction);
        }
    }
    return JSValue::encode(jsNull());
}


EncodedJSValue jsHTMLBodyElementOnerror(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLBodyElement& impl = castedThis->impl();
    if (EventListener* listener = impl.onerror()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return JSValue::encode(jsFunction);
        }
    }
    return JSValue::encode(jsNull());
}


EncodedJSValue jsHTMLBodyElementOnfocus(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLBodyElement& impl = castedThis->impl();
    if (EventListener* listener = impl.onfocus()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return JSValue::encode(jsFunction);
        }
    }
    return JSValue::encode(jsNull());
}


EncodedJSValue jsHTMLBodyElementOnload(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    HTMLBodyElement& impl = castedThis->impl();
    if (EventListener* listener = impl.onload()) {
        if (const JSEventListener* jsListener = JSEventListener::cast(listener)) {
            if (JSObject* jsFunction = jsListener->jsFunction(impl.scriptExecutionContext()))
                return JSValue::encode(jsFunction);
        }
    }
    return JSValue::encode(jsNull());
}


EncodedJSValue jsHTMLBodyElementConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSHTMLBodyElement* domObject = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSHTMLBodyElement::getConstructor(exec->vm(), domObject->globalObject()));
}

void JSHTMLBodyElement::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHTMLBodyElement* thisObject = jsCast<JSHTMLBodyElement*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    lookupPut<JSHTMLBodyElement, Base>(exec, propertyName, value, JSHTMLBodyElementTable, thisObject, slot);
}

void setJSHTMLBodyElementALink(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLBodyElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::alinkAttr, nativeValue);
}


void setJSHTMLBodyElementBackground(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLBodyElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::backgroundAttr, nativeValue);
}


void setJSHTMLBodyElementBgColor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLBodyElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::bgcolorAttr, nativeValue);
}


void setJSHTMLBodyElementLink(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLBodyElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::linkAttr, nativeValue);
}


void setJSHTMLBodyElementText(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLBodyElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::textAttr, nativeValue);
}


void setJSHTMLBodyElementVLink(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    HTMLBodyElement& impl = castedThis->impl();
    const String& nativeValue(valueToStringWithNullCheck(exec, value));
    if (exec->hadException())
        return;
    impl.setAttribute(WebCore::HTMLNames::vlinkAttr, nativeValue);
}


void setJSHTMLBodyElementOnbeforeunload(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    UNUSED_PARAM(exec);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement& impl = castedThis->impl();
    impl.setOnbeforeunload(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnhashchange(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    UNUSED_PARAM(exec);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement& impl = castedThis->impl();
    impl.setOnhashchange(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnmessage(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    UNUSED_PARAM(exec);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement& impl = castedThis->impl();
    impl.setOnmessage(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnoffline(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    UNUSED_PARAM(exec);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement& impl = castedThis->impl();
    impl.setOnoffline(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnonline(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    UNUSED_PARAM(exec);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement& impl = castedThis->impl();
    impl.setOnonline(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnpopstate(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    UNUSED_PARAM(exec);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement& impl = castedThis->impl();
    impl.setOnpopstate(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnresize(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    UNUSED_PARAM(exec);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement& impl = castedThis->impl();
    impl.setOnresize(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnstorage(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    UNUSED_PARAM(exec);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement& impl = castedThis->impl();
    impl.setOnstorage(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnunload(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    UNUSED_PARAM(exec);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement& impl = castedThis->impl();
    impl.setOnunload(createJSAttributeEventListener(exec, value, globalObject));
}


#if ENABLE(ORIENTATION_EVENTS)
void setJSHTMLBodyElementOnorientationchange(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    UNUSED_PARAM(exec);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement& impl = castedThis->impl();
    impl.setOnorientationchange(createJSAttributeEventListener(exec, value, globalObject));
}

#endif

void setJSHTMLBodyElementOnblur(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    UNUSED_PARAM(exec);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement& impl = castedThis->impl();
    impl.setOnblur(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnerror(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    UNUSED_PARAM(exec);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement& impl = castedThis->impl();
    impl.setOnerror(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnfocus(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    UNUSED_PARAM(exec);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement& impl = castedThis->impl();
    impl.setOnfocus(createJSAttributeEventListener(exec, value, globalObject));
}


void setJSHTMLBodyElementOnload(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue encodedValue)
{
    JSValue value = JSValue::decode(encodedValue);
    UNUSED_PARAM(exec);
    JSHTMLBodyElement* castedThis = jsDynamicCast<JSHTMLBodyElement*>(JSValue::decode(thisValue));
    if (!castedThis) {
        throwVMTypeError(exec);
        return;
    }
    UNUSED_PARAM(exec);
    JSDOMGlobalObject* globalObject = castedThis->globalObject();
    HTMLBodyElement& impl = castedThis->impl();
    impl.setOnload(createJSAttributeEventListener(exec, value, globalObject));
}


JSValue JSHTMLBodyElement::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHTMLBodyElementConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}


}