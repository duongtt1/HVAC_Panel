// SeatModeModel.h
#pragma once

#include <QObject>
#include <stdint.h>
#include "../../Common.h"

class SeatModeModel : public QObject
{
    Q_OBJECT

private:
    SeatModeModel();
    uint8_t mode[3]; // Array for modes (index 0: Driver, index 1: Passenger, index 2: Rear)

public:
    static SeatModeModel& getInstance();

    SeatModeModel(const SeatModeModel&) = delete;
    SeatModeModel& operator=(const SeatModeModel&) = delete;

    uint8_t getSeatModeDriver() const;
    void setSeatModeDriver(uint8_t value);

    uint8_t getSeatModePassenger() const;
    void setSeatModePassenger(uint8_t value);

    uint8_t getSeatModeRear() const;
    void setSeatModeRear(uint8_t value);
};
