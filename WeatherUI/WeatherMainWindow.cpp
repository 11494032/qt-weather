#include "WeatherMainWindow.h"
#include <QVBoxLayout>
#include <QHBoxLayout>

WeatherMainWindow::WeatherMainWindow(QWidget *parent):UIBaseWindow(parent)
{
    QVBoxLayout *layout = new QVBoxLayout(this);
    layout->addSpacing(30);

}
WeatherMainWindow::~WeatherMainWindow()
{

}
