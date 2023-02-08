#include "./AsyncInput.hpp"
#include "./IInputable.hpp"
#include <conio.h>
#include <functional>
#include <thread>

#include <iostream>

template <typename T>
AsyncInput<T>::AsyncInput(bool bStartActive)
    : m_inputWorker(nullptr),
      m_bProcessInput(bStartActive),
      m_bRun(true),
      m_vectorInputs(nullptr) {
    T* temp;

    std::cout << dynamic_cast<IInputable*>(temp) << std::endl;
    std::cout << "AAAAAAA" << std::endl;
    exit(0);

    if (dynamic_cast<IInputable*>(temp) == nullptr) {
        // printf("ERR\r\n");
        exit(1);
    } else {
        exit(0);
    }

    CreateThread();
}

template <typename T>
AsyncInput<T>::~AsyncInput() {
    delete m_vectorInputs;
    delete m_inputWorker;
}

template <typename T>
void AsyncInput<T>::CreateThread() {
    m_inputWorker = new std::thread(ProcessInput);
}

template <typename T>
void AsyncInput<T>::ProcessInput() const {
    while (m_bRun) {
        
    }
}