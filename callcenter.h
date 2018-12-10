#ifndef __CALLCENTER_H__
#define __CALLCENTER_H__

#include "operatore.h"
#include "chiamate.h"
#include <string>
#include <list>
using namespace std;

class Callcenter{
private:
    string citta;
    list<Chiamate> lc;
    list<Operatore> lo;
public:
    Callcenter(string _citta);
    void add_operatore(string nome, string cognome, int operId, int anniExp);
    void add_chiamata(Utente& u, int idOper, int durata, int status);
    friend ostream& operator << (ostream& os, Callcenter cc);

};

ostream& operator << (ostream& os, Callcenter cc);

#endif