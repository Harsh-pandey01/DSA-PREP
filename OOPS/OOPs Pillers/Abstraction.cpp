// Abstraction is process of hidding the Implement and providing only required data

/*
1.Abstract class :- Those class whose instances cannot be created
*/


#include<bits/stdc++.h>
using namespace std ;

class DemoClass {

// To create a abstrct class we need atleat one virtual functio i.e pure onlu

// Pure virtual function

public:
// Mainly useally used to provide the security and create security functions only ;
virtual void doAnything() =0 ;

void RandomFunction(){
    cout << "This is a Random Function" <<endl ;
}

};


class ChildClass : public DemoClass{
public:
void doAnything(){
    cout << "Do Anything"<<endl ;
}

};


int main(){

ChildClass English ;
English.RandomFunction();
English.doAnything();
    return 0 ;
}