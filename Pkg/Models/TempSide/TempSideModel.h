// TempSideModel.h
#pragma once

#include <QObject>
#include <stdint.h>
#include "../../Common.h"

class TempSideModel : public QObject
{
    Q_OBJECT

private:
    TempSideModel();

    uint8_t tempC[3]; // Array for Celsius temperatures (index 0: driver, index 1: passenger, index 2: rear)
    uint8_t tempF[3]; // Array for Fahrenheit temperatures (index 0: driver, index 1: passenger, index 2: rear)
    TEMP_UNIT unit;

public:
    static TempSideModel& getInstance();

    TempSideModel(const TempSideModel&) = delete;
    TempSideModel& operator=(const TempSideModel&) = delete;

    TEMP_UNIT getUnit() const;
    void setUnit(TEMP_UNIT value);

    void setTempDrC(uint8_t value);
    void setTempDrF(uint8_t value);

    // Set temperature for passenger in Celsius
    void setTempPsC(uint8_t value);

    // Set temperature for passenger in Fahrenheit
    void setTempPsF(uint8_t value);

    // Set temperature for rear in Celsius
    void setTempRearC(uint8_t value);

    // Set temperature for rear in Fahrenheit
    void setTempRearF(uint8_t value);

    // Get temperature for driver in Celsius
    uint8_t getTempDrC() const;

    // Get temperature for driver in Fahrenheit
    uint8_t getTempDrF() const;

    // Get temperature for passenger in Celsius
    uint8_t getTempPsC() const;

    // Get temperature for passenger in Fahrenheit
    uint8_t getTempPsF() const;

    // Get temperature for rear in Celsius
    uint8_t getTempRearC() const;

    // Get temperature for rear in Fahrenheit
    uint8_t getTempRearF() const;
};
