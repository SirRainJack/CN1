#include <iostream>
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