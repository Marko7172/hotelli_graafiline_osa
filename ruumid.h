#ifndef RUUMID_H
#define RUUMID_H

#include <unordered_map>
#include <vector>
#include <ctime>
#include <fstream>

class ruumid {
private:
    std::unordered_map<int, std::vector<std::pair<time_t, time_t>>> ruumideKaart;
    int ruumidKogus;
public:
    explicit ruumid(int kogus);
    int getKogus() const;
    std::vector<int> leia(time_t start, time_t end);
    void salvesta(int ruum, time_t start, time_t end);

    static void kirjuta(int ruum, time_t start, time_t end, std::fstream& db);
    void kirjutaKoik(std::fstream& db);

    static bool kontrolli(time_t end);
};

#endif // RUUMID_H