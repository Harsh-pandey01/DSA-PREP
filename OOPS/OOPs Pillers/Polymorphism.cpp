// Same name but different form

/*
1.Compile time polymorphism
  a.Function Overloading
  b.Operator Overloading
2.Runtime PolyMorphism
  a.Function Overring
  b.Virtual Function
*/

#include<bits/stdc++.h>
using namespace std ;

class Demo{

public :
// Function overloading
Demo(){
    cout << "This is a demo class"<< endl ;
}
Demo(string name){
    cout << "this is a demo car and its name is " << name << endl ;
}
Demo(string name , int price){
    cout << "This is a demo car and its name and price is "<< name <<" "<<price ;
}
// opeartor overloading 
void operator + (Demo B){
    cout << "Joke SUNOGE" <<endl ;
}
};

// ----------------------------- Runtime Polymorphism Example

class Animal{

public:

// Virtual function is used to create late Binding

 virtual void speak(){
    cout << "Speak" <<endl ;
}
};

class Dog : public Animal{
    public :
    
    void speak(){
        cout << "Bark" <<endl ;
    }
};



int main(){

// Default Cars
Demo Suziki ;
// Farari car
Demo Farari("Fariri");
// BMW
Demo BMW("BMW", 10000);
BMW+Farari ;

Animal *ptr , horse ;

Dog taffi ;

ptr = & taffi ;

taffi.speak();

ptr->speak();



    return 0 ;
}