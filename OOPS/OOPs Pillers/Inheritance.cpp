// In this we are going to learn about inheritance and types of inheritance

/*
Inheritance in Java is a mechanism in which one object acquires all the properties and behaviors of a parent object.*/

#include<bits/stdc++.h>
using namespace std ;

// This is a single inheritance
// class Parent {
// public:
// Parent(){}
// protected :
// string name ;
// int age;

// };
// class child : protected Parent {
// // define some of the properties of the child
// public :
// bool snoor ;

// child(string name , int age , bool snoor){
//     this->name = name ;
//     this->age = age ;
//     this->snoor = snoor ;
// }
// void childDetails(){
// cout << "child name is " << this->name <<" and his age is "<< this->age ;
// }

// };


// ---------------------- MultiLevel Inheritance ----

class Human{
protected :

string name ;
int age ;

};


class Employee : public Human {

protected :
string department ;
int id ;
int salary;

public :

Employee(){}

Employee(string name , string department , int id ){
    this->name = name ;
    this->department = department ;
    this->id = id ;
}

void Intro(){
    cout << "My name is " << this->name << " and my id number is "<<this->id<< " and i work in "<<this->department <<endl ;
}

} ;

class Manager: public Employee{
protected:
string team ;
int members ;

public:
Manager(string name , int id , int members , string department){
    this->name = name ;
    this->department = department ;
    this->id = id ;
    this->members = members ;
}

void Intro(){
    cout << "My name is " <<this->name<<",my id number is "<<this->id << " and i am the manager of the "<<this->department <<" with members of "<<this->members <<endl ;

}

};



int main(){

Manager harsh("Harsh",101,10,"Electronics") ;

harsh.Intro() ;

Employee Nina("Nina","Commerse",102);
Nina.Intro();

    return 0 ;
}



// Similarily we can have mulitple , hybrid as well as hirarcial Inheritance 

















