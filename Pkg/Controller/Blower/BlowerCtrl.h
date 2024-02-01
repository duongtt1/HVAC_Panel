#ifndef BLOWERCTRL_H
#define BLOWERCTRL_H

#include <QObject>
#include <memory>
#include <mutex>
#include "../../Models/Blower/BlowerModel.h"
#include <QVariant>

class BlowerCtrl : public QObject {
    Q_OBJECT
public:
    static BlowerCtrl& getInstance();

    BlowerCtrl(const BlowerCtrl&) = delete;
    BlowerCtrl& operator=(const BlowerCtrl&) = delete;

private slots:
    void increaseBlowerStep();
    void decreaseBlowerStep();
    template<typename T>
    void updateBlowerStep(const T& value){
        m_model->setBlwrStep(QVariant::fromValue(value));
    }

private:
    BlowerCtrl();

    std::unique_ptr<BlowerModel> m_model;
    std::mutex m_mutex;
};

#endif // BLOWERCTRL_H
