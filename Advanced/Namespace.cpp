#include <iostream>

// Namespace 1 with location function 
namespace FirstSpace{
    void location(){
        std::cout << "Inside First Namespace \n";
    }
    namespace NestedSpace{
        void location(){
            std::cout << "Inside Nested Namespae \n"; 
        }
    }
}
// Namespace 2 with same location function name
namespace SecondSpace{
    void location(){
        std::cout << "Inside Second Namespace \n";
    }
}

int main(){
    // Namespace : It is used as additional information to differentiate similar functions, classes, variables etc. with the same name available in different libraries.

    FirstSpace::location(); // Accessing location function from first namespace
    SecondSpace::location(); // Accessing location function from second namespace
    FirstSpace::NestedSpace::location(); // Accessing location function from nested namespace

    return 0;
}