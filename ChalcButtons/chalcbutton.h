#ifndef CHALCBUTTON_H
#define CHALCBUTTON_H

// Qt headers
#include <QPushButton>
#include <QString>
#include <QSizePolicy>
// STL headers
#include <cstdint>

// Project heaaders

class ChalcButton : public QPushButton
{
    Q_OBJECT
public:
    explicit ChalcButton(QWidget *parent = nullptr);
    uint8_t default_size();

private:
    uint8_t m_default_size = 40;
signals:

public slots:
};

#endif // CHALCBUTTON_H
