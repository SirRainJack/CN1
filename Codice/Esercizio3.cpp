#include "class.h"
#include <math.h>
using namespace std;

long double doppiaPrecisione (long double baseDoppia){
    long double d = 0; //risultato doppia precisione
    double tmpd;
    do {
        ++d;		
        tmpd = pow(baseDoppia, -d);
    }while((tmpd + 1) > 1);
    return d;
}

float singolaPrecisione(float baseSingola){
    float tmpd, d = 0; // risultato singola precisione
    do {
        ++d;		
        tmpd = pow(baseSingola, -d);
    }while((tmpd + 1) > 1);
    return d;
}

int main() {
    const int N = 2; //numero Studenti

    //dichiarazione degli sviluppatori
    Studente s[N] = {
        Studente ("Davide", "Manca", "4475879"),
        Studente ("Antonio", "Scano", "4520672")
    };
    
    //stampa dati sviluppatori
    cout << "\n\n=========================\n";
    cout << "|| PROGETTO A CURA DI: ||\n";
    cout << "============================================================\n";
    for(int i = 0; i < N; ++i){
        cout << "\t" << s[i].getName() << "\t" << s[i].getSurname() << "\t codice di matricola: "<< s[i].getId()<< "\n";
        cout << "============================================================\n";
    }

    cout << "\n\n",
    cout << "=====================================================================================\n";
    cout << "==================================== ESERCIZIO 3 ====================================\n";
    cout << "=====================-------------------------------------------=====================\n";
    cout << "======================= Singola precisione e doppia precisione ======================\n";
    cout << "=====================================================================================\n";
    cout << "\n\n";

    long double baseDoppia = 2.0;
    float baseSingola = 2;
    cout << "Il piu' grande d intero positivo in singola precisione e': " << singolaPrecisione(baseSingola) << endl;
    cout << "Il piu' grande d intero positivo in doppia precisione e': " << doppiaPrecisione(baseDoppia) << endl;
    return 0;
}


