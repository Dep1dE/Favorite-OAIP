/********************************************************************************
** Form generated from reading UI file 'oshibka.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OSHIBKA_H
#define UI_OSHIBKA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_oshibka
{
public:
    QTextEdit *textEdit;

    void setupUi(QDialog *oshibka)
    {
        if (oshibka->objectName().isEmpty())
            oshibka->setObjectName("oshibka");
        oshibka->resize(400, 300);
        textEdit = new QTextEdit(oshibka);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(0, 0, 401, 301));

        retranslateUi(oshibka);

        QMetaObject::connectSlotsByName(oshibka);
    } // setupUi

    void retranslateUi(QDialog *oshibka)
    {
        oshibka->setWindowTitle(QCoreApplication::translate("oshibka", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class oshibka: public Ui_oshibka {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OSHIBKA_H
