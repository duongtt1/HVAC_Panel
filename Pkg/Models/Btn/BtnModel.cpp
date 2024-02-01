#include "BtnModel.h"

BtnModel::BtnModel(){}


BtnModel& BtnModel::getInstance() {
    static BtnModel instance;
    return instance;
}

bool BtnModel::isButtonActive(BUTTON button) const {
    size_t index = static_cast<size_t>(button);
    if (index < buttonStates.size()) {
        return buttonStates[index];
    }
    return false;
}

void BtnModel::setButtonActive(BUTTON button, bool isActive) {
    size_t index = static_cast<size_t>(button);
    if (index < buttonStates.size()) {
        buttonStates[index] = isActive;
    }
}
