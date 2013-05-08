/*
 * Copyright (C) 2010 Google Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1.  Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 * 2.  Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY APPLE AND ITS CONTRIBUTORS "AS IS" AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL APPLE OR ITS CONTRIBUTORS BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "config.h"
#include "IDBKeyPathBackendImpl.h"

#include "IDBKey.h"
#include "SerializedScriptValue.h"


#if PLATFORM(CHROMIUM)
#error "Chromium should not compile this file and instead define its own version of this factory that navigates the multi-process boundry."
#endif

#if ENABLE(INDEXED_DATABASE)

namespace WebCore {

void IDBKeyPathBackendImpl::createIDBKeysFromSerializedValuesAndKeyPath(const Vector<RefPtr<SerializedScriptValue>, 0>&, const IDBKeyPath&, Vector<RefPtr<IDBKey>, 0>&)
{
    // FIXME: Implement this method once JSC supports WireFormat for SerializedScriptValue.
}

PassRefPtr<SerializedScriptValue> IDBKeyPathBackendImpl::injectIDBKeyIntoSerializedValue(PassRefPtr<IDBKey>, PassRefPtr<SerializedScriptValue>, const IDBKeyPath&)
{
    // FIXME: Implement this method once JSC supports WireFormat for SerializedScriptValue.
    return PassRefPtr<SerializedScriptValue>();
}

}

#endif // ENABLE(INDEXED_DATABASE)
