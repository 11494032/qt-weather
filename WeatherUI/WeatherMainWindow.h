#ifndef WEATHERMAINWINDOW_H
#define WEATHERMAINWINDOW_H
#include "UIBase/UIBaseWindow.h"
#include <QTextEdit>

class WeatherMainWindow : public UIBaseWindow
{
    Q_OBJECT

public:
    WeatherMainWindow(QWidget *parent = nullptr);
    ~WeatherMainWindow();
private:
    QTextEdit *m_TextEdit = nullptr;
};

#endif // WEATHERMAINWINDOW_H
