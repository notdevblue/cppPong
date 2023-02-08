#pragma once
#include <functional>

class IInputable
{
public:
    const virtual std::function<void>& GetCallback() const = 0;
};