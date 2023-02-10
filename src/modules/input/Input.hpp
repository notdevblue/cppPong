#pragma once

#include "IInputable.hpp"
#include <functional>

class Input : private IInputable {
public:
    Input(const char, const std::function<void>*);
    Input(Input&&);
    ~Input();

    void SetID(const int& id);
    const int& GetID() const;
    const std::function<void>& GetCallback() const;

    const char chKey;
private:
    const std::function<void>* callback;

    int m_iId;
};