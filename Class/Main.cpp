#include <iostream>

class Book{
    public:
        std::string title;
        std::string author;
        double price;
        int pages;

    protected:
        int part;

    // Constructor : it is a function that get executed when object is created
    Book(std::string Atitile, std::string Aauthor, double Aprice, int Apages){
        title = Atitile;
        author = Aauthor;
        price = Aprice;
        pages = Apages;
    };

    // Destructor : it is a function that get executed when work of object is complete
    ~Book(){
        std::cout << "Object Deleted";
    }
};

// Inheritence : A derived class can access all the non-private members of its base class
class MathsBook: public Book{
    public:
        int standard;
        char edition;
};

int main(){
    Book book1("Harry Potter", "JK Rowling", 199.89, 350);
    return 0;
}
