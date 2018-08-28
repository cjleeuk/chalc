#include "chalcbutton.h"

ChalcButton::ChalcButton(QWidget *parent) : QPushButton(parent)
{

}

uint8_t ChalcButton::default_size()
{
    return m_default_size;
}

