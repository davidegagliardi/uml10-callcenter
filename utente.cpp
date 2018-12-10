#include "utente.h"
#include <iostream>
using namespace std;

Utente::Utente(string _nome, string _cognome, int _userId, int _level):Personale(_nome, _cognome){
    userId = _userId;
    level = _level;
}
Utente::~Utente() {}
ostream& operator << (ostream &os, const Utente& u) {
    return os << "Utente: " << u.getNome() << " " << u.getCognome() << " " << u.userId << " " << u.level;
}