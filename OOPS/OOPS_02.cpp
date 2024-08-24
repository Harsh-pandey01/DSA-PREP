// This will contain the Main Topics of the OOPS

// Constructor (Default , Parameterised , copy)
// Desctructor
// Static Data Member

#include<bits/stdc++.h>
using namespace std ;

class Employee{

int empId ;
string name ;
int salary ;

public:
// Static Data Member 
static int numberOfEmployee ;

// Constructor :-It is special type of function called each and eveytime automatically an object is created
// Minly used to initialise the varibales of the class


// Default constuctor
Employee(){
    cout << "Constructor called" <<endl ;
    this->name = "Harsh";
}

// Parameterised Constructor
Employee(string name , int id , int salary){
    this->empId = id ;
    this->name = name ;
    this->salary = salary ;
}

// Copy constructor

// using the reference of the obj
Employee (Employee *ptr){
 this->empId = ptr->empId ;
    this->name = ptr->name ;
    this->salary = ptr->salary ;
}



void Details(){
    cout << this->empId <<endl ;
    cout << this->name <<endl ;
    cout << this->salary <<endl ;
    cout << Employee::numberOfEmployee <<endl ;
}


// static member function :- Mainly used to access the privately defined static member function

static void total(){
    cout << numberOfEmployee <<endl ;
}






// destructur :-A special type of member function which is invoked immidiately when a object is going to distroy
// The order of invokation of the destucture is lifo


~Employee(){
    cout << "Desturcture called" << this->name <<endl ;
}

};

// Initialising the static Member function
// Initialising the Static Data member

int Employee::numberOfEmployee = 1000;


int main(){

// When we do this way then default constructor is called
Employee Harsh ;

Employee Nina("Nina",10012,12000);
Nina.Details();


Employee Tannu(&Nina) ;

Tannu.Details();

// Calling the static Member Function of the class 
Employee::total();

    return 0 ;
}