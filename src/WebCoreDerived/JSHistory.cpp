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
#include "JSHistory.h"

#include "ExceptionCode.h"
#include "History.h"
#include "JSDOMBinding.h"
#include <runtime/Error.h>
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

/* Hash table */

static const HashTableValue JSHistoryTableValues[] =
{
    { "length", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHistoryLength), (intptr_t)0 },
    { "state", DontDelete | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHistoryState), (intptr_t)0 },
    { "constructor", DontEnum | ReadOnly, NoIntrinsic, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsHistoryConstructor), (intptr_t)0 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHistoryTable = { 9, 7, JSHistoryTableValues, 0 };
/* Hash table for constructor */

static const HashTableValue JSHistoryConstructorTableValues[] =
{
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHistoryConstructorTable = { 1, 0, JSHistoryConstructorTableValues, 0 };
const ClassInfo JSHistoryConstructor::s_info = { "HistoryConstructor", &Base::s_info, &JSHistoryConstructorTable, 0, CREATE_METHOD_TABLE(JSHistoryConstructor) };

JSHistoryConstructor::JSHistoryConstructor(Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
}

void JSHistoryConstructor::finishCreation(VM& vm, JSDOMGlobalObject* globalObject)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
    putDirect(vm, vm.propertyNames->prototype, JSHistoryPrototype::self(vm, globalObject), DontDelete | ReadOnly);
    putDirect(vm, vm.propertyNames->length, jsNumber(0), ReadOnly | DontDelete | DontEnum);
}

bool JSHistoryConstructor::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSHistoryConstructor, JSDOMWrapper>(exec, JSHistoryConstructorTable, jsCast<JSHistoryConstructor*>(object), propertyName, slot);
}

/* Hash table for prototype */

static const HashTableValue JSHistoryPrototypeTableValues[] =
{
    { "back", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHistoryPrototypeFunctionBack), (intptr_t)0 },
    { "forward", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHistoryPrototypeFunctionForward), (intptr_t)0 },
    { "go", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHistoryPrototypeFunctionGo), (intptr_t)0 },
    { "pushState", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHistoryPrototypeFunctionPushState), (intptr_t)2 },
    { "replaceState", JSC::Function, NoIntrinsic, (intptr_t)static_cast<NativeFunction>(jsHistoryPrototypeFunctionReplaceState), (intptr_t)2 },
    { 0, 0, NoIntrinsic, 0, 0 }
};

static const HashTable JSHistoryPrototypeTable = { 17, 15, JSHistoryPrototypeTableValues, 0 };
const ClassInfo JSHistoryPrototype::s_info = { "HistoryPrototype", &Base::s_info, &JSHistoryPrototypeTable, 0, CREATE_METHOD_TABLE(JSHistoryPrototype) };

JSObject* JSHistoryPrototype::self(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSHistory>(vm, globalObject);
}

bool JSHistoryPrototype::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHistoryPrototype* thisObject = jsCast<JSHistoryPrototype*>(object);
    return getStaticFunctionSlot<JSObject>(exec, JSHistoryPrototypeTable, thisObject, propertyName, slot);
}

const ClassInfo JSHistory::s_info = { "History", &Base::s_info, &JSHistoryTable, 0 , CREATE_METHOD_TABLE(JSHistory) };

JSHistory::JSHistory(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<History> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl.leakRef())
{
}

void JSHistory::finishCreation(VM& vm)
{
    Base::finishCreation(vm);
    ASSERT(inherits(info()));
}

JSObject* JSHistory::createPrototype(VM& vm, JSGlobalObject* globalObject)
{
    return JSHistoryPrototype::create(vm, globalObject, JSHistoryPrototype::createStructure(vm, globalObject, globalObject->objectPrototype()));
}

void JSHistory::destroy(JSC::JSCell* cell)
{
    JSHistory* thisObject = static_cast<JSHistory*>(cell);
    thisObject->JSHistory::~JSHistory();
}

JSHistory::~JSHistory()
{
    releaseImplIfNotNull();
}

