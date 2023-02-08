#pragma once

#include "IInputable.hpp"
#include <functional>

class Input : private IInputable {
public:
    Input(const char, const std::function<void>*);
    ~Input();

    const std::function<void>& GetCallback() const;

    const char chKey;
private:
    const std::function<void>* callback;
};