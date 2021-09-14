#include <iostream>
#include <stdexcept> // To use runtime_error
using namespace std;
  
float Division(float num, float den){   
    // Throw : A program throws an exception when a problem shows up. 
    if (den == 0) {
        throw "Math error: Attempted to divide by Zero\n";
    }
    return (num / den);
};
  
int main()
{
    float numerator, denominator, result;
    numerator = 12.5;
    denominator = 0;

    // Try : identifies a block of code for which particular exceptions will be activated
    try {
        result = Division(numerator, denominator);
  
        // this will not print in this example
        cout << "The quotient is "<< result << endl;
    }
  
    // Catch : A program catches an exception with an exception handler at the place in a program where you want to handle the problem.

    catch (...) { // It catches any execption
        cout << "Exception occurred" << endl;
    }
    return 0;
}