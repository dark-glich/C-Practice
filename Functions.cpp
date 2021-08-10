# include <iostream>
using namespace std;

/* Function overloading : Creating a same function with different argument type
so that it can used using different arguments */
void SquareNum(int x){ // with int argument
    cout << x*x << endl;
}
void SquareNum(float x){ // with float argument
    cout << x*x << endl;    
};

int main(){
    int a = 10;
    float b = 3.1428;
    SquareNum(a); // Using SquareNum function using int 
    SquareNum(b); // Using SquareNum function using float
}