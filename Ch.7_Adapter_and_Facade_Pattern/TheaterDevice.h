#pragma once

#include <iostream>
class TheaterDevice
{
};

class Amplifier; //create amplifier first, then use it to create other devices, binding devices to amplifier last
class Tuner
{
    Amplifier *m_amplifier;

public:
    Tuner(Amplifier *amplifier);
    void on();
    void off();
    void setAM();
    void setFM();
    void setFrequency(int hz);
};
class DvdPlayer
{
    Amplifier *m_amplifier;
    std::string m_movie;

public:
    DvdPlayer(Amplifier *amplifier);
    void on();
    void off();
    void eject();
    void pause();
    void play();
    void play(std::string movie);
    void setSurroundAudio();
    void setTwoChannelAudio();
    void stop();
    std::string getName();
};
class CdPlayer
{
private:
    Amplifier *m_amplifier;

public:
    CdPlayer(Amplifier *amplifier);
    void on();
    void off();
    void eject();
    void pause();
    void play();
    void stop();
    std::string getName();
};
class Projector
{
    DvdPlayer *m_dvdPlayer;

public:
    void setInput(DvdPlayer *dvdPlayer);
    void on();
    void off();
    void tvMode();
    void wideScreenMode();
};
class TheaterLights
{
public:
    void on();
    void dim(int lux);
    void off();
};
class Screen
{
public:
    void up();
    void down();
};
class PopcornPopper
{
public:
    void on();
    void pop();
    void off();
};

class Amplifier
{
    Tuner *m_tuner;
    DvdPlayer *m_dvdPlayer;
    CdPlayer *m_cdPlayer;

public:
    void on();
    void off();
    void setCD(CdPlayer *cdPlayer);
    void setDvd(DvdPlayer *dvdPlayer);
    void setStereoSound();
    void setSurroundSound();
    void setTuner(Tuner *tuner);
    void setVolume(int vol);
};
