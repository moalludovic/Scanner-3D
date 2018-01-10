/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *title_label;
    QLabel *course_label;
    QLabel *label_author;
    QFrame *frame;
    QFormLayout *formLayout;
    QLabel *qt_version_title_label;
    QLabel *qt_version_label;
    QLabel *opencv_title_label;
    QLabel *opencv_version_label;
    QLabel *built_date_title_label;
    QLabel *built_date_label;
    QLabel *url_title_label;
    QLabel *url_label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLabel *author_label;
    QSpacerItem *horizontalSpacer;
    QPushButton *close_button;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QStringLiteral("AboutDialog"));
        AboutDialog->resize(546, 303);
        verticalLayout_2 = new QVBoxLayout(AboutDialog);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(AboutDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(100, 100));
        label->setPixmap(QPixmap(QString::fromUtf8(":/david.png")));
        label->setScaledContents(true);

        horizontalLayout_2->addWidget(label);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        title_label = new QLabel(AboutDialog);
        title_label->setObjectName(QStringLiteral("title_label"));
        QFont font;
        font.setPointSize(16);
        title_label->setFont(font);
        title_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(title_label);

        course_label = new QLabel(AboutDialog);
        course_label->setObjectName(QStringLiteral("course_label"));
        QFont font1;
        font1.setPointSize(11);
        course_label->setFont(font1);
        course_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(course_label);

        label_author = new QLabel(AboutDialog);
        label_author->setObjectName(QStringLiteral("label_author"));
        QFont font2;
        font2.setPointSize(10);
        label_author->setFont(font2);
        label_author->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_author);


        horizontalLayout_2->addLayout(verticalLayout);


        verticalLayout_2->addLayout(horizontalLayout_2);

        frame = new QFrame(AboutDialog);
        frame->setObjectName(QStringLiteral("frame"));
        formLayout = new QFormLayout(frame);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        qt_version_title_label = new QLabel(frame);
        qt_version_title_label->setObjectName(QStringLiteral("qt_version_title_label"));
        qt_version_title_label->setFont(font2);

        formLayout->setWidget(2, QFormLayout::LabelRole, qt_version_title_label);

        qt_version_label = new QLabel(frame);
        qt_version_label->setObjectName(QStringLiteral("qt_version_label"));
        qt_version_label->setFont(font2);

        formLayout->setWidget(2, QFormLayout::FieldRole, qt_version_label);

        opencv_title_label = new QLabel(frame);
        opencv_title_label->setObjectName(QStringLiteral("opencv_title_label"));
        opencv_title_label->setFont(font2);

        formLayout->setWidget(3, QFormLayout::LabelRole, opencv_title_label);

        opencv_version_label = new QLabel(frame);
        opencv_version_label->setObjectName(QStringLiteral("opencv_version_label"));
        opencv_version_label->setFont(font2);

        formLayout->setWidget(3, QFormLayout::FieldRole, opencv_version_label);

        built_date_title_label = new QLabel(frame);
        built_date_title_label->setObjectName(QStringLiteral("built_date_title_label"));
        built_date_title_label->setFont(font2);

        formLayout->setWidget(4, QFormLayout::LabelRole, built_date_title_label);

        built_date_label = new QLabel(frame);
        built_date_label->setObjectName(QStringLiteral("built_date_label"));
        built_date_label->setFont(font2);

        formLayout->setWidget(4, QFormLayout::FieldRole, built_date_label);

        url_title_label = new QLabel(frame);
        url_title_label->setObjectName(QStringLiteral("url_title_label"));
        url_title_label->setFont(font2);

        formLayout->setWidget(1, QFormLayout::LabelRole, url_title_label);

        url_label = new QLabel(frame);
        url_label->setObjectName(QStringLiteral("url_label"));
        url_label->setFont(font2);
        url_label->setTextFormat(Qt::RichText);
        url_label->setOpenExternalLinks(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, url_label);


        verticalLayout_2->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        author_label = new QLabel(AboutDialog);
        author_label->setObjectName(QStringLiteral("author_label"));
        author_label->setFont(font2);

        horizontalLayout->addWidget(author_label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        close_button = new QPushButton(AboutDialog);
        close_button->setObjectName(QStringLiteral("close_button"));

        horizontalLayout->addWidget(close_button);


        verticalLayout_2->addLayout(horizontalLayout);


        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QApplication::translate("AboutDialog", "About Camera-Projector Calibration", nullptr));
        label->setText(QString());
        title_label->setText(QApplication::translate("AboutDialog", "3D Scanning Software", nullptr));
        course_label->setText(QApplication::translate("AboutDialog", "Simple, Accurate, and Robust Projector-Camera Calibration", nullptr));
        label_author->setText(QApplication::translate("AboutDialog", "Daniel Moreno and Gabriel Taubin", nullptr));
        qt_version_title_label->setText(QApplication::translate("AboutDialog", "Qt Version:", nullptr));
        qt_version_label->setText(QApplication::translate("AboutDialog", "qt ver", nullptr));
        opencv_title_label->setText(QApplication::translate("AboutDialog", "OpenCV Version:", nullptr));
        opencv_version_label->setText(QApplication::translate("AboutDialog", "opencv ver", nullptr));
        built_date_title_label->setText(QApplication::translate("AboutDialog", "Built on:", nullptr));
        built_date_label->setText(QApplication::translate("AboutDialog", "build date time", nullptr));
        url_title_label->setText(QApplication::translate("AboutDialog", "URL:", nullptr));
        url_label->setText(QApplication::translate("AboutDialog", "<html><head/><body><p><a href=\"http://mesh.brown.edu/scanning/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://mesh.brown.edu/scanning/</span></a></p></body></html>", nullptr));
        author_label->setText(QApplication::translate("AboutDialog", "(c) 2012-2015 Daniel Moreno and Gabriel Taubin", nullptr));
        close_button->setText(QApplication::translate("AboutDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
