#include "hotell.h"
#include "ui_hotell.h"
#include <QMessageBox>
#include <fstream>

Hotell::Hotell(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Hotell)
    , hotelliRuumid(new ruumid(RUUMIDE_ARV))
{
    ui->setupUi(this);
    
    std::fstream db("db.txt");
    if (db.is_open()) {
        std::string rida;
        while (std::getline(db, rida)) {
            std::stringstream ss(rida);
            std::string osa;
            std::vector<std::string> osad;
            while (std::getline(ss, osa, ';')) {
                osad.push_back(osa);
            }
            if (osad.size() == 3) {
                int ruumId = std::stoi(osad[0]);
                time_t algus = std::stoll(osad[1]);
                time_t lopp = std::stoll(osad[2]);
                if (hotelliRuumid->kontrolli(lopp)) {
                    hotelliRuumid->salvesta(ruumId, algus, lopp);
                }
            }
        }
        db.close();
    }
}

Hotell::~Hotell()
{
    std::fstream db("db.txt", std::ios::out | std::ios::trunc);
    if (db.is_open()) {
        hotelliRuumid->kirjutaKoik(db);
        db.close();
    }
    
    delete hotelliRuumid;
    delete ui;
}

void Hotell::on_savePushButton_clicked()
{
    auto [ruumiNr, algusKuup, loppKuup] = handleRegistration();
    
    time_t algus = QDateTime(algusKuup).toSecsSinceEpoch();
    time_t lopp = QDateTime(loppKuup).toSecsSinceEpoch();
    
    if (hotelliRuumid->kontrolli(lopp)) {
        hotelliRuumid->salvesta(ruumiNr.toInt(), algus, lopp);
        QMessageBox::information(this, "Success", "Broneering on salvestatud!");
        clearInputs();
    } else {
        QMessageBox::warning(this, "Error", "Vale broneeringu aeg!");
    }
}

void Hotell::on_removePushButton_clicked()
{
    QString ruumiNr = handleRemoval();
    QMessageBox::information(this, "Info", "Ruum " + ruumiNr + " broneeringu eemaldamine pole veel implementeeritud");
}
