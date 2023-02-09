#include "./AsyncInput.hpp"
#include "./IInputable.hpp"
#include <conio.h>
#include <functional>
#include <thread>

#include <iostream>

AsyncInput::AsyncInput(bool bStartActive)
    : m_bProcessInput(bStartActive),
      m_bRun(true),
      m_vectorInputs(nullptr) {
    if (m_bProcessInput)
    CreateThread();
}

AsyncInput::~AsyncInput() {
    m_inputWorker.join();

    delete m_vectorInputs;
}

void AsyncInput::CreateThread() {
    m_inputWorker = std::thread(ProcessInput, this);
}

void AsyncInput::ProcessInput() const {
    while (m_bRun) {
        
    }
}