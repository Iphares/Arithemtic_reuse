/********************************************************************************
** Form generated from reading UI file 'calculatorform.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATORFORM_H
#define UI_CALCULATORFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatorForm
{
public:
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *simpleTab;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *simpleSecondQuotientSpinBox;
    QComboBox *simpleCombox;
    QDoubleSpinBox *simpleFirstQuotientSpinBox;
    QFrame *frame;
    QGridLayout *gridLayout_4;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *simpleSumSpinBox;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QWidget *complexTab;
    QGridLayout *gridLayout_2;
    QFrame *frame_5;
    QGridLayout *gridLayout_11;
    QPushButton *complexFiveButton;
    QPushButton *complexOneButton;
    QPushButton *complexFourButton;
    QPushButton *complexSevenButton;
    QPushButton *complexZeroButton;
    QPushButton *complexMultiplcationButton;
    QPushButton *complexTwoButton;
    QPushButton *complexDecimelButton;
    QPushButton *complexDivideButton;
    QPushButton *complexAddButton;
    QPushButton *complexThreeButton;
    QPushButton *complexEightButton;
    QPushButton *complexSixButton;
    QPushButton *complexNineButton;
    QPushButton *complexMinusButton;
    QPushButton *complexEnterButton;
    QDoubleSpinBox *complexSumSpinBox;
    QLabel *label_8;
    QWidget *binaryTab;
    QGridLayout *gridLayout_10;
    QComboBox *binaryCombox;
    QFrame *frame_2;
    QGridLayout *gridLayout_5;
    QLineEdit *binarySumLineEdit;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_7;
    QSpacerItem *verticalSpacer_3;
    QLineEdit *binarySecondQuotientLineEdit;
    QLineEdit *binaryFirstQuotientLineEdit;
    QSpacerItem *verticalSpacer_4;
    QWidget *hexTab;
    QGridLayout *gridLayout_9;
    QFrame *frame_3;
    QGridLayout *gridLayout_6;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_6;
    QLineEdit *hexSumLineEdit;
    QLabel *label_3;
    QLabel *label_6;
    QComboBox *hexCombox;
    QLineEdit *hexSecondQuotientLineEdit;
    QLineEdit *hexFirstQuotientLineEdit;
    QSpacerItem *verticalSpacer_5;
    QSpacerItem *verticalSpacer_6;
    QWidget *octalTab;
    QGridLayout *gridLayout_8;
    QLineEdit *octalSecondQuotientLineEdit;
    QComboBox *octalCombox;
    QFrame *frame_4;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer_8;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *octalSumLineEdit;
    QLabel *label_5;
    QLineEdit *octalFirstQuotientLineEdit;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_7;

    void setupUi(QWidget *CalculatorForm)
    {
        if (CalculatorForm->objectName().isEmpty())
            CalculatorForm->setObjectName(QString::fromUtf8("CalculatorForm"));
        CalculatorForm->resize(420, 461);
        gridLayout = new QGridLayout(CalculatorForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(CalculatorForm);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        simpleTab = new QWidget();
        simpleTab->setObjectName(QString::fromUtf8("simpleTab"));
        gridLayout_3 = new QGridLayout(simpleTab);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        simpleSecondQuotientSpinBox = new QDoubleSpinBox(simpleTab);
        simpleSecondQuotientSpinBox->setObjectName(QString::fromUtf8("simpleSecondQuotientSpinBox"));
        simpleSecondQuotientSpinBox->setAlignment(Qt::AlignCenter);
        simpleSecondQuotientSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        simpleSecondQuotientSpinBox->setMinimum(-10000000000000000.000000000000000);
        simpleSecondQuotientSpinBox->setMaximum(10000000000000000.000000000000000);

        gridLayout_3->addWidget(simpleSecondQuotientSpinBox, 1, 2, 1, 1);

        simpleCombox = new QComboBox(simpleTab);
        simpleCombox->addItem(QString());
        simpleCombox->addItem(QString());
        simpleCombox->addItem(QString());
        simpleCombox->addItem(QString());
        simpleCombox->setObjectName(QString::fromUtf8("simpleCombox"));
        simpleCombox->setMinimumSize(QSize(40, 0));
        simpleCombox->setMaximumSize(QSize(40, 16777215));

        gridLayout_3->addWidget(simpleCombox, 1, 1, 1, 1);

        simpleFirstQuotientSpinBox = new QDoubleSpinBox(simpleTab);
        simpleFirstQuotientSpinBox->setObjectName(QString::fromUtf8("simpleFirstQuotientSpinBox"));
        simpleFirstQuotientSpinBox->setAlignment(Qt::AlignCenter);
        simpleFirstQuotientSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        simpleFirstQuotientSpinBox->setMinimum(-10000000000000000.000000000000000);
        simpleFirstQuotientSpinBox->setMaximum(10000000000000000.000000000000000);

        gridLayout_3->addWidget(simpleFirstQuotientSpinBox, 1, 0, 1, 1);

        frame = new QFrame(simpleTab);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_4 = new QGridLayout(frame);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 0, 1, 1);

        simpleSumSpinBox = new QDoubleSpinBox(frame);
        simpleSumSpinBox->setObjectName(QString::fromUtf8("simpleSumSpinBox"));
        simpleSumSpinBox->setEnabled(false);
        simpleSumSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);
        simpleSumSpinBox->setMinimum(-10000000000000000.000000000000000);
        simpleSumSpinBox->setMaximum(10000000000000000.000000000000000);

        gridLayout_4->addWidget(simpleSumSpinBox, 0, 2, 1, 1);

        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_4->addWidget(label, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer_2, 0, 3, 1, 1);


        gridLayout_3->addWidget(frame, 2, 0, 1, 3);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 0, 0, 1, 3);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 4, 0, 1, 3);

        tabWidget->addTab(simpleTab, QString());
        complexTab = new QWidget();
        complexTab->setObjectName(QString::fromUtf8("complexTab"));
        complexTab->setEnabled(false);
        gridLayout_2 = new QGridLayout(complexTab);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        frame_5 = new QFrame(complexTab);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        gridLayout_11 = new QGridLayout(frame_5);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        complexFiveButton = new QPushButton(frame_5);
        complexFiveButton->setObjectName(QString::fromUtf8("complexFiveButton"));
        complexFiveButton->setMinimumSize(QSize(50, 50));
        complexFiveButton->setMaximumSize(QSize(50, 50));

        gridLayout_11->addWidget(complexFiveButton, 4, 1, 1, 1);

        complexOneButton = new QPushButton(frame_5);
        complexOneButton->setObjectName(QString::fromUtf8("complexOneButton"));
        complexOneButton->setMinimumSize(QSize(50, 50));
        complexOneButton->setMaximumSize(QSize(50, 50));

        gridLayout_11->addWidget(complexOneButton, 3, 0, 1, 1);

        complexFourButton = new QPushButton(frame_5);
        complexFourButton->setObjectName(QString::fromUtf8("complexFourButton"));
        complexFourButton->setMinimumSize(QSize(50, 50));
        complexFourButton->setMaximumSize(QSize(50, 50));

        gridLayout_11->addWidget(complexFourButton, 4, 0, 1, 1);

        complexSevenButton = new QPushButton(frame_5);
        complexSevenButton->setObjectName(QString::fromUtf8("complexSevenButton"));
        complexSevenButton->setMinimumSize(QSize(50, 50));
        complexSevenButton->setMaximumSize(QSize(50, 50));

        gridLayout_11->addWidget(complexSevenButton, 5, 0, 1, 1);

        complexZeroButton = new QPushButton(frame_5);
        complexZeroButton->setObjectName(QString::fromUtf8("complexZeroButton"));
        complexZeroButton->setMinimumSize(QSize(50, 50));
        complexZeroButton->setMaximumSize(QSize(50, 50));

        gridLayout_11->addWidget(complexZeroButton, 6, 0, 1, 1);

        complexMultiplcationButton = new QPushButton(frame_5);
        complexMultiplcationButton->setObjectName(QString::fromUtf8("complexMultiplcationButton"));
        complexMultiplcationButton->setMinimumSize(QSize(50, 50));
        complexMultiplcationButton->setMaximumSize(QSize(50, 50));

        gridLayout_11->addWidget(complexMultiplcationButton, 2, 1, 1, 1);

        complexTwoButton = new QPushButton(frame_5);
        complexTwoButton->setObjectName(QString::fromUtf8("complexTwoButton"));
        complexTwoButton->setMinimumSize(QSize(50, 50));
        complexTwoButton->setMaximumSize(QSize(50, 50));

        gridLayout_11->addWidget(complexTwoButton, 3, 1, 1, 1);

        complexDecimelButton = new QPushButton(frame_5);
        complexDecimelButton->setObjectName(QString::fromUtf8("complexDecimelButton"));
        complexDecimelButton->setMinimumSize(QSize(50, 50));
        complexDecimelButton->setMaximumSize(QSize(50, 50));

        gridLayout_11->addWidget(complexDecimelButton, 6, 1, 1, 1);

        complexDivideButton = new QPushButton(frame_5);
        complexDivideButton->setObjectName(QString::fromUtf8("complexDivideButton"));
        complexDivideButton->setMinimumSize(QSize(50, 50));
        complexDivideButton->setMaximumSize(QSize(50, 50));

        gridLayout_11->addWidget(complexDivideButton, 2, 0, 1, 1);

        complexAddButton = new QPushButton(frame_5);
        complexAddButton->setObjectName(QString::fromUtf8("complexAddButton"));
        complexAddButton->setMinimumSize(QSize(50, 50));
        complexAddButton->setMaximumSize(QSize(50, 50));

        gridLayout_11->addWidget(complexAddButton, 2, 2, 1, 1);

        complexThreeButton = new QPushButton(frame_5);
        complexThreeButton->setObjectName(QString::fromUtf8("complexThreeButton"));
        complexThreeButton->setMinimumSize(QSize(50, 50));
        complexThreeButton->setMaximumSize(QSize(50, 50));

        gridLayout_11->addWidget(complexThreeButton, 3, 2, 1, 1);

        complexEightButton = new QPushButton(frame_5);
        complexEightButton->setObjectName(QString::fromUtf8("complexEightButton"));
        complexEightButton->setMinimumSize(QSize(50, 50));
        complexEightButton->setMaximumSize(QSize(50, 50));

        gridLayout_11->addWidget(complexEightButton, 5, 1, 1, 1);

        complexSixButton = new QPushButton(frame_5);
        complexSixButton->setObjectName(QString::fromUtf8("complexSixButton"));
        complexSixButton->setMinimumSize(QSize(50, 50));
        complexSixButton->setMaximumSize(QSize(50, 50));

        gridLayout_11->addWidget(complexSixButton, 4, 2, 1, 1);

        complexNineButton = new QPushButton(frame_5);
        complexNineButton->setObjectName(QString::fromUtf8("complexNineButton"));
        complexNineButton->setMinimumSize(QSize(50, 50));
        complexNineButton->setMaximumSize(QSize(50, 50));

        gridLayout_11->addWidget(complexNineButton, 5, 2, 1, 1);

        complexMinusButton = new QPushButton(frame_5);
        complexMinusButton->setObjectName(QString::fromUtf8("complexMinusButton"));
        complexMinusButton->setMinimumSize(QSize(50, 50));
        complexMinusButton->setMaximumSize(QSize(50, 50));

        gridLayout_11->addWidget(complexMinusButton, 2, 3, 1, 1);

        complexEnterButton = new QPushButton(frame_5);
        complexEnterButton->setObjectName(QString::fromUtf8("complexEnterButton"));
        complexEnterButton->setMinimumSize(QSize(50, 50));
        complexEnterButton->setMaximumSize(QSize(120, 50));

        gridLayout_11->addWidget(complexEnterButton, 6, 2, 1, 2);

        complexSumSpinBox = new QDoubleSpinBox(frame_5);
        complexSumSpinBox->setObjectName(QString::fromUtf8("complexSumSpinBox"));
        complexSumSpinBox->setEnabled(false);
        complexSumSpinBox->setButtonSymbols(QAbstractSpinBox::NoButtons);

        gridLayout_11->addWidget(complexSumSpinBox, 1, 0, 1, 4);


        gridLayout_2->addWidget(frame_5, 5, 1, 1, 1);

        label_8 = new QLabel(complexTab);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        QFont font;
        font.setPointSize(21);
        font.setBold(true);
        font.setWeight(75);
        label_8->setFont(font);
        label_8->setLineWidth(5);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 0, 1, 1, 1);

        tabWidget->addTab(complexTab, QString());
        binaryTab = new QWidget();
        binaryTab->setObjectName(QString::fromUtf8("binaryTab"));
        gridLayout_10 = new QGridLayout(binaryTab);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        binaryCombox = new QComboBox(binaryTab);
        binaryCombox->addItem(QString());
        binaryCombox->addItem(QString());
        binaryCombox->addItem(QString());
        binaryCombox->addItem(QString());
        binaryCombox->setObjectName(QString::fromUtf8("binaryCombox"));
        binaryCombox->setMinimumSize(QSize(40, 0));
        binaryCombox->setMaximumSize(QSize(40, 16777215));

        gridLayout_10->addWidget(binaryCombox, 1, 1, 1, 1);

        frame_2 = new QFrame(binaryTab);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_2);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        binarySumLineEdit = new QLineEdit(frame_2);
        binarySumLineEdit->setObjectName(QString::fromUtf8("binarySumLineEdit"));
        binarySumLineEdit->setEnabled(false);

        gridLayout_5->addWidget(binarySumLineEdit, 0, 2, 1, 1);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setScaledContents(true);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_5->addWidget(label_2, 0, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_4, 0, 4, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_3, 0, 0, 1, 1);

        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_5->addWidget(label_7, 0, 3, 1, 1);


        gridLayout_10->addWidget(frame_2, 2, 0, 1, 3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_3, 3, 0, 1, 3);

        binarySecondQuotientLineEdit = new QLineEdit(binaryTab);
        binarySecondQuotientLineEdit->setObjectName(QString::fromUtf8("binarySecondQuotientLineEdit"));

        gridLayout_10->addWidget(binarySecondQuotientLineEdit, 1, 2, 1, 1);

        binaryFirstQuotientLineEdit = new QLineEdit(binaryTab);
        binaryFirstQuotientLineEdit->setObjectName(QString::fromUtf8("binaryFirstQuotientLineEdit"));

        gridLayout_10->addWidget(binaryFirstQuotientLineEdit, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_4, 0, 0, 1, 3);

        tabWidget->addTab(binaryTab, QString());
        hexTab = new QWidget();
        hexTab->setObjectName(QString::fromUtf8("hexTab"));
        gridLayout_9 = new QGridLayout(hexTab);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        frame_3 = new QFrame(hexTab);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_5, 0, 0, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_6->addItem(horizontalSpacer_6, 0, 4, 1, 1);

        hexSumLineEdit = new QLineEdit(frame_3);
        hexSumLineEdit->setObjectName(QString::fromUtf8("hexSumLineEdit"));
        hexSumLineEdit->setEnabled(false);

        gridLayout_6->addWidget(hexSumLineEdit, 0, 2, 1, 1);

        label_3 = new QLabel(frame_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setScaledContents(true);
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_3, 0, 1, 1, 1);

        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_6->addWidget(label_6, 0, 3, 1, 1);


        gridLayout_9->addWidget(frame_3, 2, 0, 1, 3);

        hexCombox = new QComboBox(hexTab);
        hexCombox->addItem(QString());
        hexCombox->addItem(QString());
        hexCombox->addItem(QString());
        hexCombox->addItem(QString());
        hexCombox->setObjectName(QString::fromUtf8("hexCombox"));
        hexCombox->setMinimumSize(QSize(40, 0));
        hexCombox->setMaximumSize(QSize(40, 16777215));

        gridLayout_9->addWidget(hexCombox, 1, 1, 1, 1);

        hexSecondQuotientLineEdit = new QLineEdit(hexTab);
        hexSecondQuotientLineEdit->setObjectName(QString::fromUtf8("hexSecondQuotientLineEdit"));

        gridLayout_9->addWidget(hexSecondQuotientLineEdit, 1, 2, 1, 1);

        hexFirstQuotientLineEdit = new QLineEdit(hexTab);
        hexFirstQuotientLineEdit->setObjectName(QString::fromUtf8("hexFirstQuotientLineEdit"));

        gridLayout_9->addWidget(hexFirstQuotientLineEdit, 1, 0, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_5, 0, 1, 1, 1);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_6, 3, 0, 1, 3);

        tabWidget->addTab(hexTab, QString());
        octalTab = new QWidget();
        octalTab->setObjectName(QString::fromUtf8("octalTab"));
        gridLayout_8 = new QGridLayout(octalTab);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        octalSecondQuotientLineEdit = new QLineEdit(octalTab);
        octalSecondQuotientLineEdit->setObjectName(QString::fromUtf8("octalSecondQuotientLineEdit"));

        gridLayout_8->addWidget(octalSecondQuotientLineEdit, 1, 2, 1, 1);

        octalCombox = new QComboBox(octalTab);
        octalCombox->addItem(QString());
        octalCombox->addItem(QString());
        octalCombox->addItem(QString());
        octalCombox->addItem(QString());
        octalCombox->setObjectName(QString::fromUtf8("octalCombox"));
        octalCombox->setMinimumSize(QSize(40, 0));
        octalCombox->setMaximumSize(QSize(40, 16777215));

        gridLayout_8->addWidget(octalCombox, 1, 1, 1, 1);

        frame_4 = new QFrame(octalTab);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_7 = new QGridLayout(frame_4);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_8, 0, 4, 1, 1);

        label_4 = new QLabel(frame_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setScaledContents(true);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_7->addWidget(label_4, 0, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_7->addItem(horizontalSpacer_7, 0, 0, 1, 1);

        octalSumLineEdit = new QLineEdit(frame_4);
        octalSumLineEdit->setObjectName(QString::fromUtf8("octalSumLineEdit"));
        octalSumLineEdit->setEnabled(false);

        gridLayout_7->addWidget(octalSumLineEdit, 0, 2, 1, 1);

        label_5 = new QLabel(frame_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_7->addWidget(label_5, 0, 3, 1, 1);


        gridLayout_8->addWidget(frame_4, 2, 0, 1, 3);

        octalFirstQuotientLineEdit = new QLineEdit(octalTab);
        octalFirstQuotientLineEdit->setObjectName(QString::fromUtf8("octalFirstQuotientLineEdit"));

        gridLayout_8->addWidget(octalFirstQuotientLineEdit, 1, 0, 1, 1);

        verticalSpacer_8 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_8, 0, 1, 1, 1);

        verticalSpacer_7 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_8->addItem(verticalSpacer_7, 3, 1, 1, 1);

        tabWidget->addTab(octalTab, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);


        retranslateUi(CalculatorForm);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CalculatorForm);
    } // setupUi

    void retranslateUi(QWidget *CalculatorForm)
    {
        CalculatorForm->setWindowTitle(QCoreApplication::translate("CalculatorForm", "Form", nullptr));
        simpleCombox->setItemText(0, QCoreApplication::translate("CalculatorForm", "+", nullptr));
        simpleCombox->setItemText(1, QCoreApplication::translate("CalculatorForm", "-", nullptr));
        simpleCombox->setItemText(2, QCoreApplication::translate("CalculatorForm", "/", nullptr));
        simpleCombox->setItemText(3, QCoreApplication::translate("CalculatorForm", "X", nullptr));

        label->setText(QCoreApplication::translate("CalculatorForm", "=", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(simpleTab), QCoreApplication::translate("CalculatorForm", "Simple", nullptr));
        complexFiveButton->setText(QCoreApplication::translate("CalculatorForm", "5", nullptr));
        complexOneButton->setText(QCoreApplication::translate("CalculatorForm", "1", nullptr));
        complexFourButton->setText(QCoreApplication::translate("CalculatorForm", "4", nullptr));
        complexSevenButton->setText(QCoreApplication::translate("CalculatorForm", "7", nullptr));
        complexZeroButton->setText(QCoreApplication::translate("CalculatorForm", "0", nullptr));
        complexMultiplcationButton->setText(QCoreApplication::translate("CalculatorForm", "x", nullptr));
        complexTwoButton->setText(QCoreApplication::translate("CalculatorForm", "2", nullptr));
        complexDecimelButton->setText(QCoreApplication::translate("CalculatorForm", ".", nullptr));
        complexDivideButton->setText(QCoreApplication::translate("CalculatorForm", "/", nullptr));
        complexAddButton->setText(QCoreApplication::translate("CalculatorForm", "+", nullptr));
        complexThreeButton->setText(QCoreApplication::translate("CalculatorForm", "3", nullptr));
        complexEightButton->setText(QCoreApplication::translate("CalculatorForm", "8", nullptr));
        complexSixButton->setText(QCoreApplication::translate("CalculatorForm", "6", nullptr));
        complexNineButton->setText(QCoreApplication::translate("CalculatorForm", "9", nullptr));
        complexMinusButton->setText(QCoreApplication::translate("CalculatorForm", "-", nullptr));
        complexEnterButton->setText(QCoreApplication::translate("CalculatorForm", "Enter", nullptr));
        label_8->setText(QCoreApplication::translate("CalculatorForm", "UNDER DEVELOPMENT", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(complexTab), QCoreApplication::translate("CalculatorForm", "Complex", nullptr));
        binaryCombox->setItemText(0, QCoreApplication::translate("CalculatorForm", "+", nullptr));
        binaryCombox->setItemText(1, QCoreApplication::translate("CalculatorForm", "-", nullptr));
        binaryCombox->setItemText(2, QCoreApplication::translate("CalculatorForm", "/", nullptr));
        binaryCombox->setItemText(3, QCoreApplication::translate("CalculatorForm", "X", nullptr));

        label_2->setText(QCoreApplication::translate("CalculatorForm", "=", nullptr));
        label_7->setText(QCoreApplication::translate("CalculatorForm", "Binary", nullptr));
        binarySecondQuotientLineEdit->setText(QCoreApplication::translate("CalculatorForm", "000", nullptr));
        binaryFirstQuotientLineEdit->setText(QCoreApplication::translate("CalculatorForm", "000", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(binaryTab), QCoreApplication::translate("CalculatorForm", "Binary", nullptr));
        label_3->setText(QCoreApplication::translate("CalculatorForm", "=", nullptr));
        label_6->setText(QCoreApplication::translate("CalculatorForm", "Hex", nullptr));
        hexCombox->setItemText(0, QCoreApplication::translate("CalculatorForm", "+", nullptr));
        hexCombox->setItemText(1, QCoreApplication::translate("CalculatorForm", "-", nullptr));
        hexCombox->setItemText(2, QCoreApplication::translate("CalculatorForm", "/", nullptr));
        hexCombox->setItemText(3, QCoreApplication::translate("CalculatorForm", "X", nullptr));

        hexSecondQuotientLineEdit->setText(QCoreApplication::translate("CalculatorForm", "0", nullptr));
        hexFirstQuotientLineEdit->setText(QCoreApplication::translate("CalculatorForm", "0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(hexTab), QCoreApplication::translate("CalculatorForm", "Hex", nullptr));
        octalSecondQuotientLineEdit->setText(QCoreApplication::translate("CalculatorForm", "0", nullptr));
        octalCombox->setItemText(0, QCoreApplication::translate("CalculatorForm", "+", nullptr));
        octalCombox->setItemText(1, QCoreApplication::translate("CalculatorForm", "-", nullptr));
        octalCombox->setItemText(2, QCoreApplication::translate("CalculatorForm", "/", nullptr));
        octalCombox->setItemText(3, QCoreApplication::translate("CalculatorForm", "X", nullptr));

        label_4->setText(QCoreApplication::translate("CalculatorForm", "=", nullptr));
        label_5->setText(QCoreApplication::translate("CalculatorForm", "Octal", nullptr));
        octalFirstQuotientLineEdit->setText(QCoreApplication::translate("CalculatorForm", "0", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(octalTab), QCoreApplication::translate("CalculatorForm", "Octal", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatorForm: public Ui_CalculatorForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATORFORM_H
