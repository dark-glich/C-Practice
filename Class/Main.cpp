#include <iostream>

class Book{
    public:
        std::string title;
        std::string author;
        double price;
        int pages;

    // Constructor : it is a function that get executed when object is created
    Book(std::string Atitile, std::string Aauthor, double Aprice, int Apages){
        title = Atitile;
        author = Aauthor;
        price = Aprice;
        pages = Apages;
    };

    // Destructor : it is a function that get executed when work of object is complete
    ~Book(){
        std::cout << "Object is Deleted" << std::endl;
    }
};

// Inheritence : A derived class can access all the non-private members of its base class
class MathsBook: public Book{
    public:
        int standard;
        char edition;

    // Derived class Constructor
    MathsBook(std::string Atitile, std::string Aauthor, double Aprice, int Apages, int Astandard, char Aedition):Book(Atitile, Aauthor, Aprice, Apages){
        standard = Astandard;
        edition = Aedition;
    };
    
    // Function Overloading : Creating same fuction multiple times with different arguments
    void print(std::string x){
        std::cout << x << std::endl;
    }
    void print(int x){
        std::cout << x << std::endl;
    }
};

int main(){
    Book book1("Harry Potter", "JK Rowling", 199.89, 350);
    MathsBook book2("Basic Maths", "RD Sharama", 350.00, 630, 10, 5);
    return 0;
}
