#include "BlowerModel.h"

BlowerModel::BlowerModel(QObject* parent) : QObject(parent), m_blwrStep(0) {}

uint8_t BlowerModel::getBlwrStep() const {
    return m_blwrStep;
}

void BlowerModel::setBlwrStep(uint8_t step) {
    if (m_blwrStep != step) {
        m_blwrStep = step;
        emit blwrStepChanged();
    }
}
