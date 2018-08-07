#ifndef WEATHERMAINWINDOW_H
#define WEATHERMAINWINDOW_H
#include "UIBase/UIBaseWindow.h"

class WeatherMainWindow : public UIBaseWindow
{
    Q_OBJECT

public:
    WeatherMainWindow(QWidget *parent = nullptr);
    ~WeatherMainWindow();
};

#endif // WEATHERMAINWINDOW_H
