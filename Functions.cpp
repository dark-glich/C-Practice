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

// Using default argument as 1
void Cube(int l=1, int b=1, int h=1){ 
    cout << "Cube : "<< l*b*h << endl;
}

int main(){
    int a = 10;
    float b = 3.1428;
    SquareNum(a); // Using SquareNum function using int 
    SquareNum(b); // Using SquareNum function using float
    Cube(2,5,6);
    Cube(); // will take l,b,h as 1
}