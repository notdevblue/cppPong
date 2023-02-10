#include "./AsyncInput.hpp"
#include "./IInputable.hpp"
#include <conio.h>
#include <functional>
#include <thread>

AsyncInput::AsyncInput(bool bStartActive)
    : m_bProcessInput(bStartActive),
      m_bRun(true),
      m_iInputId(0),
      m_vectorInputs(nullptr),
      m_pInputWorker(nullptr) {

    m_pListInputs = new std::list<const Input*>;

    if (m_bProcessInput)
        CreateThread();
}

AsyncInput::~AsyncInput() {

    if (m_pInputWorker != nullptr) {
        m_pInputWorker->join();
        delete m_pInputWorker;
    }

    delete m_vectorInputs;
}

const int AsyncInput::AddHandler(const Input& o) {
    o.SetID(++m_iInputId);
    m_pListInputs->push_back(o);
    // TODO: Input system
    return m_iInputId;
}

void AsyncInput::RemoveHandler(int id) {

}

void AsyncInput::CreateThread() {
    m_pInputWorker = new std::thread(ProcessInput, this);
}

void AsyncInput::ProcessInput() const {
    // while (m_bRun) {

    // }
}