#ifndef __UTENTE_H__
#define __UTENTE_H__

#include "personale.h"
using namespace std;


class Utente:public Personale{
private:
    int userId;
    int level;
public:
    Utente(string _nome, string _cognome, int _userId, int _level=0);
    ~Utente();
    friend ostream& operator << (ostream& os, const Utente& u);
};
ostream& operator << (ostream& os, const Utente& u);

#endif
