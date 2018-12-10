#ifndef __PERSONALE_H__
#define __PERSONALE_H__

#include <string>
using namespace std;

class Personale{
private:
    string nome;
    string cognome;
public:
    Personale(string _nome, string _cognome);
    ~Personale();
    string getNome()const;
    string getCognome()const;
};

//9:36 -> 10:18

#endif