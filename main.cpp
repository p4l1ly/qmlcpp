#include<iostream>
#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QString>

#include "App.h"

using namespace std;

int main(int argc, char *argv[])
{
    cout << "foobar" << endl;
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine("main.qml");
    App py;
    engine.rootContext()->setContextProperty("py", &py);
    return app.exec();
}
