#include "TurkeyAdapter.h"
TurkeyAdapter::TurkeyAdapter(Turkey *turkey) {
    this->m_turkey = turkey;
}
void TurkeyAdapter::quack() {
    m_turkey->gobble();
}
void TurkeyAdapter::fly() {
     for(int i=0;i<5;i++) {
         m_turkey->fly();
     }
}

DuckAdapter::DuckAdapter(Duck *duck) {
    this->m_duck = duck;
    m_flyCount = 0;
}
void DuckAdapter::gobble() {
    m_duck->quack();
}
void DuckAdapter::fly() {
    m_flyCount++;
    if (m_flyCount!=5)
        return;;
    m_duck->fly();
    m_flyCount = 0;
}
