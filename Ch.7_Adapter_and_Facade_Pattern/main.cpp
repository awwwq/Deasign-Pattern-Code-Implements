#include <iostream>

#include "TurkeyAdapter.h"
#include "EnumerationIterator.hpp"
#include "HomeTheaterFacade.h"

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
    Amplifier *amplifier = new Amplifier();
    Tuner *tuner = new Tuner(amplifier);
    DvdPlayer *dvdPlayer = new DvdPlayer(amplifier);
    CdPlayer *cdPlayer = new CdPlayer(amplifier);
    Projector *projector = new Projector();
    Screen *screen = new Screen();
    TheaterLights *lights = new TheaterLights();
    PopcornPopper *popper = new PopcornPopper();

    HomeTheaterFacade *homeTheaterFacade = new HomeTheaterFacade(amplifier, tuner, dvdPlayer, cdPlayer, projector, screen, lights, popper);
    homeTheaterFacade->watchMovie("Raiders of the Lost Ark");
    homeTheaterFacade->endMovie();
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
    //    auto enumeration = new Enumeration<float>;
    //    auto enumerationIterator = new EnumerationIterator<float>(enumeration);
    //
    //    testIterator(enumerationIterator);
}