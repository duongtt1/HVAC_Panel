// SeatModeModel.cpp

#include "SeatModeModel.h"

SeatModeModel::SeatModeModel()
{
    // Initialize default values
    // ...
}

SeatModeModel& SeatModeModel::getInstance()
{
    static SeatModeModel instance;
    return instance;
}

uint8_t SeatModeModel::getSeatModeDriver() const
{
    return mode[Driver];
}

void SeatModeModel::setSeatModeDriver(uint8_t value)
{
    mode[Driver] = value;
}

uint8_t SeatModeModel::getSeatModePassenger() const
{
    return mode[Passenger];
}

void SeatModeModel::setSeatModePassenger(uint8_t value)
{
    mode[Passenger] = value;
}

uint8_t SeatModeModel::getSeatModeRear() const
{
    return mode[Rear];
}

void SeatModeModel::setSeatModeRear(uint8_t value)
{
    mode[Rear] = value;
}
