// TempSideModel.cpp

#include "TempSideModel.h"

TempSideModel::TempSideModel()
{
    // Khởi tạo giá trị mặc định
    // ...
}

TempSideModel& TempSideModel::getInstance()
{
    static TempSideModel instance;
    return instance;
}

TEMP_UNIT TempSideModel::getUnit() const
{
    // Lấy đơn vị đo nhiệt độ hiện tại
    // ...
}

void TempSideModel::setUnit(TEMP_UNIT value)
{
    // Đặt đơn vị đo nhiệt độ
    // ...
}

void TempSideModel::setTempDrC(uint8_t value)
{
    tempC[Driver] = value;
}

void TempSideModel::setTempDrF(uint8_t value)
{
    tempF[Driver] = value;
}

void TempSideModel::setTempPsC(uint8_t value)
{
    tempC[Passenger] = value;
}

void TempSideModel::setTempPsF(uint8_t value)
{
    tempF[Passenger] = value;
}

void TempSideModel::setTempRearC(uint8_t value)
{
    tempC[Rear] = value;
}

void TempSideModel::setTempRearF(uint8_t value)
{
    tempF[Rear] = value;
}

uint8_t TempSideModel::getTempDrC() const
{
    return tempC[Position::Driver];
}

uint8_t TempSideModel::getTempDrF() const
{
    return tempF[Position::Driver];
}

uint8_t TempSideModel::getTempPsC() const
{
    return tempC[Passenger];
}

uint8_t TempSideModel::getTempPsF() const
{
    return tempF[Passenger];
}

uint8_t TempSideModel::getTempRearC() const
{
    return tempC[Rear];
}

uint8_t TempSideModel::getTempRearF() const
{
    return tempF[Rear];
}
