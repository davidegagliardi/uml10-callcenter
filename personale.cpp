#include "personale.h"
#include <iostream>
using namespace std;

Personale::Personale(string _nome, string _cognome){
    nome = _nome;
    cognome = _cognome;
}
Personale::~Personale() {}
string Personale::getNome() const {
    return nome;
}
string Personale::getCognome() const {
    return cognome;
}