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

// When we pass array as an argument we use '[]'
void PrintArray(int Array[], int ArraySize){
    for(int x = 0; x < ArraySize; x++){
        cout << Array[x] << ", ";
    }
    cout << endl;
};

// Creating a recursive Function
int Factorial(int x){
    if(x == 1){
        return 1;
    }else{
        return x * Factorial(x-1); // Calling the function inside of that function
    };
} 

int main(){
    int a = 10;
    float b = 3.1428;
    SquareNum(a); // Using SquareNum function using int 
    SquareNum(b); // Using SquareNum function using float
    Cube(2,5,6);
    Cube(); // will take l,b,h as 1
    int array[3] =  {10,20,30};
    PrintArray(array, 3);
    cout << Factorial(4) << endl;
}