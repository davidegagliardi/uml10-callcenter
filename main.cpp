#include "callcenter.h"
#include <iostream>
#include <list>
using namespace std;

int main() {
    Callcenter cc ("Povo");

    Utente u1("Stegosandro","Scottecs",1);
    Utente u2("Joe","Bastianich",2);
    list <Utente> ls;
    ls.push_back(u1);
    ls.push_back(u2);

    cc.add_operatore("Antonino","Cannavacciuolo",1,2);
    cc.add_operatore("Carlo","Cracco",2,1);
    cc.add_operatore("Bruno","Barbieri",3,1);


    cc.add_chiamata(u1, 1, 20, true);
    cc.add_chiamata(u1, 2, 20, true);
    cc.add_chiamata(u2, 3, 25, true);

    cout << cc;



    return 0;
}
