#include "Singleton.h"
std::atomic<Singleton *> Singleton::m_instance = nullptr;
std::mutex Singleton::m_mutex;
Singleton *Singleton::getInstance()
{
    Singleton *tmp = m_instance.load(std::memory_order_acquire); //memory fence
    if (tmp == nullptr)                                          //double checked locking
    {
        std::lock_guard<std::mutex> lock(m_mutex); //thread-safe guard here
        tmp = m_instance.load(std::memory_order_relaxed);
        if (tmp == nullptr)
        {
            tmp = new Singleton();
            m_instance.store(tmp, std::memory_order_release); //memory fence
        }
    }
    return tmp;
}
void Singleton::deleteInstance()
{
}
Singleton::Singleton() = default;
Singleton::~Singleton() = default;