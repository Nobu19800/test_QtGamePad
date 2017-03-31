#ifndef GamePadFunction_H
#define GamePadFunction_H


#include <QtCore/QObject>
#include <QtCore/QTimer>

class QGamepad;

class GamePadFunction : public QObject
{
    Q_OBJECT
public:
    explicit GamePadFunction(QObject *parent = 0);
    ~GamePadFunction();
public slots:
	void axisLeftXChanged(double value);
private:
    QGamepad *m_gamepad;
};



#endif