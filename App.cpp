#include "App.h"

App::App(QObject *parent) :
    QObject(parent)
{
  m_txt = "hey";
}

QString App::txt()
{
    return m_txt;
}

void App::setTxt(const QString &txt)
{
    if (txt == m_txt)
        return;

    m_txt = txt;
    emit txtChanged();
}
