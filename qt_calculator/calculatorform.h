#ifndef CALCULATORFORM_H
#define CALCULATORFORM_H

#include "ui_calculatorform.h"

#include "assign1/math.h"

enum operation
{
    ADD,
    SUBTRACT,
    DIVIDE,
    MULTIPLY
};

class CalculatorForm : public QWidget
{
    Q_OBJECT

public:
    explicit CalculatorForm(QWidget *parent = nullptr);

private slots:
    void updateSum();
    void hexUpdateSum();
    void binaryUpdateSum();
    void octalUpdateSum();

private:
    Ui::CalculatorForm ui;

    Math _math;
};
#endif

