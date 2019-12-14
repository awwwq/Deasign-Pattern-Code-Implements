
#include "HomeTheaterFacade.h"

#include <utility>
HomeTheaterFacade::HomeTheaterFacade(Amplifier *amplifier, Tuner *tuner, DvdPlayer *dvdPlayer, CdPlayer *cdPlayer,
                                     Projector *projector, Screen *screen, TheaterLights *lights,
                                     PopcornPopper *popper) {
    this->m_amplifier = amplifier;
    this->m_tuner = tuner;
    this->m_dvdPlayer = dvdPlayer;
    this->m_cdPlayer = cdPlayer;
    this->m_projector = projector;
    this->m_screen = screen;
    this->m_theaterLights = lights;
    this->m_popcornPopper = popper;
}
void HomeTheaterFacade::watchMovie(std::string movie) {
    std::cout<<"Get ready to watch a movie..."<<std::endl;
    m_popcornPopper->on();
    m_popcornPopper->pop();
    m_theaterLights->dim(10);
    m_screen->down();
    m_projector->on();
    m_projector->wideScreenMode();
    m_amplifier->on();
    m_amplifier->setDvd(m_dvdPlayer);
    m_amplifier->setSurroundSound();
    m_amplifier->setVolume(5);
    m_dvdPlayer->on();
    m_dvdPlayer->play(std::move(movie));
}
void HomeTheaterFacade::endMovie() {
    std::cout<<"Shutting movie theater down"<<std::endl;
    m_popcornPopper->off();
    m_theaterLights->on();
    m_screen->up();
    m_projector->off();
    m_amplifier->off();
    m_dvdPlayer->stop();
    m_dvdPlayer->eject();
    m_dvdPlayer->off();
}
