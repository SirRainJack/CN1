#include <iostream>
#include <math.h>
using namespace std;
int main() {
    long double dd = 0, cd = 2.0;
    float df = 0, cf = 2, tmpf;
    double tmpd;
    do {
        ++df;		
        tmpf = pow(cf, -df);
    }while((tmpf + 1) > 1);
    cout << "Il piu' grande d intero positivo in singola precisione e': "<< df << endl;
    do {
        ++dd;		
        tmpd = pow(cd, -dd);
    }while((tmpd + 1) > 1);
    cout << "Il piu' grande d intero positivo in doppia precisione e': " << dd << endl;
    return 0;
}


