#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string.h>

using namespace std;


class Student {
    string name;
    string surname;
    string id;

    student(string n, string s, int id){
        this.name = n;
        this.surname = s;
        this.id = id;
    }

    string getName(){
        return this.name;
    }

    string getSurname(){
        return this.surname;
    }

    string getId(){
        return this.id;
    }

}