#pragma once

#include "Duck.h"
#include "Turkey.h"

class TurkeyAdapter : public Duck
{
    Turkey *m_turkey;

public:
    TurkeyAdapter(Turkey *tukey);
    void quack() override;
    void fly() override;
};

class DuckAdapter : public Turkey
{
    Duck *m_duck;
    int m_flyCount;

public:
    DuckAdapter(Duck *duck);
    void gobble() override;
    void fly() override;
};
