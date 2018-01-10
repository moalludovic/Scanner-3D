/********************************************************************************
** Form generated from reading UI file 'CaptureDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTUREDIALOG_H
#define UI_CAPTUREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "ImageLabel.hpp"

QT_BEGIN_NAMESPACE

class Ui_CaptureDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QGroupBox *projector_group;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *screen_label;
    QComboBox *screen_combo;
    QLabel *projector_patterns_label;
    QSpinBox *projector_patterns_spin;
    ImageLabel *projector_image;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *continuous_check;
    QSpinBox *continuous_spin;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *test_check;
    QPushButton *test_prev_button;
    QPushButton *test_next_button;
    QGroupBox *camera_group;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *camera_label;
    QComboBox *camera_combo;
    QLabel *camera_resolution_label;
    ImageLabel *camera_image;
    QHBoxLayout *horizontalLayout_7;
    QLabel *camera_exposure_label;
    QSpinBox *camera_exposure_spin;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *other_group;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_10;
    QLabel *rotation_label;
    QRadioButton *rot_000_radio;
    QRadioButton *rot_090_radio;
    QRadioButton *rot_180_radio;
    QRadioButton *rot_270_radio;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *output_dir_label;
    QLineEdit *output_dir_line;
    QPushButton *output_dir_button;
    QLabel *current_message_label;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *progress_label;
    QProgressBar *progress_bar;
    QSpacerItem *horizontalSpacer;
    QPushButton *capture_button;
    QPushButton *close_cancel_button;

    void setupUi(QDialog *CaptureDialog)
    {
        if (CaptureDialog->objectName().isEmpty())
            CaptureDialog->setObjectName(QStringLiteral("CaptureDialog"));
        CaptureDialog->resize(695, 391);
        verticalLayout = new QVBoxLayout(CaptureDialog);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        projector_group = new QGroupBox(CaptureDialog);
        projector_group->setObjectName(QStringLiteral("projector_group"));
        verticalLayout_2 = new QVBoxLayout(projector_group);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        screen_label = new QLabel(projector_group);
        screen_label->setObjectName(QStringLiteral("screen_label"));

        horizontalLayout_5->addWidget(screen_label);

        screen_combo = new QComboBox(projector_group);
        screen_combo->setObjectName(QStringLiteral("screen_combo"));

        horizontalLayout_5->addWidget(screen_combo);

        projector_patterns_label = new QLabel(projector_group);
        projector_patterns_label->setObjectName(QStringLiteral("projector_patterns_label"));

        horizontalLayout_5->addWidget(projector_patterns_label);

        projector_patterns_spin = new QSpinBox(projector_group);
        projector_patterns_spin->setObjectName(QStringLiteral("projector_patterns_spin"));

        horizontalLayout_5->addWidget(projector_patterns_spin);


        verticalLayout_2->addLayout(horizontalLayout_5);

        projector_image = new ImageLabel(projector_group);
        projector_image->setObjectName(QStringLiteral("projector_image"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(projector_image->sizePolicy().hasHeightForWidth());
        projector_image->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(projector_image);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        continuous_check = new QCheckBox(projector_group);
        continuous_check->setObjectName(QStringLiteral("continuous_check"));

        horizontalLayout_9->addWidget(continuous_check);

        continuous_spin = new QSpinBox(projector_group);
        continuous_spin->setObjectName(QStringLiteral("continuous_spin"));

        horizontalLayout_9->addWidget(continuous_spin);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        test_check = new QCheckBox(projector_group);
        test_check->setObjectName(QStringLiteral("test_check"));

        horizontalLayout_8->addWidget(test_check);

        test_prev_button = new QPushButton(projector_group);
        test_prev_button->setObjectName(QStringLiteral("test_prev_button"));
        test_prev_button->setMaximumSize(QSize(64, 16777215));

        horizontalLayout_8->addWidget(test_prev_button);

        test_next_button = new QPushButton(projector_group);
        test_next_button->setObjectName(QStringLiteral("test_next_button"));
        test_next_button->setMaximumSize(QSize(64, 16777215));

        horizontalLayout_8->addWidget(test_next_button);


        verticalLayout_2->addLayout(horizontalLayout_8);


        horizontalLayout->addWidget(projector_group);

        camera_group = new QGroupBox(CaptureDialog);
        camera_group->setObjectName(QStringLiteral("camera_group"));
        verticalLayout_3 = new QVBoxLayout(camera_group);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        camera_label = new QLabel(camera_group);
        camera_label->setObjectName(QStringLiteral("camera_label"));

        horizontalLayout_4->addWidget(camera_label);

        camera_combo = new QComboBox(camera_group);
        camera_combo->setObjectName(QStringLiteral("camera_combo"));

        horizontalLayout_4->addWidget(camera_combo);

        camera_resolution_label = new QLabel(camera_group);
        camera_resolution_label->setObjectName(QStringLiteral("camera_resolution_label"));

        horizontalLayout_4->addWidget(camera_resolution_label);


        verticalLayout_3->addLayout(horizontalLayout_4);

        camera_image = new ImageLabel(camera_group);
        camera_image->setObjectName(QStringLiteral("camera_image"));
        sizePolicy.setHeightForWidth(camera_image->sizePolicy().hasHeightForWidth());
        camera_image->setSizePolicy(sizePolicy);

        verticalLayout_3->addWidget(camera_image);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        camera_exposure_label = new QLabel(camera_group);
        camera_exposure_label->setObjectName(QStringLiteral("camera_exposure_label"));

        horizontalLayout_7->addWidget(camera_exposure_label);

        camera_exposure_spin = new QSpinBox(camera_group);
        camera_exposure_spin->setObjectName(QStringLiteral("camera_exposure_spin"));
        camera_exposure_spin->setMinimumSize(QSize(64, 0));

        horizontalLayout_7->addWidget(camera_exposure_spin);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout_3->addLayout(horizontalLayout_7);


        horizontalLayout->addWidget(camera_group);


        verticalLayout->addLayout(horizontalLayout);

        other_group = new QGroupBox(CaptureDialog);
        other_group->setObjectName(QStringLiteral("other_group"));
        verticalLayout_4 = new QVBoxLayout(other_group);
        verticalLayout_4->setSpacing(4);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(4, 4, 4, 4);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        rotation_label = new QLabel(other_group);
        rotation_label->setObjectName(QStringLiteral("rotation_label"));

        horizontalLayout_10->addWidget(rotation_label);

        rot_000_radio = new QRadioButton(other_group);
        rot_000_radio->setObjectName(QStringLiteral("rot_000_radio"));
        rot_000_radio->setMaximumSize(QSize(64, 16777215));
        rot_000_radio->setChecked(true);

        horizontalLayout_10->addWidget(rot_000_radio);

        rot_090_radio = new QRadioButton(other_group);
        rot_090_radio->setObjectName(QStringLiteral("rot_090_radio"));
        rot_090_radio->setMaximumSize(QSize(64, 16777215));

        horizontalLayout_10->addWidget(rot_090_radio);

        rot_180_radio = new QRadioButton(other_group);
        rot_180_radio->setObjectName(QStringLiteral("rot_180_radio"));
        rot_180_radio->setMaximumSize(QSize(64, 16777215));

        horizontalLayout_10->addWidget(rot_180_radio);

        rot_270_radio = new QRadioButton(other_group);
        rot_270_radio->setObjectName(QStringLiteral("rot_270_radio"));
        rot_270_radio->setMaximumSize(QSize(64, 16777215));

        horizontalLayout_10->addWidget(rot_270_radio);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        output_dir_label = new QLabel(other_group);
        output_dir_label->setObjectName(QStringLiteral("output_dir_label"));

        horizontalLayout_6->addWidget(output_dir_label);

        output_dir_line = new QLineEdit(other_group);
        output_dir_line->setObjectName(QStringLiteral("output_dir_line"));

        horizontalLayout_6->addWidget(output_dir_line);

        output_dir_button = new QPushButton(other_group);
        output_dir_button->setObjectName(QStringLiteral("output_dir_button"));
        output_dir_button->setMaximumSize(QSize(30, 16777215));
        output_dir_button->setFocusPolicy(Qt::TabFocus);

        horizontalLayout_6->addWidget(output_dir_button);


        verticalLayout_4->addLayout(horizontalLayout_6);


        verticalLayout->addWidget(other_group);

        current_message_label = new QLabel(CaptureDialog);
        current_message_label->setObjectName(QStringLiteral("current_message_label"));

        verticalLayout->addWidget(current_message_label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        progress_label = new QLabel(CaptureDialog);
        progress_label->setObjectName(QStringLiteral("progress_label"));

        horizontalLayout_3->addWidget(progress_label);

        progress_bar = new QProgressBar(CaptureDialog);
        progress_bar->setObjectName(QStringLiteral("progress_bar"));
        progress_bar->setValue(24);

        horizontalLayout_3->addWidget(progress_bar);


        horizontalLayout_2->addLayout(horizontalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        capture_button = new QPushButton(CaptureDialog);
        capture_button->setObjectName(QStringLiteral("capture_button"));

        horizontalLayout_2->addWidget(capture_button);

        close_cancel_button = new QPushButton(CaptureDialog);
        close_cancel_button->setObjectName(QStringLiteral("close_cancel_button"));

        horizontalLayout_2->addWidget(close_cancel_button);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(CaptureDialog);

        QMetaObject::connectSlotsByName(CaptureDialog);
    } // setupUi

    void retranslateUi(QDialog *CaptureDialog)
    {
        CaptureDialog->setWindowTitle(QApplication::translate("CaptureDialog", "Capture", nullptr));
        projector_group->setTitle(QApplication::translate("CaptureDialog", "Projector", nullptr));
        screen_label->setText(QApplication::translate("CaptureDialog", "Screen:", nullptr));
        projector_patterns_label->setText(QApplication::translate("CaptureDialog", "Patterns:", nullptr));
        continuous_check->setText(QApplication::translate("CaptureDialog", "Continuous", nullptr));
        test_check->setText(QApplication::translate("CaptureDialog", "Preview", nullptr));
        test_prev_button->setText(QApplication::translate("CaptureDialog", "Prev", nullptr));
        test_next_button->setText(QApplication::translate("CaptureDialog", "Next", nullptr));
        camera_group->setTitle(QApplication::translate("CaptureDialog", "Camera", nullptr));
        camera_label->setText(QApplication::translate("CaptureDialog", "Camera:", nullptr));
        camera_resolution_label->setText(QApplication::translate("CaptureDialog", "image size", nullptr));
#ifndef QT_NO_TOOLTIP
        camera_exposure_label->setToolTip(QApplication::translate("CaptureDialog", "<html><head/><body><p>Adjust to be at least the value of the camera (or larger). This control does not change the actual camera settings.</p></body></html>", nullptr));
#endif // QT_NO_TOOLTIP
        camera_exposure_label->setText(QApplication::translate("CaptureDialog", "Wait/Exposure time[ms]:", nullptr));
        other_group->setTitle(QApplication::translate("CaptureDialog", "Other", nullptr));
        rotation_label->setText(QApplication::translate("CaptureDialog", "Rotation:", nullptr));
        rot_000_radio->setText(QApplication::translate("CaptureDialog", "0", nullptr));
        rot_090_radio->setText(QApplication::translate("CaptureDialog", "90", nullptr));
        rot_180_radio->setText(QApplication::translate("CaptureDialog", "180", nullptr));
        rot_270_radio->setText(QApplication::translate("CaptureDialog", "270", nullptr));
        output_dir_label->setText(QApplication::translate("CaptureDialog", "Output folder:", nullptr));
        output_dir_button->setText(QApplication::translate("CaptureDialog", "...", nullptr));
        current_message_label->setText(QApplication::translate("CaptureDialog", "message", nullptr));
        progress_label->setText(QApplication::translate("CaptureDialog", "Progress", nullptr));
        capture_button->setText(QApplication::translate("CaptureDialog", "Capture", nullptr));
        close_cancel_button->setText(QApplication::translate("CaptureDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CaptureDialog: public Ui_CaptureDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTUREDIALOG_H
