#pragma once

#include <thread>
#include <list>
#include "./Input.hpp"

class AsyncInput {
public:
    AsyncInput(bool = true);
    ~AsyncInput();

    // returns handler id
    const int AddHandler(Input*);
    void RemoveHandler(int);

private:
    void CreateThread();
    void ProcessInput() const;

    std::thread* m_pInputWorker;
    std::list<Input*>* m_pListInputs;

    bool m_bProcessInput;
    bool m_bRun;

    unsigned int m_iInputId;
};