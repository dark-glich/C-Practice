#include <iostream>

int main(){
    /* Pointers : it refers to a variable that holds the address of another variable */
    std::string str = "abcd";
    std::string *pointer = &str; // pointers are intialized with * in the starting
    std::cout << pointer << std::endl; // returns a memory address

    // returns the data stored in that memory address
    std::cout << *pointer << std::endl;
    // returns the memory address of the pointer
    std::cout << &pointer << std::endl;
    return 0;
}