#pragma once

#include "TheaterDevice.h"

class HomeTheaterFacade
{
    Amplifier *m_amplifier;
    Tuner *m_tuner;
    DvdPlayer *m_dvdPlayer;
    CdPlayer *m_cdPlayer;
    Projector *m_projector;
    TheaterLights *m_theaterLights;
    Screen *m_screen;
    PopcornPopper *m_popcornPopper;

public:
    HomeTheaterFacade(Amplifier *amplifier, Tuner *tuner, DvdPlayer *dvdPlayer, CdPlayer *cdPlayer, Projector *projector, Screen *screen, TheaterLights *lights, PopcornPopper *popper);
    void watchMovie(std::string movie);
    void endMovie();
};
