#include "GamePadFunction.h"
#include <QtGamepad/QGamepad>
#include <iostream>

#include <QDebug>

GamePadFunction::GamePadFunction(QObject *parent)
    : QObject(parent)
    , m_gamepad(0)
{
	QList<int> gamepads = QGamepadManager::instance()->connectedGamepads();
	std::cout << QGamepadManager::instance()->isGamepadConnected(0) << std::endl;
	if (gamepads.isEmpty()) {
		//return;
	}
	m_gamepad = new QGamepad(0, this);
	connect(m_gamepad, &QGamepad::axisLeftXChanged, this, [](double value){
		qDebug() << "Left X" << value;
	});

}

GamePadFunction::~GamePadFunction()
{

}

void GamePadFunction::axisLeftXChanged(double value)
{
	std::cout << "axisLeftXChanged" << "\t" << value << std::endl;
}