bool JSHistory::getOwnPropertySlot(JSObject* object, ExecState* exec, PropertyName propertyName, PropertySlot& slot)
{
    JSHistory* thisObject = jsCast<JSHistory*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (thisObject->getOwnPropertySlotDelegate(exec, propertyName, slot))
        return true;
    return getStaticValueSlot<JSHistory, Base>(exec, JSHistoryTable, thisObject, propertyName, slot);
}

bool JSHistory::getOwnPropertySlotByIndex(JSObject* object, ExecState* exec, unsigned index, PropertySlot& slot)
{
    JSHistory* thisObject = jsCast<JSHistory*>(object);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    PropertyName propertyName = Identifier::from(exec, index);
    if (thisObject->getOwnPropertySlotDelegate(exec, propertyName, slot))
        return true;
    return Base::getOwnPropertySlotByIndex(thisObject, exec, index, slot);
}

EncodedJSValue jsHistoryLength(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHistory* castedThis = jsDynamicCast<JSHistory*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    UNUSED_PARAM(exec);
    History& impl = castedThis->impl();
    JSValue result = jsNumber(impl.length());
    return JSValue::encode(result);
}


EncodedJSValue jsHistoryState(ExecState* exec, EncodedJSValue slotBase, EncodedJSValue thisValue, PropertyName)
{
    JSHistory* castedThis = jsDynamicCast<JSHistory*>(JSValue::decode(thisValue));
    UNUSED_PARAM(slotBase);
    if (!castedThis)
        return throwVMTypeError(exec);
    return JSValue::encode(castedThis->state(exec));
}


EncodedJSValue jsHistoryConstructor(ExecState* exec, EncodedJSValue thisValue, EncodedJSValue, PropertyName)
{
    JSHistory* domObject = jsDynamicCast<JSHistory*>(JSValue::decode(thisValue));
    if (!domObject)
        return throwVMTypeError(exec);
    if (!domObject)
        return throwVMTypeError(exec);
    return JSValue::encode(JSHistory::getConstructor(exec->vm(), domObject->globalObject()));
}

void JSHistory::put(JSCell* cell, ExecState* exec, PropertyName propertyName, JSValue value, PutPropertySlot& slot)
{
    JSHistory* thisObject = jsCast<JSHistory*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    if (thisObject->putDelegate(exec, propertyName, value, slot))
        return;
    Base::put(thisObject, exec, propertyName, value, slot);
}

void JSHistory::putByIndex(JSCell* cell, ExecState* exec, unsigned index, JSValue value, bool shouldThrow)
{
    JSHistory* thisObject = jsCast<JSHistory*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    PropertyName propertyName = Identifier::from(exec, index);
    PutPropertySlot slot(thisObject, shouldThrow);
    if (thisObject->putDelegate(exec, propertyName, value, slot))
        return;
    Base::putByIndex(cell, exec, index, value, shouldThrow);
}

JSValue JSHistory::getConstructor(VM& vm, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSHistoryConstructor>(vm, jsCast<JSDOMGlobalObject*>(globalObject));
}

EncodedJSValue JSC_HOST_CALL jsHistoryPrototypeFunctionBack(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSHistory* castedThis = jsDynamicCast<JSHistory*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHistory::info());
    History& impl = castedThis->impl();
    ScriptExecutionContext* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    impl.back(scriptContext);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsHistoryPrototypeFunctionForward(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSHistory* castedThis = jsDynamicCast<JSHistory*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHistory::info());
    History& impl = castedThis->impl();
    ScriptExecutionContext* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    impl.forward(scriptContext);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsHistoryPrototypeFunctionGo(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSHistory* castedThis = jsDynamicCast<JSHistory*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHistory::info());
    History& impl = castedThis->impl();
    ScriptExecutionContext* scriptContext = jsCast<JSDOMGlobalObject*>(exec->lexicalGlobalObject())->scriptExecutionContext();
    if (!scriptContext)
        return JSValue::encode(jsUndefined());
    int distance(toInt32(exec, exec->argument(0), NormalConversion));
    if (exec->hadException())
        return JSValue::encode(jsUndefined());
    impl.go(scriptContext, distance);
    return JSValue::encode(jsUndefined());
}

