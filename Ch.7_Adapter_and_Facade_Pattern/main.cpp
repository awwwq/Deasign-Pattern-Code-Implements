#include <iostream>

#include "TurkeyAdapter.h"
#include "EnumerationIterator.hpp"

void testDuck(Duck *duck)
{
    duck->quack();
    duck->fly();
}
template <typename _Tp>
void testIterator(_Tp *iterator)
{
    try
    {
        std::cout << iterator->hasNext() << std::endl;
        iterator->next();
        iterator->remove();
    }
    catch (...)
    {
        std::cout << "catch a exception" << std::endl;
    }
}

int main()
{
    //    MallardDuck *duck = new MallardDuck();
    //    WildTurkey *turkey = new WildTurkey();
    //    Duck *turkeyAdapter = new TurkeyAdapter(turkey);
    //
    //    std::cout<<"The Turkey says..."<<std::endl;
    //    turkey->gobble();
    //    turkey->fly();
    //
    //    std::cout<<"\nThe Duck says..."<<std::endl;
    //    testDuck(duck);
    //
    //    std::cout<<"\nThe TurkeyAdapter says..."<<std::endl;
    //    testDuck(turkeyAdapter);
    auto enumeration = new Enumeration<float>;
    auto enumerationIterator = new EnumerationIterator<float>(enumeration);

    testIterator(enumerationIterator);
}