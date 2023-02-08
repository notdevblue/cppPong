#pragma once

#include <functional>
#include <map>
#include <thread>

template <typename T>
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

    std::thread* m_inputWorker;
    std::vector<const T*>* m_vectorInputs;

    bool m_bProcessInput;
    bool m_bRun;
};