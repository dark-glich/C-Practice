#include <iostream>

int main(){
    // Heap Allocation : This memory is allocated during the execution of instructions written by programmers.

    // new Operator : new operator is used to allocate memory dynamically for any data-type.
    double *value = NULL; 
    value = new double; // allocating memory for a double 
    *value = 3.1428;
    std::cout << "Memory : " << value << ", Value : " << *value << '\n';
    // delete operator : deletes the allocated memory
    delete value; 
    // Stack memory : the stack memory is where local variables get stored/constructed.

    return 0;
} 