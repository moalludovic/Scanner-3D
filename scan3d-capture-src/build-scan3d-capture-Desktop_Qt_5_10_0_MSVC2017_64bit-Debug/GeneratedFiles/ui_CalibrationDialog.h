/********************************************************************************
** Form generated from reading UI file 'CalibrationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATIONDIALOG_H
#define UI_CALIBRATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_CalibrationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *file_label;
    QLineEdit *file_line;
    QPushButton *load_button;
    QPushButton *save_button;
    QTextEdit *message_text;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *close_button;

    void setupUi(QDialog *CalibrationDialog)
    {
        if (CalibrationDialog->objectName().isEmpty())
            CalibrationDialog->setObjectName(QStringLiteral("CalibrationDialog"));
        CalibrationDialog->setWindowModality(Qt::WindowModal);
        CalibrationDialog->resize(666, 325);
        verticalLayout = new QVBoxLayout(CalibrationDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        file_label = new QLabel(CalibrationDialog);
        file_label->setObjectName(QStringLiteral("file_label"));

        horizontalLayout_2->addWidget(file_label);

        file_line = new QLineEdit(CalibrationDialog);
        file_line->setObjectName(QStringLiteral("file_line"));
        file_line->setEnabled(false);
        file_line->setReadOnly(true);

        horizontalLayout_2->addWidget(file_line);

        load_button = new QPushButton(CalibrationDialog);
        load_button->setObjectName(QStringLiteral("load_button"));
        load_button->setAutoDefault(false);

        horizontalLayout_2->addWidget(load_button);

        save_button = new QPushButton(CalibrationDialog);
        save_button->setObjectName(QStringLiteral("save_button"));
        save_button->setAutoDefault(false);

        horizontalLayout_2->addWidget(save_button);


        verticalLayout->addLayout(horizontalLayout_2);

        message_text = new QTextEdit(CalibrationDialog);
        message_text->setObjectName(QStringLiteral("message_text"));
        message_text->setReadOnly(true);

        verticalLayout->addWidget(message_text);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        close_button = new QPushButton(CalibrationDialog);
        close_button->setObjectName(QStringLiteral("close_button"));

        horizontalLayout->addWidget(close_button);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(CalibrationDialog);

        QMetaObject::connectSlotsByName(CalibrationDialog);
    } // setupUi

    void retranslateUi(QDialog *CalibrationDialog)
    {
        CalibrationDialog->setWindowTitle(QApplication::translate("CalibrationDialog", "Calibration", nullptr));
        file_label->setText(QApplication::translate("CalibrationDialog", "Calibration file", nullptr));
        load_button->setText(QApplication::translate("CalibrationDialog", "Load...", nullptr));
        save_button->setText(QApplication::translate("CalibrationDialog", "Save...", nullptr));
        close_button->setText(QApplication::translate("CalibrationDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalibrationDialog: public Ui_CalibrationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATIONDIALOG_H
