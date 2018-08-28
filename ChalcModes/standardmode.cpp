#include "standardmode.h"

StandardMode::StandardMode(QWidget *parent) : ChalcMode(parent)
{
    int x = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            this->create_digit_button(i, j, x);
            x++;
        }
    }
}
