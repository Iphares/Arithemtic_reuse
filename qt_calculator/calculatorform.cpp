#include "calculatorform.h"
#include "assign1/mathTemplate.h"

#include <iostream>

CalculatorForm::CalculatorForm(QWidget *parent)
    : QWidget(parent)
{
    ui.setupUi(this);

    //Set Hex Validator
    QRegExp hexExpr("[a-fA-F0-9]+");
    QRegExpValidator* hexFirstVal = new QRegExpValidator(hexExpr, ui.hexFirstQuotientLineEdit);
    QRegExpValidator* hexSecondVal = new QRegExpValidator(hexExpr, ui.hexSecondQuotientLineEdit);

    ui.hexFirstQuotientLineEdit->setValidator(hexFirstVal); 
    ui.hexSecondQuotientLineEdit->setValidator(hexSecondVal); 

    //Set Binary Validator
    QRegExp binExpr("[0-1]+");
    QRegExpValidator* binFirstVal = new QRegExpValidator(binExpr, ui.binaryFirstQuotientLineEdit);
    QRegExpValidator* binSecondVal = new QRegExpValidator(binExpr, ui.binarySecondQuotientLineEdit);

    ui.binaryFirstQuotientLineEdit->setValidator(binFirstVal); 
    ui.binarySecondQuotientLineEdit->setValidator(binSecondVal); 

    //Set Octal Validator
    QRegExp octalExpr("[0-9]+");
    QRegExpValidator* octalFirstVal = new QRegExpValidator(octalExpr, ui.octalFirstQuotientLineEdit);
    QRegExpValidator* octalSecondVal = new QRegExpValidator(octalExpr, ui.octalSecondQuotientLineEdit);

    ui.octalFirstQuotientLineEdit->setValidator(octalFirstVal); 
    ui.octalSecondQuotientLineEdit->setValidator(octalSecondVal); 


    //Numerical Connections
    connect(ui.simpleFirstQuotientSpinBox, SIGNAL(valueChanged(double)), this, SLOT(updateSum()));
    connect(ui.simpleSecondQuotientSpinBox, SIGNAL(valueChanged(double)), this, SLOT(updateSum()));
    connect(ui.simpleCombox, SIGNAL(currentIndexChanged(int)), this, SLOT(updateSum()));
    
    //Hex Connections
    connect(ui.hexFirstQuotientLineEdit, SIGNAL(textChanged(QString)), this, SLOT(hexUpdateSum()));
    connect(ui.hexSecondQuotientLineEdit, SIGNAL(textChanged(QString)), this, SLOT(hexUpdateSum()));
    connect(ui.hexCombox, SIGNAL(currentIndexChanged(int)), this, SLOT(hexUpdateSum()));

    //Binary Connections
    connect(ui.binaryFirstQuotientLineEdit, SIGNAL(textChanged(QString)), this, SLOT(binaryUpdateSum()));
    connect(ui.binarySecondQuotientLineEdit, SIGNAL(textChanged(QString)), this, SLOT(binaryUpdateSum()));
    connect(ui.binaryCombox, SIGNAL(currentIndexChanged(int)), this, SLOT(binaryUpdateSum()));

    //Octal Connections
    connect(ui.octalFirstQuotientLineEdit, SIGNAL(textChanged(QString)), this, SLOT(octalUpdateSum()));
    connect(ui.octalSecondQuotientLineEdit, SIGNAL(textChanged(QString)), this, SLOT(octalUpdateSum()));
    connect(ui.octalCombox, SIGNAL(currentIndexChanged(int)), this, SLOT(octalUpdateSum()));
}

void CalculatorForm::updateSum()
{
    double sum = 0;
    switch(ui.simpleCombox->currentIndex())
    {
        case operation::ADD:
        {
            sum = addition<double>(ui.simpleFirstQuotientSpinBox->value(), ui.simpleSecondQuotientSpinBox->value());
            break;
        }
        case operation::SUBTRACT:
        {
            sum = subtraction<double>(ui.simpleFirstQuotientSpinBox->value(), ui.simpleSecondQuotientSpinBox->value());
            break;
        }
        case operation::DIVIDE:
        {
            sum = division<double>(ui.simpleFirstQuotientSpinBox->value(), ui.simpleSecondQuotientSpinBox->value());
            break;
        }
        case operation::MULTIPLY:
        {
            sum = multiplication<double>(ui.simpleFirstQuotientSpinBox->value(), ui.simpleSecondQuotientSpinBox->value());
            break;
        }
    }      
    ui.simpleSumSpinBox->setValue(sum);
}

