#pragma once

#include <QtWidgets/QWidget>
#include "ui_Helloworld.h"

class Helloworld : public QWidget
{
	Q_OBJECT

public:
	Helloworld(QWidget *parent = Q_NULLPTR);

private:
	Ui::HelloworldClass ui;
};
