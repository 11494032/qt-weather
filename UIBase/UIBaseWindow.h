#ifndef UIBASEWINDOW_H
#define UIBASEWINDOW_H

#include <QWidget>

class UIBaseWindow : public QWidget
{
    Q_OBJECT
public:
    explicit UIBaseWindow(QWidget *parent = nullptr);
    ~UIBaseWindow();

private:
    int m_nBorder;
    int m_TitleIconSize;
    int m_ButtonIconSize;

    QPixmap *m_TitleIcon = nullptr;
    QPixmap *m_MinSizeIcon = nullptr;
    QPixmap *m_MinSizeHIcon = nullptr;
    QPixmap *m_MaxSizeIcon = nullptr;
    QPixmap *m_MaxSizeHIcon = nullptr;
    QPixmap *m_CloseIcon = nullptr;
    QPixmap *m_CloseHIcon = nullptr;

    QString m_WindowTitle;
    int m_TitleHieght = 30;

    bool m_IsOnMinButton = false;
    bool m_IsOnMaxButton = false;
    bool m_IsOnCloseButton = false;
    bool m_IsOnConfigButton = false;
};

#endif // UIBASEWINDOW_H
