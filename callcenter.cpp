#include "callcenter.h"
#include <iostream>
using namespace std;

Callcenter::Callcenter(string _citta){
    citta = _citta;
}

void Callcenter::add_operatore(string nome, string cognome, int operId, int anniExp) {
    lo.push_back(Operatore(nome, cognome, operId, anniExp));
}
void Callcenter::add_chiamata(Utente& u, int idOper, int durata, int status) {
    list<Operatore>::iterator loi;
    for(loi=lo.begin(); loi!=lo.end(); ++loi){
        //per cercare l'operatore devo avere il suo ID
        if(loi->getId() == idOper){
            lc.push_back(Chiamate(u, *loi, durata, status));
        }
    }
}
ostream& operator << (ostream& os, Callcenter cc){
    /*list<Operatore>::iterator loi;
    for(loi=cc.lo.begin(); loi!= cc.lo.end(); ++loi){
        return os << *loi;
    }*/
    list<Chiamate>::iterator lci;
    for(lci=cc.lc.begin(); lci!=cc.lc.end(); ++lci){
        os << *lci << endl;
    }
    return os;
}