#include <iostream>
using namespace std;

// Global variable
int number = 100;

void Func(int var = 1){
    // Local Variable
    int number = var;
    cout << number << endl; // Access local number(20)
    cout << ::number << endl; // Access global number(100)
}; 

int main()
{
    // Local Variable
    int number = 50;
    cout << number << endl; // It will access the local number
    // To access the global number we use 
    // unary scope resolution operator
    cout << ::number << endl; 
    Func(20);
}
