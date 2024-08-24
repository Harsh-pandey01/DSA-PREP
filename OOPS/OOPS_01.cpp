// This file contains the basics of the oops

#include<bits/stdc++.h>
using namespace std ;

// What is a class :- User defined datatype or say a blueprint containing all the properties and behaviour of the object
// What is an object :- It can be described by the instance of the class , containing all the props and behaviour of the class

class Student{


// Access Modifier :- Defines the scope where the props of the class can be used
public :
// Properties or say attribute
int id ;
string name ;
int classNumber ;

// Behavoiur

void study(){
    cout << "I study here "<<endl ;
}


};



int main(){

// Creating an object

// It is known as the static object declaration
Student harsh ;
harsh.name = "Harsh" ;
harsh.id = 15 ;
harsh.study() ;


// Dynamic Memory Allocation
// Here the object is created in a heap memory and a pointer pointing to the address of the Object is nina

Student *Nina = new Student ;
Nina->name = "nina";
Nina->study();
    return 0 ;
}