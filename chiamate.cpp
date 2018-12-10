#include "chiamate.h"
#include <iostream>
using namespace std;

Chiamate::Chiamate(Utente& _utente, Operatore& _oper, int _durata, bool _status) {
    utente = &_utente;
    oper =&_oper;
    durata = _durata;
    status = _status;
}
Chiamate::~Chiamate() {}
ostream& operator << (ostream& os, const Chiamate c){
    //se non metto * stampa indirizzi di memoria
    return os << "Chiamata tra: " << *c.oper << " e " << *c.utente << " Durata: " << c.durata << " Status: " << c.status;
}