EncodedJSValue JSC_HOST_CALL jsHistoryPrototypeFunctionPushState(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSHistory* castedThis = jsDynamicCast<JSHistory*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHistory::info());
    return JSValue::encode(castedThis->pushState(exec));
}

EncodedJSValue JSC_HOST_CALL jsHistoryPrototypeFunctionReplaceState(ExecState* exec)
{
    JSValue thisValue = exec->hostThisValue();
    JSHistory* castedThis = jsDynamicCast<JSHistory*>(thisValue);
    if (!castedThis)
        return throwVMTypeError(exec);
    ASSERT_GC_OBJECT_INHERITS(castedThis, JSHistory::info());
    return JSValue::encode(castedThis->replaceState(exec));
}

void JSHistory::visitChildren(JSCell* cell, SlotVisitor& visitor)
{
    JSHistory* thisObject = jsCast<JSHistory*>(cell);
    ASSERT_GC_OBJECT_INHERITS(thisObject, info());
    COMPILE_ASSERT(StructureFlags & OverridesVisitChildren, OverridesVisitChildrenWithoutSettingFlag);
    ASSERT(thisObject->structure()->typeInfo().overridesVisitChildren());
    Base::visitChildren(thisObject, visitor);
    visitor.append(&thisObject->m_state);
}

static inline bool isObservable(JSHistory* jsHistory)
{
    if (jsHistory->hasCustomProperties())
        return true;
    return false;
}

bool JSHistoryOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSHistory* jsHistory = jsCast<JSHistory*>(handle.get().asCell());
    if (!isObservable(jsHistory))
        return false;
    Frame* root = jsHistory->impl().frame();
    if (!root)
        return false;
    return visitor.containsOpaqueRoot(root);
}

void JSHistoryOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSHistory* jsHistory = jsCast<JSHistory*>(handle.get().asCell());
    DOMWrapperWorld& world = *static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, &jsHistory->impl(), jsHistory);
    jsHistory->releaseImpl();
}

#if ENABLE(BINDING_INTEGRITY)
#if PLATFORM(WIN)
#pragma warning(disable: 4483)
extern "C" { extern void (*const __identifier("??_7History@WebCore@@6B@")[])(); }
#else
extern "C" { extern void* _ZTVN7WebCore7HistoryE[]; }
#endif
#endif
JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, History* impl)
{
    if (!impl)
        return jsNull();
    if (JSValue result = getExistingWrapper<JSHistory>(exec, impl))
        return result;

#if ENABLE(BINDING_INTEGRITY)
    void* actualVTablePointer = *(reinterpret_cast<void**>(impl));
#if PLATFORM(WIN)
    void* expectedVTablePointer = reinterpret_cast<void*>(__identifier("??_7History@WebCore@@6B@"));
#else
    void* expectedVTablePointer = &_ZTVN7WebCore7HistoryE[2];
#if COMPILER(CLANG)
    // If this fails History does not have a vtable, so you need to add the
    // ImplementationLacksVTable attribute to the interface definition
    COMPILE_ASSERT(__is_polymorphic(History), History_is_not_polymorphic);
#endif
#endif
    // If you hit this assertion you either have a use after free bug, or
    // History has subclasses. If History has subclasses that get passed
    // to toJS() we currently require History you to opt out of binding hardening
    // by adding the SkipVTableValidation attribute to the interface IDL definition
    RELEASE_ASSERT(actualVTablePointer == expectedVTablePointer);
#endif
    ReportMemoryCost<History>::reportMemoryCost(exec, impl);
    return createNewWrapper<JSHistory>(exec, globalObject, impl);
}

History* toHistory(JSC::JSValue value)
{
    return value.inherits(JSHistory::info()) ? &jsCast<JSHistory*>(value)->impl() : 0;
}

}
