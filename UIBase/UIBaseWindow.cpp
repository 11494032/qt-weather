#include "UIBaseWindow.h"
#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QEvent>
#include <QMouseEvent>
#include <QApplication>
#include "UIBaseWindow.h"
#include <QPainter>
#include <QDebug>
#include <QApplication>

UIBaseWindow::UIBaseWindow(QWidget *parent) : QWidget(parent)
{
    this->installEventFilter(this);
   // setWindowFlags(Qt::FramelessWindowHint);
    this->setMouseTracking(true);
    this->setProperty("NormalWidget", "NormalWidget");

    m_nBorder = 2;
    m_TitleIconSize = 25;
    m_ButtonIconSize = 20;

    m_WindowTitle = "Douzhq Qt Demo";
    m_TitleIcon = new QPixmap("./Icons/AppIconD.png");
    m_MinSizeIcon = new QPixmap("./Icons/MinButton.png");
    m_MinSizeHIcon = new QPixmap("./Icons/minButton_H.png");
    m_MaxSizeIcon = new QPixmap("./Icons/MaxSizeed.png");
    m_MaxSizeHIcon = new QPixmap("./Icons/MaxSizeDemo_H.png");
    m_CloseIcon = new QPixmap("./Icons/Close.png");
    m_CloseHIcon = new QPixmap("./Icons/Close_H.png");
}

UIBaseWindow::~UIBaseWindow()
{

}
