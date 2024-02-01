#pragma once

#include <QObject>
#include <stdint.h>

class BlowerModel : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int blwrStep READ getBlwrStep WRITE setBlwrStep NOTIFY blwrStepChanged)

public:
    explicit BlowerModel(QObject* parent = nullptr);

    uint8_t getBlwrStep() const;
    void setBlwrStep(uint8_t step);

signals:
    void blwrStepChanged();

private:
    uint8_t m_blwrStep;
};
