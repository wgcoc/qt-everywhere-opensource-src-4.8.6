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
#include "JSDOMStringMap.h"

#include "DOMStringMap.h"
#include "JSDOMStringMapCustom.h"
#include "wtf/text/AtomicString.h"
#include <wtf/GetPtr.h>

using namespace JSC;

namespace WebCore {

ASSERT_CLASS_FITS_IN_CELL(JSDOMStringMap);

/* Hash table */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDOMStringMapTableValues[2] =
{
    { "constructor", DontEnum | ReadOnly, (intptr_t)static_cast<PropertySlot::GetValueFunc>(jsDOMStringMapConstructor), (intptr_t)0 THUNK_GENERATOR(0) },
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDOMStringMapTable = { 2, 1, JSDOMStringMapTableValues, 0 };
/* Hash table for constructor */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDOMStringMapConstructorTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDOMStringMapConstructorTable = { 1, 0, JSDOMStringMapConstructorTableValues, 0 };
class JSDOMStringMapConstructor : public DOMConstructorObject {
public:
    JSDOMStringMapConstructor(JSC::ExecState*, JSC::Structure*, JSDOMGlobalObject*);

    virtual bool getOwnPropertySlot(JSC::ExecState*, const JSC::Identifier&, JSC::PropertySlot&);
    virtual bool getOwnPropertyDescriptor(JSC::ExecState*, const JSC::Identifier&, JSC::PropertyDescriptor&);
    static const JSC::ClassInfo s_info;
    static JSC::Structure* createStructure(JSC::JSGlobalData& globalData, JSC::JSValue prototype)
    {
        return JSC::Structure::create(globalData, prototype, JSC::TypeInfo(JSC::ObjectType, StructureFlags), AnonymousSlotCount, &s_info);
    }
protected:
    static const unsigned StructureFlags = JSC::OverridesGetOwnPropertySlot | JSC::ImplementsHasInstance | DOMConstructorObject::StructureFlags;
};

const ClassInfo JSDOMStringMapConstructor::s_info = { "DOMStringMapConstructor", &DOMConstructorObject::s_info, &JSDOMStringMapConstructorTable, 0 };

JSDOMStringMapConstructor::JSDOMStringMapConstructor(ExecState* exec, Structure* structure, JSDOMGlobalObject* globalObject)
    : DOMConstructorObject(structure, globalObject)
{
    ASSERT(inherits(&s_info));
    putDirect(exec->globalData(), exec->propertyNames().prototype, JSDOMStringMapPrototype::self(exec, globalObject), DontDelete | ReadOnly);
}

bool JSDOMStringMapConstructor::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    return getStaticValueSlot<JSDOMStringMapConstructor, JSDOMWrapper>(exec, &JSDOMStringMapConstructorTable, this, propertyName, slot);
}

bool JSDOMStringMapConstructor::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    return getStaticValueDescriptor<JSDOMStringMapConstructor, JSDOMWrapper>(exec, &JSDOMStringMapConstructorTable, this, propertyName, descriptor);
}

/* Hash table for prototype */
#if ENABLE(JIT)
#define THUNK_GENERATOR(generator) , generator
#else
#define THUNK_GENERATOR(generator)
#endif

static const HashTableValue JSDOMStringMapPrototypeTableValues[1] =
{
    { 0, 0, 0, 0 THUNK_GENERATOR(0) }
};

#undef THUNK_GENERATOR
static JSC_CONST_HASHTABLE HashTable JSDOMStringMapPrototypeTable = { 1, 0, JSDOMStringMapPrototypeTableValues, 0 };
const ClassInfo JSDOMStringMapPrototype::s_info = { "DOMStringMapPrototype", &JSC::JSObjectWithGlobalObject::s_info, &JSDOMStringMapPrototypeTable, 0 };

JSObject* JSDOMStringMapPrototype::self(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMPrototype<JSDOMStringMap>(exec, globalObject);
}

const ClassInfo JSDOMStringMap::s_info = { "DOMStringMap", &JSDOMWrapper::s_info, &JSDOMStringMapTable, 0 };

JSDOMStringMap::JSDOMStringMap(Structure* structure, JSDOMGlobalObject* globalObject, PassRefPtr<DOMStringMap> impl)
    : JSDOMWrapper(structure, globalObject)
    , m_impl(impl)
{
    ASSERT(inherits(&s_info));
}

