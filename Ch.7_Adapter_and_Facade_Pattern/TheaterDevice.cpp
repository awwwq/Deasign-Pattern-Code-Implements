#include "TheaterDevice.h"
using namespace std;
void PopcornPopper::on() { cout << "Popcorn Popper on" << endl; }
void PopcornPopper::pop() { cout << "Popcorn Popper popping popcorn!" << endl; }
void PopcornPopper::off() { cout << "Popcorn Popper off" << endl; }

void TheaterLights::on() { cout << "Theater Ceiling Lights on" << endl; }
void TheaterLights::dim(int lux) { cout << "Theater Ceiling Lights dim to " << lux << "%" << endl; }
void TheaterLights::off() { cout << "Theater Ceiling Lights off" << endl; }

void Screen::up() { cout << "Theater screen going up" << endl; }
void Screen::down() { cout << "Theater screen going down" << endl; }

void Projector::on() { cout << "Top-O-Line Projector on" << endl; }
void Projector::off() { cout << "Top-O-Line Projector off" << endl; }
void Projector::tvMode() { cout << "Top-O-Line Projector in tv mode" << endl; }
void Projector::wideScreenMode() { cout << "Top-O-Line Projector in wide screen mode" << endl; }
void Projector::setInput(DvdPlayer *dvdPlayer) { this->m_dvdPlayer = dvdPlayer; }

void Amplifier::on() { cout << "Top-O-Line Amplifier on" << endl; }
void Amplifier::off() { cout << "Top-O-Line Amplifier off" << endl; }
void Amplifier::setDvd(DvdPlayer *dvdPlayer)
{
    this->m_dvdPlayer = dvdPlayer;
    cout << "Top-O-Line Amplifier setting DVD player to " << dvdPlayer->getName() << endl;
}
void Amplifier::setCD(CdPlayer *cdPlayer)
{
    this->m_cdPlayer = cdPlayer;
    cout << "Top-O-Line Amplifier setting DVD player to " << cdPlayer->getName() << endl;
}
void Amplifier::setTuner(Tuner *tuner) { this->m_tuner = tuner; }
void Amplifier::setSurroundSound() { cout << "Top-O-Line Amplifier surround sound on" << endl; }
void Amplifier::setStereoSound() { cout << "Top-O-Line Amplifier stereo sound on" << endl; }
void Amplifier::setVolume(int vol) { cout << "Top-O-Line Amplifier set volume to " << vol << endl; }

DvdPlayer::DvdPlayer(Amplifier *amplifier)
{
    this->m_amplifier = amplifier;
    m_movie = "";
}
void DvdPlayer::on() { cout << "Top-O-Line DVD player on" << endl; }
void DvdPlayer::off() { cout << "Top-O-Line DVD player off" << endl; }
std::string DvdPlayer::getName() { return "Top-O-Line DVD player"; }
void DvdPlayer::play() { cout << "Top-O-Line DVD player play " << m_movie << endl; }
void DvdPlayer::play(std::string movie)
{
    cout << "Top-O-Line DVD player play " << movie << endl;
    this->m_movie = movie;
}
void DvdPlayer::pause() { cout << "Top-O-Line DVD player paused" << endl; }
void DvdPlayer::stop() { cout << "Top-O-Line DVD player stopped " << m_movie << endl; }
void DvdPlayer::eject()
{
    cout << "Top-O-Line DVD player eject" << endl;
    m_movie = "";
}
void DvdPlayer::setSurroundAudio() {}
void DvdPlayer::setTwoChannelAudio() {}

CdPlayer::CdPlayer(Amplifier *amplifier) { this->m_amplifier = amplifier; }
void CdPlayer::on() { cout << "Top-O-Line CD player on" << endl; }
void CdPlayer::off() { cout << "Top-O-Line CD player off" << endl; }
std::string CdPlayer::getName() { return "Top-O-Line CD player"; }
void CdPlayer::play() { cout << "Top-O-Line Cd player play " << endl; }
void CdPlayer::pause() { cout << "Top-O-Line Cd player paused" << endl; }
void CdPlayer::stop() { cout << "Top-O-Line Cd player stopped " << endl; }
void CdPlayer::eject() { cout << "Top-O-Line Cd player eject" << endl; }

void Tuner::on() { cout << "Top-O-Line Tuner on" << endl; }
void Tuner::off() { cout << "Top-O-Line Tuner off" << endl; }
void Tuner::setAM() { cout << "Top-O-Line Tuner setting AM" << endl; }
void Tuner::setFM() { cout << "Top-O-Line Tuner setting FM" << endl; }
Tuner::Tuner(Amplifier *amplifier) { this->m_amplifier = amplifier; }
void Tuner::setFrequency(int hz) { cout << "Top-O-Line Tuner setting frequency at " << hz << endl; }
