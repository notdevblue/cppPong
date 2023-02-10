#include "./Input.hpp"
#include "./IInputable.hpp"
#include <functional>

Input::Input(const char key,
             const std::function<void>* callback)
    : chKey(key), callback(callback) {
}

Input::Input(Input&& o)
    : chKey(std::move(o.chKey)),
      callback(std::move(o.callback)) {
}

Input::~Input() {
}

void Input::SetID(const int& id) {
    m_iId = id;
}

const int& Input::GetID() const {
    return m_iId;
}

const std::function<void>& Input::GetCallback() const {
    return *callback;
}