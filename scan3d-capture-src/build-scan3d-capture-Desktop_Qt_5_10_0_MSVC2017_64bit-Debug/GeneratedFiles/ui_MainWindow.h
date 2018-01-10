/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "GLWidget.hpp"
#include "ImageLabel.hpp"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *change_dir_action;
    QAction *quit_action;
    QAction *save_vertical_image_action;
    QAction *about_action;
    QAction *save_horizontal_image_action;
    QAction *load_calibration_action;
    QAction *save_calibration_action;
    QAction *display_calibration_action;
    QAction *reconstruct_dump_action;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QGroupBox *images_group;
    QVBoxLayout *verticalLayout;
    QTreeView *image_tree;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *select_all_button;
    QPushButton *select_none_button;
    QPushButton *change_dir_button;
    QGroupBox *current_image_group;
    QHBoxLayout *horizontalLayout_3;
    ImageLabel *image1_label;
    ImageLabel *image2_label;
    GLWidget *glwidget;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *actions_group;
    QVBoxLayout *verticalLayout_3;
    QPushButton *capture_button;
    QPushButton *extract_corners_button;
    QPushButton *decode_button;
    QPushButton *calibrate_button;
    QPushButton *reconstruct_button;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *display_group;
    QVBoxLayout *verticalLayout_5;
    QRadioButton *display_original_radio;
    QRadioButton *display_decoded_radio;
    QRadioButton *display_projector_radio;
    QRadioButton *display_3dview_radio;
    QGroupBox *checkerboard_group;
    QGridLayout *gridLayout;
    QLabel *corner_count_label;
    QLabel *corners_size_label;
    QLineEdit *corners_width_line;
    QLineEdit *corners_height_line;
    QSpinBox *corner_count_y_spin;
    QSpinBox *corner_count_x_spin;
    QGroupBox *robust_decode_group;
    QFormLayout *formLayout_2;
    QPushButton *threshold_button;
    QSpinBox *threshold_spin;
    QLabel *b_label;
    QLineEdit *b_line;
    QLabel *m_label;
    QSpinBox *m_spin;
    QGroupBox *calibration_group;
    QFormLayout *formLayout;
    QLabel *homography_window_label;
    QSpinBox *homography_window_spin;
    QGroupBox *reconstruction_group;
    QFormLayout *formLayout_5;
    QLabel *max_dist_label;
    QLineEdit *max_dist_line;
    QCheckBox *normals_check;
    QCheckBox *colors_check;
    QCheckBox *binary_file_check;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuCalibration;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(786, 694);
        change_dir_action = new QAction(MainWindow);
        change_dir_action->setObjectName(QStringLiteral("change_dir_action"));
        quit_action = new QAction(MainWindow);
        quit_action->setObjectName(QStringLiteral("quit_action"));
        save_vertical_image_action = new QAction(MainWindow);
        save_vertical_image_action->setObjectName(QStringLiteral("save_vertical_image_action"));
        about_action = new QAction(MainWindow);
        about_action->setObjectName(QStringLiteral("about_action"));
        save_horizontal_image_action = new QAction(MainWindow);
        save_horizontal_image_action->setObjectName(QStringLiteral("save_horizontal_image_action"));
        load_calibration_action = new QAction(MainWindow);
        load_calibration_action->setObjectName(QStringLiteral("load_calibration_action"));
        save_calibration_action = new QAction(MainWindow);
        save_calibration_action->setObjectName(QStringLiteral("save_calibration_action"));
        display_calibration_action = new QAction(MainWindow);
        display_calibration_action->setObjectName(QStringLiteral("display_calibration_action"));
        reconstruct_dump_action = new QAction(MainWindow);
        reconstruct_dump_action->setObjectName(QStringLiteral("reconstruct_dump_action"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout_4 = new QHBoxLayout(centralwidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(6, 0, 6, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        images_group = new QGroupBox(centralwidget);
        images_group->setObjectName(QStringLiteral("images_group"));
        images_group->setMinimumSize(QSize(250, 0));
        images_group->setMaximumSize(QSize(250, 16777215));
        verticalLayout = new QVBoxLayout(images_group);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 0);
        image_tree = new QTreeView(images_group);
        image_tree->setObjectName(QStringLiteral("image_tree"));
        image_tree->setSelectionBehavior(QAbstractItemView::SelectRows);
        image_tree->setHeaderHidden(true);

        verticalLayout->addWidget(image_tree);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 6, -1, 6);
        horizontalSpacer_2 = new QSpacerItem(13, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        select_all_button = new QPushButton(images_group);
        select_all_button->setObjectName(QStringLiteral("select_all_button"));
        select_all_button->setMaximumSize(QSize(56, 16777215));

        horizontalLayout->addWidget(select_all_button);

        select_none_button = new QPushButton(images_group);
        select_none_button->setObjectName(QStringLiteral("select_none_button"));
        select_none_button->setMaximumSize(QSize(56, 16777215));

        horizontalLayout->addWidget(select_none_button);

        change_dir_button = new QPushButton(images_group);
        change_dir_button->setObjectName(QStringLiteral("change_dir_button"));

        horizontalLayout->addWidget(change_dir_button);


        verticalLayout->addLayout(horizontalLayout);


        horizontalLayout_2->addWidget(images_group);

        current_image_group = new QGroupBox(centralwidget);
        current_image_group->setObjectName(QStringLiteral("current_image_group"));
        horizontalLayout_3 = new QHBoxLayout(current_image_group);
#ifndef Q_OS_MAC
        horizontalLayout_3->setSpacing(6);
#endif
        horizontalLayout_3->setContentsMargins(6, 6, 6, 6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        image1_label = new ImageLabel(current_image_group);
        image1_label->setObjectName(QStringLiteral("image1_label"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(image1_label->sizePolicy().hasHeightForWidth());
        image1_label->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(image1_label);

        image2_label = new ImageLabel(current_image_group);
        image2_label->setObjectName(QStringLiteral("image2_label"));
        sizePolicy.setHeightForWidth(image2_label->sizePolicy().hasHeightForWidth());
        image2_label->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(image2_label);

        glwidget = new GLWidget(current_image_group);
        glwidget->setObjectName(QStringLiteral("glwidget"));
        sizePolicy.setHeightForWidth(glwidget->sizePolicy().hasHeightForWidth());
        glwidget->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(glwidget);


        horizontalLayout_2->addWidget(current_image_group);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        actions_group = new QGroupBox(centralwidget);
        actions_group->setObjectName(QStringLiteral("actions_group"));
        actions_group->setMaximumSize(QSize(200, 16777215));
        verticalLayout_3 = new QVBoxLayout(actions_group);
#ifndef Q_OS_MAC
        verticalLayout_3->setSpacing(6);
#endif
        verticalLayout_3->setContentsMargins(6, 6, 6, 6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        capture_button = new QPushButton(actions_group);
        capture_button->setObjectName(QStringLiteral("capture_button"));

        verticalLayout_3->addWidget(capture_button);

        extract_corners_button = new QPushButton(actions_group);
        extract_corners_button->setObjectName(QStringLiteral("extract_corners_button"));

        verticalLayout_3->addWidget(extract_corners_button);

        decode_button = new QPushButton(actions_group);
        decode_button->setObjectName(QStringLiteral("decode_button"));

        verticalLayout_3->addWidget(decode_button);

        calibrate_button = new QPushButton(actions_group);
        calibrate_button->setObjectName(QStringLiteral("calibrate_button"));

        verticalLayout_3->addWidget(calibrate_button);

        reconstruct_button = new QPushButton(actions_group);
        reconstruct_button->setObjectName(QStringLiteral("reconstruct_button"));

        verticalLayout_3->addWidget(reconstruct_button);

        verticalSpacer_2 = new QSpacerItem(20, 476, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        verticalLayout_2->addWidget(actions_group);

        display_group = new QGroupBox(centralwidget);
        display_group->setObjectName(QStringLiteral("display_group"));
        display_group->setMaximumSize(QSize(200, 16777215));
        verticalLayout_5 = new QVBoxLayout(display_group);
#ifndef Q_OS_MAC
        verticalLayout_5->setSpacing(6);
#endif
        verticalLayout_5->setContentsMargins(6, 6, 6, 6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        display_original_radio = new QRadioButton(display_group);
        display_original_radio->setObjectName(QStringLiteral("display_original_radio"));

        verticalLayout_5->addWidget(display_original_radio);

        display_decoded_radio = new QRadioButton(display_group);
        display_decoded_radio->setObjectName(QStringLiteral("display_decoded_radio"));

        verticalLayout_5->addWidget(display_decoded_radio);

        display_projector_radio = new QRadioButton(display_group);
        display_projector_radio->setObjectName(QStringLiteral("display_projector_radio"));

        verticalLayout_5->addWidget(display_projector_radio);

        display_3dview_radio = new QRadioButton(display_group);
        display_3dview_radio->setObjectName(QStringLiteral("display_3dview_radio"));

        verticalLayout_5->addWidget(display_3dview_radio);


        verticalLayout_2->addWidget(display_group);

        checkerboard_group = new QGroupBox(centralwidget);
        checkerboard_group->setObjectName(QStringLiteral("checkerboard_group"));
        checkerboard_group->setMaximumSize(QSize(200, 16777215));
        gridLayout = new QGridLayout(checkerboard_group);
#ifndef Q_OS_MAC
        gridLayout->setSpacing(6);
#endif
        gridLayout->setContentsMargins(6, 6, 6, 6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        corner_count_label = new QLabel(checkerboard_group);
        corner_count_label->setObjectName(QStringLiteral("corner_count_label"));
        corner_count_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(corner_count_label, 0, 0, 1, 1);

        corners_size_label = new QLabel(checkerboard_group);
        corners_size_label->setObjectName(QStringLiteral("corners_size_label"));
        corners_size_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(corners_size_label, 1, 0, 1, 1);

        corners_width_line = new QLineEdit(checkerboard_group);
        corners_width_line->setObjectName(QStringLiteral("corners_width_line"));
        corners_width_line->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(corners_width_line, 1, 1, 1, 1);

        corners_height_line = new QLineEdit(checkerboard_group);
        corners_height_line->setObjectName(QStringLiteral("corners_height_line"));
        corners_height_line->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(corners_height_line, 1, 2, 1, 1);

        corner_count_y_spin = new QSpinBox(checkerboard_group);
        corner_count_y_spin->setObjectName(QStringLiteral("corner_count_y_spin"));

        gridLayout->addWidget(corner_count_y_spin, 0, 2, 1, 1);

        corner_count_x_spin = new QSpinBox(checkerboard_group);
        corner_count_x_spin->setObjectName(QStringLiteral("corner_count_x_spin"));

        gridLayout->addWidget(corner_count_x_spin, 0, 1, 1, 1);


        verticalLayout_2->addWidget(checkerboard_group);

        robust_decode_group = new QGroupBox(centralwidget);
        robust_decode_group->setObjectName(QStringLiteral("robust_decode_group"));
        robust_decode_group->setMaximumSize(QSize(200, 16777215));
        formLayout_2 = new QFormLayout(robust_decode_group);
        formLayout_2->setContentsMargins(6, 6, 6, 6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_2->setHorizontalSpacing(6);
        formLayout_2->setVerticalSpacing(6);
        threshold_button = new QPushButton(robust_decode_group);
        threshold_button->setObjectName(QStringLiteral("threshold_button"));
        threshold_button->setMaximumSize(QSize(90, 16777215));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, threshold_button);

        threshold_spin = new QSpinBox(robust_decode_group);
        threshold_spin->setObjectName(QStringLiteral("threshold_spin"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, threshold_spin);

        b_label = new QLabel(robust_decode_group);
        b_label->setObjectName(QStringLiteral("b_label"));
        b_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, b_label);

        b_line = new QLineEdit(robust_decode_group);
        b_line->setObjectName(QStringLiteral("b_line"));
        b_line->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, b_line);

        m_label = new QLabel(robust_decode_group);
        m_label->setObjectName(QStringLiteral("m_label"));
        m_label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_2->setWidget(2, QFormLayout::LabelRole, m_label);

        m_spin = new QSpinBox(robust_decode_group);
        m_spin->setObjectName(QStringLiteral("m_spin"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, m_spin);


        verticalLayout_2->addWidget(robust_decode_group);

        calibration_group = new QGroupBox(centralwidget);
        calibration_group->setObjectName(QStringLiteral("calibration_group"));
        calibration_group->setMaximumSize(QSize(200, 16777215));
        formLayout = new QFormLayout(calibration_group);
        formLayout->setContentsMargins(6, 6, 6, 6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        homography_window_label = new QLabel(calibration_group);
        homography_window_label->setObjectName(QStringLiteral("homography_window_label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, homography_window_label);

        homography_window_spin = new QSpinBox(calibration_group);
        homography_window_spin->setObjectName(QStringLiteral("homography_window_spin"));

        formLayout->setWidget(0, QFormLayout::FieldRole, homography_window_spin);


        verticalLayout_2->addWidget(calibration_group);

        reconstruction_group = new QGroupBox(centralwidget);
        reconstruction_group->setObjectName(QStringLiteral("reconstruction_group"));
        reconstruction_group->setMaximumSize(QSize(200, 16777215));
        formLayout_5 = new QFormLayout(reconstruction_group);
        formLayout_5->setContentsMargins(6, 6, 6, 6);
        formLayout_5->setObjectName(QStringLiteral("formLayout_5"));
        formLayout_5->setHorizontalSpacing(6);
        formLayout_5->setVerticalSpacing(6);
        max_dist_label = new QLabel(reconstruction_group);
        max_dist_label->setObjectName(QStringLiteral("max_dist_label"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, max_dist_label);

        max_dist_line = new QLineEdit(reconstruction_group);
        max_dist_line->setObjectName(QStringLiteral("max_dist_line"));
        max_dist_line->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, max_dist_line);

        normals_check = new QCheckBox(reconstruction_group);
        normals_check->setObjectName(QStringLiteral("normals_check"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, normals_check);

        colors_check = new QCheckBox(reconstruction_group);
        colors_check->setObjectName(QStringLiteral("colors_check"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, colors_check);

        binary_file_check = new QCheckBox(reconstruction_group);
        binary_file_check->setObjectName(QStringLiteral("binary_file_check"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, binary_file_check);


        verticalLayout_2->addWidget(reconstruction_group);


        horizontalLayout_4->addLayout(verticalLayout_2);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 786, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        menuCalibration = new QMenu(menubar);
        menuCalibration->setObjectName(QStringLiteral("menuCalibration"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuCalibration->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(change_dir_action);
        menuFile->addAction(save_vertical_image_action);
        menuFile->addAction(save_horizontal_image_action);
        menuFile->addAction(reconstruct_dump_action);
        menuFile->addSeparator();
        menuFile->addAction(quit_action);
        menuFile->addSeparator();
        menuHelp->addAction(about_action);
        menuCalibration->addAction(load_calibration_action);
        menuCalibration->addAction(save_calibration_action);
        menuCalibration->addAction(display_calibration_action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "3D Scanning Software", nullptr));
        change_dir_action->setText(QApplication::translate("MainWindow", "Change dir...", nullptr));
        quit_action->setText(QApplication::translate("MainWindow", "Quit", nullptr));
        save_vertical_image_action->setText(QApplication::translate("MainWindow", "Save vertical image...", nullptr));
        about_action->setText(QApplication::translate("MainWindow", "About...", nullptr));
        save_horizontal_image_action->setText(QApplication::translate("MainWindow", "Save horizontal image...", nullptr));
        load_calibration_action->setText(QApplication::translate("MainWindow", "Load...", nullptr));
        save_calibration_action->setText(QApplication::translate("MainWindow", "Save...", nullptr));
        display_calibration_action->setText(QApplication::translate("MainWindow", "Display...", nullptr));
        reconstruct_dump_action->setText(QApplication::translate("MainWindow", "Reconstruct from dump...", nullptr));
        images_group->setTitle(QApplication::translate("MainWindow", "Images", nullptr));
        select_all_button->setText(QApplication::translate("MainWindow", "All", nullptr));
        select_none_button->setText(QApplication::translate("MainWindow", "None", nullptr));
        change_dir_button->setText(QApplication::translate("MainWindow", "Change dir...", nullptr));
        current_image_group->setTitle(QApplication::translate("MainWindow", "Current View", nullptr));
        actions_group->setTitle(QApplication::translate("MainWindow", "Actions", nullptr));
        capture_button->setText(QApplication::translate("MainWindow", "Capture...", nullptr));
        extract_corners_button->setText(QApplication::translate("MainWindow", "Extract Corners", nullptr));
        decode_button->setText(QApplication::translate("MainWindow", "Decode", nullptr));
        calibrate_button->setText(QApplication::translate("MainWindow", "Calibrate", nullptr));
        reconstruct_button->setText(QApplication::translate("MainWindow", "Reconstruct", nullptr));
        display_group->setTitle(QApplication::translate("MainWindow", "Display", nullptr));
        display_original_radio->setText(QApplication::translate("MainWindow", "Original images", nullptr));
        display_decoded_radio->setText(QApplication::translate("MainWindow", "Pattern images", nullptr));
        display_projector_radio->setText(QApplication::translate("MainWindow", "Projector view", nullptr));
        display_3dview_radio->setText(QApplication::translate("MainWindow", "3D View", nullptr));
        checkerboard_group->setTitle(QApplication::translate("MainWindow", "Checkerboard", nullptr));
#ifndef QT_NO_TOOLTIP
        corner_count_label->setToolTip(QApplication::translate("MainWindow", "Interior number of corners", nullptr));
#endif // QT_NO_TOOLTIP
        corner_count_label->setText(QApplication::translate("MainWindow", "Corners", nullptr));
        corners_size_label->setText(QApplication::translate("MainWindow", "Size", nullptr));
        corners_width_line->setText(QApplication::translate("MainWindow", "1", nullptr));
        corners_height_line->setText(QApplication::translate("MainWindow", "1", nullptr));
        robust_decode_group->setTitle(QApplication::translate("MainWindow", "Decode", nullptr));
#ifndef QT_NO_TOOLTIP
        threshold_button->setToolTip(QApplication::translate("MainWindow", "Apply threshold to the current pattern", nullptr));
#endif // QT_NO_TOOLTIP
        threshold_button->setText(QApplication::translate("MainWindow", "Threshold", nullptr));
#ifndef QT_NO_TOOLTIP
        b_label->setToolTip(QApplication::translate("MainWindow", "Black light power ratio (projector)", nullptr));
#endif // QT_NO_TOOLTIP
        b_label->setText(QApplication::translate("MainWindow", "b", nullptr));
#ifndef QT_NO_TOOLTIP
        b_line->setToolTip(QApplication::translate("MainWindow", "Black light power ratio (projector)", nullptr));
#endif // QT_NO_TOOLTIP
        b_line->setText(QApplication::translate("MainWindow", "0.0", nullptr));
#ifndef QT_NO_TOOLTIP
        m_label->setToolTip(QApplication::translate("MainWindow", "Minimum direct light component", nullptr));
#endif // QT_NO_TOOLTIP
        m_label->setText(QApplication::translate("MainWindow", "m", nullptr));
#ifndef QT_NO_TOOLTIP
        m_spin->setToolTip(QApplication::translate("MainWindow", "Minimum direct light component", nullptr));
#endif // QT_NO_TOOLTIP
        calibration_group->setTitle(QApplication::translate("MainWindow", "Calibration", nullptr));
#ifndef QT_NO_TOOLTIP
        homography_window_label->setToolTip(QApplication::translate("MainWindow", "Homography window size", nullptr));
#endif // QT_NO_TOOLTIP
        homography_window_label->setText(QApplication::translate("MainWindow", "H Win", nullptr));
        reconstruction_group->setTitle(QApplication::translate("MainWindow", "Reconstruction", nullptr));
        max_dist_label->setText(QApplication::translate("MainWindow", "Max. ray distance", nullptr));
        max_dist_line->setText(QApplication::translate("MainWindow", "0.0", nullptr));
#ifndef QT_NO_TOOLTIP
        normals_check->setToolTip(QApplication::translate("MainWindow", "Save point normals", nullptr));
#endif // QT_NO_TOOLTIP
        normals_check->setText(QApplication::translate("MainWindow", "Normals", nullptr));
#ifndef QT_NO_TOOLTIP
        colors_check->setToolTip(QApplication::translate("MainWindow", "Save point colors", nullptr));
#endif // QT_NO_TOOLTIP
        colors_check->setText(QApplication::translate("MainWindow", "Colors", nullptr));
#ifndef QT_NO_TOOLTIP
        binary_file_check->setToolTip(QApplication::translate("MainWindow", "Save pointcloud in binary format", nullptr));
#endif // QT_NO_TOOLTIP
        binary_file_check->setText(QApplication::translate("MainWindow", "Binary format", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", nullptr));
        menuCalibration->setTitle(QApplication::translate("MainWindow", "Calibration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
