#include "class.h"
#include <math.h>
#include <stdio.h>

using namespace std;




void testF(int d0, int d1, int i, double& ris1, double& ris2) {
    double a = (d0 + 1) * pow(10, i), b = (d1 + 1) * pow(10, 20), c = -b;
    ris1 = (a + b) + c;
    ris2 = a + (b + c);
}


int main() {
    const int N = 2; //numero Studenti

    //dichiarazione degli sviluppatori
    Studente s[N] = {
        Studente ("Davide", "Manca", "4475879"),
        Studente ("Antonio", "Scano", "4520672")
    };
    
    //stampa dati sviluppatori
    cout << "\n\n\n=========================\n";
    cout << "|| PROGETTO A CURA DI: ||\n";
    cout << "============================================================\n";
    for(int i = 0; i < N; ++i){
        cout << "\t" << s[i].getName() << "\t" << s[i].getSurname() << "\t codice di matricola: "<< s[i].getId()<< "\n";
        cout << "============================================================\n";
    }
    
    cout << "\n\n",
    cout << "=====================================================================================\n";
    cout << "==================================== ESERCIZIO 1 ====================================\n";
    cout << "=====================-------------------------------------------=====================\n";
    cout << "================================= Codici matricole ==================================\n";
    cout << "=====================================================================================\n";

    //prendiamo in considerazione le ultime due cifre della matricola dello studente Davide Manca, ovvero 7 e 9:
    string d0, d1;
    d0 = s[0].getId().at(6);
    d1 = s[0].getId().at(5);
  
    int lastNumber = stoi(d0); 
    int penultimateNumber = stoi(d1);

    cout << "\n\nUltima cifra (lastNumber): "<< d0 << "\nPenultima cifra (penultimateNumber): "<< d1;
    
    cout << "\nRisultato dopo chiamata funzione testF\n\n";

    double ris1 = 0.0, ris2 = 0.0;
    for(int i = 0; i < 20; ++i) {
        testF(lastNumber, penultimateNumber, i, ris1, ris2);
        cout << "Prima expr (a+b)+c con i = " << i << " e' uguale a " << ris1 << endl;
        cout << "Seconda expr a+(b+c) con i = " << i << " e' uguale a " << ris2 << endl << endl;
    }	
    return 0;
}

	


	
	
	
