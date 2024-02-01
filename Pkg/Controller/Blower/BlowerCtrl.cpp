#include "BlowerCtrl.h"

BlowerCtrl& BlowerCtrl::getInstance() {
    static BlowerCtrl instance;
    return instance;
}

BlowerCtrl::BlowerCtrl() : m_model(std::make_unique<BlowerModel>()) {}

void BlowerCtrl::increaseBlowerStep() {
    std::lock_guard<std::mutex> lock(m_mutex);
    uint8_t currentStep = m_model->getBlwrStep();
    m_model->setBlwrStep(currentStep + 1);
}

void BlowerCtrl::decreaseBlowerStep() {
    std::lock_guard<std::mutex> lock(m_mutex);
    uint8_t currentStep = m_model->getBlwrStep();
    m_model->setBlwrStep(currentStep - 1);
}
