#include "ruumid.h"

ruumid::ruumid(int kogus) {
    ruumidKogus = kogus;
}

int ruumid::getKogus() const {
    return ruumidKogus;
}

std::vector<int> ruumid::leia(time_t start, time_t end) {
    std::vector<int> ruumidReturn;
    for (int i = 0; i < getKogus(); ++i) {
        bool sobib = true;
        for (const auto& [algus, lopp] : ruumideKaart[i]) {
            if (!(end <= algus || start >= lopp)) {
                sobib = false;
                break;
            }
        }
        if (sobib) {
            ruumidReturn.push_back(i);
        }
    }
    return ruumidReturn;
}

void ruumid::salvesta(int ruum, time_t start, time_t end) {
    ruumideKaart[ruum].emplace_back(start, end);
}

void ruumid::kirjuta(int ruum, time_t start, time_t end, std::fstream& db) {
    db << ruum << ";" << start << ";" << end << '\n';
}

void ruumid::kirjutaKoik(std::fstream& db) {
    for (int i = 0; i < getKogus(); ++i) {
        for (const auto& [algus, lopp] : ruumideKaart[i]) {
            db << i << ";" << algus << ";" << lopp << '\n';
        }
    }
}

bool ruumid::kontrolli(time_t end) {
    return end >= time(nullptr);
}