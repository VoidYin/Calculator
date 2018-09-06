#include "Calculator.h"
#include <QtMath>

Calculator::Calculator(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
}

void Calculator::OnNumBtnClicked()
{
	QPushButton* NumBtn = qobject_cast<QPushButton*>(QObject::sender());
	if (!NumBtn) { return; }
	QString NumChar = NumBtn->text();

	if (LastNum == NumChar[0] && LastNum == '.')
	{
		return;
	}

	LastNum = NumChar[0];
	if (bInputingNum)
	{
		ResultStr += NumChar;
	}
	else
	{
		ResultStr = NumChar;
		bInputingNum = true;
	}
	RefreshExpressLabel();
}

void Calculator::OnOperBtnClicked()
{
	if (!bInputingNum)
	{
		return;
	}

	QPushButton* NumBtn = qobject_cast<QPushButton*>(QObject::sender());
	if (!NumBtn)
	{
		return;
	}

	QString NumChar = NumBtn->text();
	ExpStr += ResultStr;
	ExpStr += NumChar;

	CalculateResult(NumChar[0], ResultStr.toFloat());
	
	bInputingNum = false;
	ResultStr.clear();
	ResultStr.setNum(NumbersStack.top());
	if (NumChar[0] == '=')
	{
		ExpStr.clear();
		NumbersStack.clear();
		OperatorsStack.clear();
	}
	RefreshExpressLabel();
}

void Calculator::RefreshExpressLabel()
{
	ui.label->setText(ExpStr);
	ui.label_2->setText(ResultStr);
}

bool IsPriorTo(QChar Oper1, QChar Oper2)
{
	QMap<QChar, qint8> OperatorPriority = 
	{
		{'*', 2},
		{'/', 2},
		{'+', 1},
		{'-', 1},
		{'=', 0}
	};
	return (OperatorPriority[Oper1] > OperatorPriority[Oper2]);
}

float Multiply(float r1, float r2)
{
	return r1 * r2;
}
float Divide(float r1, float r2)
{
	return r1 / r2;
}
float Add(float r1, float r2)
{
	return r1 + r2;
}
float Minus(float r1, float r2)
{
	return r1 - r2;
}
typedef float (*Arithmetic)(float, float);
float DoOperation(QChar Oper, float Result1, float Result2)
{
	QMap<QChar, Arithmetic> Operations =
	{
		{'*', Multiply},
		{'/', Divide},
		{'+', Add},
		{'-', Minus}
	};

	return Operations[Oper](Result1, Result2);
}

void Calculator::CalculateResult(QChar InOper, float InResult)
{
	NumbersStack.push(InResult);
	while (!OperatorsStack.isEmpty() && !IsPriorTo(InOper, OperatorsStack.top()))
	{
		QChar Oper = OperatorsStack.pop();
		float Result2 = NumbersStack.pop();
		float Result1 = NumbersStack.pop();
		float Result = DoOperation(Oper, Result1, Result2);
		NumbersStack.push(Result);
	}
	if (InOper != '=')
	{
		OperatorsStack.push(InOper);
	}
}
