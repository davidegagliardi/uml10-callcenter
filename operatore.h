#ifndef __OPERATORE_H__
#define __OPERATORE_H__

#include "personale.h"
using namespace std;

class Operatore:public Personale{
private:
    int operId;
    int anniExp;
public:
    Operatore(string _nome, string _cognome, int _operId, int _anniExp);
    ~Operatore();
    friend ostream& operator << (ostream& os, const Operatore& o);
    int getId();
};

ostream& operator << (ostream& os, const Operatore& o);
#endif