//Hex Sum
void CalculatorForm::hexUpdateSum()
{
	if(ui.hexFirstQuotientLineEdit->text() == "" || ui.hexSecondQuotientLineEdit->text() == "")
	{
		return;
	}
	QString sum = "";
    switch(ui.hexCombox->currentIndex())
    {
        case operation::ADD:
        {
            sum = QString::fromStdString(_math.hexadecimalAddition(ui.hexFirstQuotientLineEdit->text().toStdString(),
            		ui.hexSecondQuotientLineEdit->text().toStdString()));
            break;
        }
        case operation::SUBTRACT:
        {
            sum = QString::fromStdString(_math.hexadecimalSubtraction(ui.hexFirstQuotientLineEdit->text().toStdString(),
            		ui.hexSecondQuotientLineEdit->text().toStdString()));
            break;
        }
        case operation::DIVIDE:
        {
            sum = QString::fromStdString(_math.hexidecimalDivision(ui.hexFirstQuotientLineEdit->text().toStdString(),
            		ui.hexSecondQuotientLineEdit->text().toStdString()));
            break;
        }
        case operation::MULTIPLY:
        {
            sum = QString::fromStdString(_math.hexadecimalMultiplication(ui.hexFirstQuotientLineEdit->text().toStdString(),
            		ui.hexSecondQuotientLineEdit->text().toStdString()));
            break;
        }
    }      
    ui.hexSumLineEdit->setText(sum);
}

//Binary Sum
void CalculatorForm::binaryUpdateSum()
{
	if(ui.binaryFirstQuotientLineEdit->text() == "" || ui.binarySecondQuotientLineEdit->text() == "")
	{
		return;
	}
	QString sum = "";
    switch(ui.binaryCombox->currentIndex())
    {
        case operation::ADD:
        {
            sum = QString::fromStdString(_math.binaryAddition(ui.binaryFirstQuotientLineEdit->text().toStdString(),
				ui.binarySecondQuotientLineEdit->text().toStdString()));
            break;
        }
        case operation::SUBTRACT:
        {
            sum = QString::fromStdString(_math.binarySubtraction(ui.binaryFirstQuotientLineEdit->text().toStdString(),
				ui.binarySecondQuotientLineEdit->text().toStdString()));
            break;
        }
        case operation::DIVIDE:
        {
            sum = QString::fromStdString(_math.binaryDivision(ui.binaryFirstQuotientLineEdit->text().toStdString(),
				ui.binarySecondQuotientLineEdit->text().toStdString()));
            break;
        }
        case operation::MULTIPLY:
        {
            sum = QString::fromStdString(_math.binaryMultiplication(ui.binaryFirstQuotientLineEdit->text().toStdString(),
				ui.binarySecondQuotientLineEdit->text().toStdString()));
            break;
        }
    }      
    ui.binarySumLineEdit->setText(sum);
}

//Octal Sum
void CalculatorForm::octalUpdateSum()
{
	if(ui.octalFirstQuotientLineEdit->text() == "" || ui.octalSecondQuotientLineEdit->text() == "")
	{
		return;
	}
    QString sum = "";
    switch(ui.octalCombox->currentIndex())
    {
        case operation::ADD:
        {
            sum = QString::fromStdString(_math.octalAddition(ui.octalFirstQuotientLineEdit->text().toStdString(),
				ui.octalSecondQuotientLineEdit->text().toStdString()));
            break;
        }
        case operation::SUBTRACT:
        {
            sum = QString::fromStdString(_math.octalSubtraction(ui.octalFirstQuotientLineEdit->text().toStdString(),
				ui.octalSecondQuotientLineEdit->text().toStdString()));
            break;
        }
        case operation::DIVIDE:
        {
            sum = QString::fromStdString(_math.octalDivision(ui.octalFirstQuotientLineEdit->text().toStdString(),
				ui.octalSecondQuotientLineEdit->text().toStdString()));
            break;
        }
        case operation::MULTIPLY:
        {
            sum = QString::fromStdString(_math.octalMultiplication(ui.octalFirstQuotientLineEdit->text().toStdString(),
				ui.octalSecondQuotientLineEdit->text().toStdString()));
            break;
        }
    }      
    ui.octalSumLineEdit->setText(sum);
}