JSObject* JSDOMStringMap::createPrototype(ExecState* exec, JSGlobalObject* globalObject)
{
    return new (exec) JSDOMStringMapPrototype(exec->globalData(), globalObject, JSDOMStringMapPrototype::createStructure(globalObject->globalData(), globalObject->objectPrototype()));
}

bool JSDOMStringMap::getOwnPropertySlot(ExecState* exec, const Identifier& propertyName, PropertySlot& slot)
{
    const HashEntry* entry = JSDOMStringMapTable.entry(exec, propertyName);
    if (entry) {
        slot.setCustom(this, entry->propertyGetter());
        return true;
    }
    if (canGetItemsForName(exec, static_cast<DOMStringMap*>(impl()), propertyName)) {
        slot.setCustom(this, nameGetter);
        return true;
    }
    return getStaticValueSlot<JSDOMStringMap, Base>(exec, &JSDOMStringMapTable, this, propertyName, slot);
}

bool JSDOMStringMap::getOwnPropertyDescriptor(ExecState* exec, const Identifier& propertyName, PropertyDescriptor& descriptor)
{
    const HashEntry* entry = JSDOMStringMapTable.entry(exec, propertyName);
    if (entry) {
        PropertySlot slot;
        slot.setCustom(this, entry->propertyGetter());
        descriptor.setDescriptor(slot.getValue(exec, propertyName), entry->attributes());
        return true;
    }
    if (canGetItemsForName(exec, static_cast<DOMStringMap*>(impl()), propertyName)) {
        PropertySlot slot;
        slot.setCustom(this, nameGetter);
        descriptor.setDescriptor(slot.getValue(exec, propertyName), ReadOnly | DontDelete | DontEnum);
        return true;
    }
    return getStaticValueDescriptor<JSDOMStringMap, Base>(exec, &JSDOMStringMapTable, this, propertyName, descriptor);
}

JSValue jsDOMStringMapConstructor(ExecState* exec, JSValue slotBase, const Identifier&)
{
    JSDOMStringMap* domObject = static_cast<JSDOMStringMap*>(asObject(slotBase));
    return JSDOMStringMap::getConstructor(exec, domObject->globalObject());
}

void JSDOMStringMap::put(ExecState* exec, const Identifier& propertyName, JSValue value, PutPropertySlot& slot)
{
    if (putDelegate(exec, propertyName, value, slot))
        return;
    Base::put(exec, propertyName, value, slot);
}

JSValue JSDOMStringMap::getConstructor(ExecState* exec, JSGlobalObject* globalObject)
{
    return getDOMConstructor<JSDOMStringMapConstructor>(exec, static_cast<JSDOMGlobalObject*>(globalObject));
}

static inline bool isObservable(JSDOMStringMap* jsDOMStringMap)
{
    if (jsDOMStringMap->hasCustomProperties())
        return true;
    return false;
}

bool JSDOMStringMapOwner::isReachableFromOpaqueRoots(JSC::Handle<JSC::Unknown> handle, void*, SlotVisitor& visitor)
{
    JSDOMStringMap* jsDOMStringMap = static_cast<JSDOMStringMap*>(handle.get().asCell());
    if (!isObservable(jsDOMStringMap))
        return false;
    Element* element = jsDOMStringMap->impl()->element();
    if (!element)
        return false;
    void* root = WebCore::root(element);
    return visitor.containsOpaqueRoot(root);
}

void JSDOMStringMapOwner::finalize(JSC::Handle<JSC::Unknown> handle, void* context)
{
    JSDOMStringMap* jsDOMStringMap = static_cast<JSDOMStringMap*>(handle.get().asCell());
    DOMWrapperWorld* world = static_cast<DOMWrapperWorld*>(context);
    uncacheWrapper(world, jsDOMStringMap->impl(), jsDOMStringMap);
}

JSC::JSValue toJS(JSC::ExecState* exec, JSDOMGlobalObject* globalObject, DOMStringMap* impl)
{
    return wrap<JSDOMStringMap>(exec, globalObject, impl);
}

DOMStringMap* toDOMStringMap(JSC::JSValue value)
{
    return value.inherits(&JSDOMStringMap::s_info) ? static_cast<JSDOMStringMap*>(asObject(value))->impl() : 0;
}

}
