#include <QLineEdit>
#include <QGridLayout>
#include <QVBoxLayout>
#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QString>
#include <QSizePolicy>

#include <vector>

#include "ChalcModes/standardmode.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    StandardMode window;

    window.show();
    /*QWidget window;
    window.move(300,300);

    QVBoxLayout vbox(&window);
    QGridLayout grid(&window);

    QLineEdit linedit(&window);

    std::vector<QPushButton*> v;
    for(int i = 0; i < 9; i++)
    {
        QPushButton* x = new QPushButton(&window);
        x->setText(QString::number(i));
        v.push_back(x);
    }

    size_t cnt = 0;
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            grid.addWidget(v[cnt], i, j);
            cnt++;
        }
    }

    vbox.addWidget(&linedit);
    vbox.addLayout(&grid);

    window.show(); */

    return app.exec();
}
