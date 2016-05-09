/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLineEdit *Multiplicand_dec;
    QLineEdit *Multiplier_dec;
    QPushButton *pushButton;
    QTableWidget *tableWidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Result_dec;
    QLabel *label_3;
    QLineEdit *Result_bin;
    QLabel *label_4;
    QLineEdit *Multiplicand_bin;
    QLineEdit *Multiplier_bin;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(372, 600);
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(372, 600));
        MainWindow->setMaximumSize(QSize(372, 600));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Multiplicand_dec = new QLineEdit(centralWidget);
        Multiplicand_dec->setObjectName(QStringLiteral("Multiplicand_dec"));
        Multiplicand_dec->setGeometry(QRect(10, 10, 71, 31));
        Multiplicand_dec->setInputMethodHints(Qt::ImhDigitsOnly);
        Multiplicand_dec->setAlignment(Qt::AlignCenter);
        Multiplier_dec = new QLineEdit(centralWidget);
        Multiplier_dec->setObjectName(QStringLiteral("Multiplier_dec"));
        Multiplier_dec->setGeometry(QRect(110, 10, 71, 31));
        Multiplier_dec->setInputMethodHints(Qt::ImhDigitsOnly);
        Multiplier_dec->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 10, 61, 31));
        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        __qtablewidgetitem->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setTextAlignment(Qt::AlignCenter);
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        if (tableWidget->rowCount() < 16)
            tableWidget->setRowCount(16);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setEnabled(true);
        tableWidget->setGeometry(QRect(10, 90, 351, 521));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(10);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy1);
        tableWidget->setMinimumSize(QSize(0, 0));
        tableWidget->setMaximumSize(QSize(600, 531));
        tableWidget->setAutoFillBackground(false);
        tableWidget->setFrameShape(QFrame::NoFrame);
        tableWidget->setFrameShadow(QFrame::Raised);
        tableWidget->setAutoScroll(false);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setSelectionMode(QAbstractItemView::NoSelection);
        tableWidget->setShowGrid(true);
        tableWidget->setWordWrap(false);
        tableWidget->setCornerButtonEnabled(false);
        tableWidget->setRowCount(16);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setHighlightSections(false);
        tableWidget->verticalHeader()->setVisible(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 20, 31, 21));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 10, 41, 21));
        label_2->setFont(font);
        Result_dec = new QLineEdit(centralWidget);
        Result_dec->setObjectName(QStringLiteral("Result_dec"));
        Result_dec->setEnabled(true);
        Result_dec->setGeometry(QRect(220, 10, 71, 31));
        Result_dec->setInputMethodHints(Qt::ImhDigitsOnly);
        Result_dec->setAlignment(Qt::AlignCenter);
        Result_dec->setReadOnly(true);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(90, 60, 31, 21));
        label_3->setFont(font);
        Result_bin = new QLineEdit(centralWidget);
        Result_bin->setObjectName(QStringLiteral("Result_bin"));
        Result_bin->setEnabled(true);
        Result_bin->setGeometry(QRect(220, 50, 141, 31));
        Result_bin->setInputMethodHints(Qt::ImhDigitsOnly);
        Result_bin->setAlignment(Qt::AlignCenter);
        Result_bin->setReadOnly(true);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(190, 50, 41, 21));
        label_4->setFont(font);
        Multiplicand_bin = new QLineEdit(centralWidget);
        Multiplicand_bin->setObjectName(QStringLiteral("Multiplicand_bin"));
        Multiplicand_bin->setEnabled(true);
        Multiplicand_bin->setGeometry(QRect(10, 50, 71, 31));
        Multiplicand_bin->setInputMethodHints(Qt::ImhDigitsOnly);
        Multiplicand_bin->setAlignment(Qt::AlignCenter);
        Multiplicand_bin->setReadOnly(true);
        Multiplier_bin = new QLineEdit(centralWidget);
        Multiplier_bin->setObjectName(QStringLiteral("Multiplier_bin"));
        Multiplier_bin->setEnabled(true);
        Multiplier_bin->setGeometry(QRect(110, 50, 71, 31));
        Multiplier_bin->setInputMethodHints(Qt::ImhDigitsOnly);
        Multiplier_bin->setAlignment(Qt::AlignCenter);
        Multiplier_bin->setReadOnly(true);
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Booth's multiplication algorithm", 0));
#ifndef QT_NO_TOOLTIP
        Multiplicand_dec->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_STATUSTIP
        Multiplicand_dec->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        Multiplicand_dec->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        pushButton->setText(QApplication::translate("MainWindow", "Multiply", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "Operation", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "AC", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "Q", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "Q'", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "Result", 0));
        label->setText(QApplication::translate("MainWindow", "*", 0));
        label_2->setText(QApplication::translate("MainWindow", "=", 0));
        label_3->setText(QApplication::translate("MainWindow", "*", 0));
        label_4->setText(QApplication::translate("MainWindow", "=", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
