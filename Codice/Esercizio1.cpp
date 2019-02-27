#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>

using namespace std;


class Student {
    String name;
    String surname;
    String id;

    student(String n, String s, int id){
        this.name = n;
        this.surname = s;
        this.id = id;
    }

    String getName(){
        return this.name;
    }

    String getSurname(){
        return this.surname;
    }

    String getId(){
        return this.id;
    }

}



void testF(int d0, int d1, int i, double& ris1, double& ris2) {
    double a = (d0 + 1) * pow(10, i), b = (d1 + 1) * pow(10, 20), c = -b;
    ris1 = (a + b) + c;
    ris2 = a + (b + c);
}



int main() {
    

    //project owners declaration;
    const int N= 2;
    Student students[N];
    students[0] ("Davide", "Manca", "S4475879");
    students[1] ("Antonio", "Scano", "S4520672");

    //project owners output;
    cout<< "Progetto a cura di: \n"
    for(int i=0; i<N; ++i)
        cout<< students[i].getName() << "\t" <<students[i].getSurname() << "\t codice di matricola: "<< students[i].getId()<< "\n\n";

    cout<< "=====================================================================================";
    cout<< "==================================== ESERCIZIO 1 ====================================";
    cout<< "=====================-------------------------------------------=====================";
    cout<< "================================= Codici matricole ==================================";
    cout<< "=====================================================================================";



    //exercise 1 begin:
    int d0, d1;
    d0= getId().at(7);
    d1= getId().at(6);

    cout<< "d0: "<< d0;
    cout<< "d1: "<< d1;

    cout<< "calling testFunction("<< d0<< ", "<< d1<< ");"

    double ris1 = 0.0, ris2 = 0.0;
    for(int i = 0; i < 20; ++i) {
        sv(d0, d1, i, ris1, ris2);
        cout << "Prima expr (a+b)+c con i = " << i << " e' uguale a " << ris1 << endl;
        cout << "Seconda expr a+(b+c) con i = " << i << " e' uguale a " << ris2 << endl << endl;
    }	
    return 0;
}

	


	
	
	
