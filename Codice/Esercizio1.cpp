#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>

using namespace std;


class Studente {
    
    private:
    string name;
    string surname;
    string id;

    public:
    Studente(string n, string s, string id){
        this->name = n;
        this->surname = s;
        this->id = id;
    }

    string getName(){
        return this->name;
    }

    string getSurname(){
        return this->surname;
    }

    string getId(){
        return this->id;
    }

};





void testF(int d0, int d1, int i, double& ris1, double& ris2) {
    double a = (d0 + 1) * pow(10, i), b = (d1 + 1) * pow(10, 20), c = -b;
    ris1 = (a + b) + c;
    ris2 = a + (b + c);
}


int main() {
    

    //dichiarazione degli sviluppatori
    Studente S1 = Studente ("Davide", "Manca", "4475879");
    Studente S2 = Studente ("Antonio", "Scano", "4520672");
    
    //stampa dati sviluppatori
    cout<< "Progetto a cura di: \n";
    cout<< S1.getName() << "\t" << S1.getSurname() << "\t codice di matricola: "<< S1.getId()<< "\n\n";
    cout<< S2.getName() << "\t" << S2.getSurname() << "\t codice di matricola: "<< S2.getId()<< "\n\n";

    cout<< "=====================================================================================";
    cout<< "==================================== ESERCIZIO 1 ====================================";
    cout<< "=====================-------------------------------------------=====================";
    cout<< "================================= Codici matricole ==================================";
    cout<< "=====================================================================================";



    //prendiamo in considerazione le ultime due cifre della matricola dello studente Davide Manca, ovvero 7 e 9:
    string d0, d1;
    d0 = Davide.getId().at(6);
    d1 = Davide.getId().at(5);
  
    int lastNumber = stoi(d0); 
    int penultimateNumber = stoi(d1);

    cout<< "\n\nUltima cifra (lastNumber): "<< d0 << "\nPenultima cifra (penultimateNumber): "<< d1;
    
    cout << "\nRisultato dopo chiamata funzione testF\n\n";

    double ris1 = 0.0, ris2 = 0.0;
    for(int i = 0; i < 20; ++i) {
        testF(lastNumber, penultimateNumber, i, ris1, ris2);
        cout << "Prima expr (a+b)+c con i = " << i << " e' uguale a " << ris1 << endl;
        cout << "Seconda expr a+(b+c) con i = " << i << " e' uguale a " << ris2 << endl << endl;
    }	
    return 0;
}

	


	
	
	
