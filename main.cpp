#include <QApplication>
#include "WeatherUI/WeatherMainWindow.h"
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile nFile("./styles/DarkStyle.css");
    if (nFile.open(QFile::ReadOnly))
    {
        QString styleSheetString = nFile.readAll().data();
        a.setStyleSheet(styleSheetString);
        nFile.close();
    }


    WeatherMainWindow w;
    w.resize(1000, 800);
    w.show();

    return a.exec();
}
