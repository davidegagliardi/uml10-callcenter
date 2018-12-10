#ifndef __CHIAMATE_H__
#define __CHIAMATE_H__

#include "operatore.h"
#include "utente.h"
using namespace std;

class Chiamate{
private:
    int durata;
    bool status;
    Operatore* oper;
    Utente* utente;
public:
    Chiamate(Utente& _utente, Operatore& _oper, int _durata, bool _status);
    ~Chiamate();
    friend ostream& operator << (ostream& os, const Chiamate c);
};

ostream& operator << (ostream& os, const Chiamate c);

#endif
