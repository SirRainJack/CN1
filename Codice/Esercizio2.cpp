#include <iostream>
#include <math.h>
using namespace std;
#define DIM 5
#define PUNTI 4

double esponenziale(double n){
    return exp(n);
}
double fattoriale(double n) {
    return (n > 1) ? n * fattoriale(n - 1) : 1;
}

double erroreAssoluto(double espon, double t) {
    return t - espon;
}

double erroreRelativo(double espon, double t) {
    return erroreAssoluto(espon, t) / espon;
}

double taylor(double n, int N) {
    double ris = 0;	
    for(int i = 0; i < N; ++i)
        ris += pow(n, i) / fattoriale(i);
    return ris;

}
void approssErr(double n){
    double N[DIM]={3, 10, 50, 100, 150};
    double espon = esponenziale(n);
    double tayl;
    for(int i = 0; i < DIM; ++i){			
        if(n < 0){
            tayl = 1;
            tayl /= taylor(-n, N[i]);		
            cout << "n negativo -> reciproco di Taylor: " << tayl << endl << "Approssimazione con funzione esponenziale(): " << espon << endl;
        }else{ 
            tayl = taylor(n, N[i]);
            cout << "Per N = " << N[i] << endl;
            cout << "Approssimazione con Taylor: " << tayl << endl << "Approssimazione con funzione esponenziale(): "<< espon <<endl;	
        }
        double errAss = erroreAssoluto(espon, tayl);
        double errRel = erroreRelativo(espon, tayl);
        cout << "L'errore assoluto e': " << errAss << endl << "L'errore relativo e': " << errRel << endl << endl << endl;
    }
}


int main() {
    double punti [PUNTI] = {0.5, 30.0, -0.5, -30.0};
    for(int i = 0; i < PUNTI; i++){
        cout << "L'APPROSSIMAZIONE PER IL PUNTO p = " << punti[i] << " E' LA SEGUENTE: " << endl << endl;
        approssErr(punti[i]);
        cout << endl;
    }
}

