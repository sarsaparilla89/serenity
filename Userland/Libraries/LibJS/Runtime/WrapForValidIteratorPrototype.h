/*
 * Copyright (c) 2023, Tim Flynn <trflynn89@serenityos.org>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#pragma once

#include <LibJS/Runtime/Completion.h>
#include <LibJS/Runtime/Iterator.h>
#include <LibJS/Runtime/PrototypeObject.h>

namespace JS {

class WrapForValidIteratorPrototype final : public PrototypeObject<WrapForValidIteratorPrototype, Iterator> {
    JS_PROTOTYPE_OBJECT(WrapForValidIteratorPrototype, Iterator, Iterator);

public:
    virtual ThrowCompletionOr<void> initialize(Realm&) override;

private:
    explicit WrapForValidIteratorPrototype(Realm&);

    JS_DECLARE_NATIVE_FUNCTION(next);
    JS_DECLARE_NATIVE_FUNCTION(return_);
};

}
