#include "class.h"
#include <math.h>
#define DIM 5
#define PUNTI 4
using namespace std;

double esponenziale(double n) {return exp(n);}
double fattoriale(double n) {return (n > 1) ? n * fattoriale(n - 1) : 1;}
double erroreAssoluto(double espon, double t) {return t - espon;}
double erroreRelativo(double espon, double t) {return erroreAssoluto(espon, t) / espon;}

double taylorFunction(double n, int N) {
    double ris = 0;	
    for(int i = 0; i < N; ++i)
        ris += pow(n, i) / fattoriale(i);
    return ris;
}

void approssimazioneErrore(double n){
    double N[DIM]={3, 10, 50, 100, 150};
    double espon = esponenziale(n);
    double valoreTaylor;
    for(int i = 0; i < DIM; ++i){			
        if(n < 0){
            valoreTaylor = 1;
            valoreTaylor /= taylorFunction(-n, N[i]);		
            cout << "n negativo -> reciproco di Taylor ( taylorFunction() ): " << valoreTaylor << endl << "Approssimazione con funzione esponenziale(): " << espon << endl;
        }else{ 
            valoreTaylor = taylorFunction(n, N[i]);
            cout << "Per N = " << N[i] << endl;
            cout << "Approssimazione con Taylor ( taylorFunction() ): " << valoreTaylor << endl << "Approssimazione con funzione esponenziale(): "<< espon <<endl;	
        }
        double errAss = erroreAssoluto(espon, valoreTaylor);
        double errRel = erroreRelativo(espon, valoreTaylor);
        cout << "L'errore assoluto e': " << errAss << endl << "L'errore relativo e': " << errRel << endl << endl << endl;
    }
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
    cout << "==================================== ESERCIZIO 2 ====================================\n";
    cout << "=====================-------------------------------------------=====================\n";
    cout << "===== Errore relativo, errore assoluto (Approssimazione con funzione di taylorFunction) =====\n";
    cout << "=====================================================================================\n";
    cout << "\n\n";

    double punti [PUNTI] = {0.5, 30.0, -0.5, -30.0};
    for(int i = 0; i < PUNTI; i++){
        cout << "L'APPROSSIMAZIONE PER IL PUNTO p = " << punti[i] << " E' LA SEGUENTE: " << endl << endl;
        approssimazioneErrore(punti[i]);
        cout << endl;
    }
    return 0;
}

