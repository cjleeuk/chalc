#ifndef CHALCMODE_H
#define CHALCMODE_H

// Qt headers
#include <QWidget>
#include <QVBoxLayout>
#include <QGridLayout>
#include <QLineEdit>
// STL headers
#include <vector>
#include <cstdint>
// Project headers
#include "ChalcButtons/chalcbutton.h"


class ChalcMode : public QWidget
{
    Q_OBJECT
public:
    explicit ChalcMode(QWidget *parent = nullptr);
protected:
    //void add_to_button_grid(ChalcButton* button, uint8_t i, uint8_t j);
    void create_digit_button(uint8_t i, uint8_t j, uint8_t x);
private:
    QVBoxLayout* m_top_layout = nullptr;
    QLineEdit* m_display = nullptr;
    QGridLayout* m_button_grid = nullptr;

private slots:
    void digit_clicked();
};

#endif // CHALCMODE_H
