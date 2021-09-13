#include "header.h"
#include <iostream>
// Factorial Function
int Factorial(int n){
    return (n==0) || (n==1) ? 1 : n* Factorial(n-1);
}