#pragma once

#include <iostream>
#include <thread>
class ChocolateBoiler
{
private:
    bool m_empty;
    bool m_boiled;
    static std::atomic<ChocolateBoiler *> m_instance;
    static std::mutex m_mutex;
    //static ChocolateBoiler* uniqueInstance;
    ChocolateBoiler();
    ~ChocolateBoiler();

public:
    static ChocolateBoiler *getInstance();
    void fill();
    void drain();
    void boil();
    bool isEmpty();
    bool isBoiled();
};
