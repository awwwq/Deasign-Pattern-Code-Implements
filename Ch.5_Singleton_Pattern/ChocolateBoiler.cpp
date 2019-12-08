#include "ChocolateBoiler.h"
std::atomic<ChocolateBoiler *> ChocolateBoiler::m_instance;
std::mutex ChocolateBoiler::m_mutex;
//ChocolateBoiler* ChocolateBoiler::uniqueInstance;

ChocolateBoiler::ChocolateBoiler()
{
    m_empty = true;
    m_boiled = false;
}
ChocolateBoiler::~ChocolateBoiler() = default;
ChocolateBoiler *ChocolateBoiler::getInstance()
{
    ChocolateBoiler *tmp = m_instance.load(std::memory_order_acquire);
    if (tmp == nullptr)
    {
        std::lock_guard<std::mutex> lock(m_mutex);
        tmp = m_instance.load(std::memory_order_relaxed);
        if (tmp == nullptr)
        {
            tmp = new ChocolateBoiler();
            m_instance.store(tmp, std::__1::memory_order_release);
        }
    }
    return tmp;
}
void ChocolateBoiler::fill()
{
    if (isEmpty())
    {
        m_empty = false;
        m_boiled = false;
    }
}
void ChocolateBoiler::drain()
{
    if (!isEmpty() && isBoiled())
    {
        m_empty = true;
    }
}
void ChocolateBoiler::boil()
{
    if (!isEmpty() && !isBoiled())
    {
        m_boiled = true;
    }
}
bool ChocolateBoiler::isEmpty()
{
    return m_empty;
}
bool ChocolateBoiler::isBoiled()
{
    return m_boiled;
}