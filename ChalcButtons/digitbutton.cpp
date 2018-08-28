#include "digitbutton.h"
#include <iostream>

DigitButton::DigitButton(QWidget* parent, uint8_t value)
    : ChalcButton(parent), m_value(value)
{
    if(value <= 9)
    {
        this->setText(QString::number(value));
    }
    else
    {
        switch(value)
        {
        case 10:
            this->setText("A");
            break;
        case 11:
            this->setText("B");
            break;
        case 12:
            this->setText("C");
            break;
        case 13:
            this->setText("D");
            break;
        case 14:
            this->setText("E");
            break;
        case 15:
            this->setText("F");
            break;
        default:
            std::cerr << "Error: digit must be between 0 and 15 inclusive." << std::endl;
        }
    }

}

uint8_t DigitButton::value()
{
    return m_value;
}
