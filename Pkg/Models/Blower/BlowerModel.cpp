#include "BlowerModel.h"

BlowerModel::BlowerModel(QObject* parent)
    : QObject(parent), blwrStep(0)
{
    // Additional initialization if needed
}

BlowerModel::~BlowerModel()
{

}

BlowerModel* BlowerModel::getInstance()
{
    static BlowerModel instance; // This will be created and destroyed only once
    return &instance;
}

uint8_t BlowerModel::getBlwrStep()
{
    return blwrStep;
}

void BlowerModel::setBlwrStep(uint8_t step)
{
    blwrStep = step;
}
