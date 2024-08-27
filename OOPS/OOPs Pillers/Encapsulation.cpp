// Encapsulation :- This is one of the piller of OOPS , 
// It is described as the wrapping up the data and information in the single unitand controll the access to them
// Binding the data and functions together to secure the data

// So we create a bundle of data with the functions to access the data
// Helps in data Binding (Binding the data with the functions)
// Using access modifiers we achieve the encapsulation

// example :-


#include<bits/stdc++.h>
using namespace std ;

class Bank{

private:
int balance ;

public:
void getbalance(){
    cout << this->balance <<endl ;
}

void Deposite(int amnt){
    this->balance += amnt ;
}


};

int main(){

// Data is exposed so anyone can access and change the data
// Bank.balance = 142500 ; 
Bank Harsh ;
Harsh.Deposite(15000);

Harsh.getbalance();
    return 0 ;
}