#pragma once

#include <thread>
#include <vector>
#include "./Input.hpp"

class AsyncInput {
public:
    AsyncInput(bool = false);
    ~AsyncInput();

    // returns handler id
    // const int AddHandler(const T*);

    // void RemoveHandler(int);

private:
    void CreateThread();
    void ProcessInput() const;

    // std::thread* m_inputWorker;
    std::thread m_inputWorker;
    std::vector<const Input*>* m_vectorInputs;

    bool m_bProcessInput;
    bool m_bRun;
};