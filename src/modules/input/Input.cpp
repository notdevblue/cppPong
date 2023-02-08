#include "./Input.hpp"
#include "./IInputable.hpp"
#include <functional>

Input::Input(const char key,
             const std::function<void>* callback)
    : chKey(key), callback(callback) {
}

Input::~Input() {
}

const std::function<void>& Input::GetCallback() const{
    return *callback;
}