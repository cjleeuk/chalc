#include "chalcmode.h"
#include "ChalcButtons/digitbutton.h"
#include <QFont>

ChalcMode::ChalcMode(QWidget *parent) : QWidget(parent)
{
    // Create new objects for widgets and layouts
    m_top_layout = new QVBoxLayout(this);
    m_display = new QLineEdit("0", this);
    m_button_grid = new QGridLayout(this);

    // Setup QLineEdit
    m_display->setReadOnly(true);
    m_display->setAlignment(Qt::AlignRight);
    m_display->setMaxLength(15);

    QFont display_font = m_display->font();
    display_font.setPointSize(display_font.pointSize() + 8);
    m_display->setFont(display_font);

    // Setup layout
    m_top_layout->addWidget(m_display);
    m_top_layout->addLayout(m_button_grid);
}

//void ChalcMode::add_to_button_grid(ChalcButton* button, uint8_t i, uint8_t j)
//{
//    m_button_grid->addWidget(button, i, j);
//}

void ChalcMode::create_digit_button(uint8_t i, uint8_t j, uint8_t x)
{
    DigitButton *button = new DigitButton(this, x);
    connect(button, SIGNAL(clicked()), this, SLOT(digit_clicked()));
    m_button_grid->addWidget(button, i, j);
}

void ChalcMode::digit_clicked()
{
    DigitButton* clicked_button = qobject_cast<DigitButton*>(sender());
    m_display->setText(m_display->text() + QString::number(clicked_button->value()));
}

