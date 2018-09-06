#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Calculator.h"
#include <QStack>

class Calculator : public QMainWindow
{
	Q_OBJECT

public:
	Calculator(QWidget *parent = Q_NULLPTR);

public slots:
	void OnNumBtnClicked();
	void OnOperBtnClicked();

public:
	void RefreshExpressLabel();

	void CalculateResult(QChar InOper, float InResult);
private:

	QString ExpStr;
	QString ResultStr;
	QStack<float> NumbersStack;
	QStack<QChar> OperatorsStack;

	bool bInputingNum = true;
	QChar LastNum;
private:
	Ui::CalculatorClass ui;
};
