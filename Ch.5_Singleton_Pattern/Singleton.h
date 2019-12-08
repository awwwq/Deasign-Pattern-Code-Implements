#pragma once
#include <thread>
class Singleton
{
private:
    static std::atomic<Singleton *> m_instance;
    static std::mutex m_mutex;
    Singleton();
    ~Singleton();

public:
    static Singleton *getInstance();
    static void deleteInstance();
};
