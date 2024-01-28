#include <stdint.h>
#include <QObject>

class BlowerModel : public QObject
{
    Q_OBJECT

private:
    uint8_t blwrStep;

    // Private constructor to enforce singleton pattern
    BlowerModel(QObject* parent = nullptr);

public:
    static BlowerModel* getInstance();

    uint8_t getBlwrStep();
    void setBlwrStep(uint8_t step);

    // Delete copy constructor and assignment operator to enforce singleton pattern
    BlowerModel(const BlowerModel&) = delete;
    BlowerModel& operator=(const BlowerModel&) = delete;

    ~BlowerModel();
};
