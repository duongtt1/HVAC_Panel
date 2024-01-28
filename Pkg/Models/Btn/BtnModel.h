#pragma once

#include <QObject>
#include <stdint.h>
#include "../../Common.h"
#include <array>

class BtnModel : public QObject
{
    Q_OBJECT

private:
    BtnModel();

    std::array<bool, static_cast<size_t>(BUTTON::Btn_Key_Max)> buttonStates;

public:
    static BtnModel& getInstance();

    BtnModel(const BtnModel&) = delete;
    BtnModel& operator=(const BtnModel&) = delete;

    bool isButtonActive(BUTTON button) const;
    void setButtonActive(BUTTON button, bool isActive);
};
