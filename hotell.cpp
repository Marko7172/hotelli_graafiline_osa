#include "hotell.h"
#include "ui_hotell.h"
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>
#include <tuple>

Hotell::Hotell(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Hotell)
{
    ui->setupUi(this);

    // Ühendab 3 sisendit ja salvestamise nupu
    connect(ui->savePushButton, &QPushButton::clicked, this, &Hotell::handleRegistration);

    // Ühendus, mis puhastab toa numbrid sisendiväljadest peale broneerimist
    connect(ui->savePushButton, &QPushButton::clicked, this, &Hotell::clearInputs);

    // Ühendus toa numbri ja kustutamise nupuga
    connect(ui->removePushButton, &QPushButton::clicked, this, &Hotell::handleRemoval);

}

Hotell::~Hotell()
{
    delete ui;
}

// Tagastab tuple kolmest sisendist: (Toa number, algusaeg, lõppaeg)
std::tuple<QString, QDate, QDate> Hotell::handleRegistration(){
    QString addedRoomNr = ui->roomNrAddInput->text();
    QDate startDate = ui->startDateInput->date();
    QDate endDate = ui->endDateInput->date();

    qDebug() << "Nr:" << addedRoomNr << "Start:" << startDate << "End:" << endDate;
    qDebug() << std::make_tuple(addedRoomNr, startDate, endDate);

    return std::make_tuple(addedRoomNr, startDate, endDate);
}

// Tagastab toa numbri sõnena mida eemaldada.
QString Hotell::handleRemoval(){
    QString removedRoomNr = ui->roomNrRemoveInput->text();

    qDebug() << "Removed nr:" << removedRoomNr;

    clearInputs();

    return removedRoomNr;
}


// Funktsioon toanumbrite sisendivälja puhastamiseks
void Hotell::clearInputs() {
    ui->roomNrAddInput->clear();
    ui->roomNrRemoveInput->clear();
}


// Nupu funktsioon, mis annab kasutajale teada, et andmed on saadetud
void Hotell::on_savePushButton_clicked()
{
    QMessageBox::information(this, "Hotelli", "Toa broneering lisatud");
}

// Nupu funktsioon, mis annab kasutajale teada, et broneering on kustutatud
void Hotell::on_removePushButton_clicked()
{
    QMessageBox::information(this, "Hotelli", "Toa broneering eemaldatud");
}
