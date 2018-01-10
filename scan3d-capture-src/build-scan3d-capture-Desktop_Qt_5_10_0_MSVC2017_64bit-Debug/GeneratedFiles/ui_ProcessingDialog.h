/********************************************************************************
** Form generated from reading UI file 'ProcessingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROCESSINGDIALOG_H
#define UI_PROCESSINGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProcessingDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *progress_label;
    QProgressBar *progress_bar;
    QLabel *current_message_label;
    QTextEdit *message_text;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *close_cancel_button;

    void setupUi(QDialog *ProcessingDialog)
    {
        if (ProcessingDialog->objectName().isEmpty())
            ProcessingDialog->setObjectName(QStringLiteral("ProcessingDialog"));
        ProcessingDialog->setWindowModality(Qt::WindowModal);
        ProcessingDialog->resize(666, 325);
        verticalLayout = new QVBoxLayout(ProcessingDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        progress_label = new QLabel(ProcessingDialog);
        progress_label->setObjectName(QStringLiteral("progress_label"));

        horizontalLayout_2->addWidget(progress_label);

        progress_bar = new QProgressBar(ProcessingDialog);
        progress_bar->setObjectName(QStringLiteral("progress_bar"));
        progress_bar->setValue(24);

        horizontalLayout_2->addWidget(progress_bar);


        verticalLayout->addLayout(horizontalLayout_2);

        current_message_label = new QLabel(ProcessingDialog);
        current_message_label->setObjectName(QStringLiteral("current_message_label"));

        verticalLayout->addWidget(current_message_label);

        message_text = new QTextEdit(ProcessingDialog);
        message_text->setObjectName(QStringLiteral("message_text"));
        message_text->setReadOnly(true);

        verticalLayout->addWidget(message_text);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        close_cancel_button = new QPushButton(ProcessingDialog);
        close_cancel_button->setObjectName(QStringLiteral("close_cancel_button"));

        horizontalLayout->addWidget(close_cancel_button);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(ProcessingDialog);

        QMetaObject::connectSlotsByName(ProcessingDialog);
    } // setupUi

    void retranslateUi(QDialog *ProcessingDialog)
    {
        ProcessingDialog->setWindowTitle(QApplication::translate("ProcessingDialog", "Progress", nullptr));
        progress_label->setText(QApplication::translate("ProcessingDialog", "Progress", nullptr));
        current_message_label->setText(QApplication::translate("ProcessingDialog", "message", nullptr));
        close_cancel_button->setText(QApplication::translate("ProcessingDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProcessingDialog: public Ui_ProcessingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROCESSINGDIALOG_H
