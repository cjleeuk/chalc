#ifndef DIGITBUTTON_H
#define DIGITBUTTON_H

#include "ChalcButtons/chalcbutton.h"

class DigitButton : public ChalcButton
{
    Q_OBJECT
public:
    explicit DigitButton(QWidget *parent = nullptr, uint8_t value = 0);
    uint8_t value();

private:
    uint8_t m_value;

signals:

public slots:
};

#endif // DIGITBUTTON_H
