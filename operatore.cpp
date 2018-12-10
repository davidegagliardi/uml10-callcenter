#include "operatore.h"
#include <iostream>
using namespace std;

Operatore::Operatore(string _nome, string _cognome, int _operId, int _anniExp):Personale(_nome, _cognome) {
    operId = _operId;
    anniExp = _anniExp;
}
Operatore::~Operatore() {}

ostream& operator << (ostream &os, const Operatore& o) {
    return os << "Operatore: " << o.getNome() << " " << o.getCognome() << " " << o.operId << " " << o.anniExp;
}
int Operatore::getId() {
    return operId;
}