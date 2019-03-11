#ifndef APP_H
#define APP_H

#include <QObject>
#include <QString>

class App : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString txt READ txt WRITE setTxt NOTIFY txtChanged)

public:
    explicit App(QObject *parent = nullptr);

    QString txt();
    void setTxt(const QString &userName);

signals:
    void txtChanged();

private:
    QString m_txt;
};

#endif // APP_H
