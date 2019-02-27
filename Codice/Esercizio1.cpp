#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

void sv(int d0, int d1, int i, double& ris1, double& ris2) {
    double a = (d0 + 1) * pow(10, i), b = (d1 + 1) * pow(10, 20), c = -b;
    ris1 = (a + b) + c;
    ris2 = a + (b + c);
}

int main() {
    int d0 = 6, d1 = 7;
    double ris1 = 0.0, ris2 = 0.0;
    for(int i = 0; i < 20; ++i) {
        sv(d0, d1, i, ris1, ris2);
        cout << "Prima expr (a+b)+c con i = " << i << " e' uguale a " << ris1 << endl;
        cout << "Seconda expr a+(b+c) con i = " << i << " e' uguale a " << ris2 << endl << endl;
    }	
    return 0;	
}

	

	
	
	
