#include <iostream>

class Book{
    public: 
        // Static Member : A static member is shared by all objects of the class;
        static int BookCount;
        std::string title;
        std::string author;
        // Friend function : function specified outside a class but has the ability to access the class members 
        friend void TotalEdition(Book book);
        double price;
        int pages;

        // Polymorphism : the same entity (function or object) behaves differently in different scenarios
        virtual void GetInfo() {
        std::cout << this->title << " - " << this->author << "\n";
        }

    // Constructor : it is a function that get executed when object is created
    Book(std::string Atitile, std::string Aauthor, double Aprice, int Apages){
        title = Atitile;
        author = Aauthor;
        price = Aprice;
        pages = Apages;
        BookCount ++;
    };

    // Destructor : it is a function that get executed when work of object is complete
    ~Book(){
        std::cout << "Object is Deleted" << std::endl;
    }
    
};

// Initialize static member of Book class 
int Book::BookCount = 0;

void PerPagePrice(Book book) {
   std::cout << "Price of each Page : " << book.price / book.pages << std::endl;
}
// Inheritence : A derived class can access all the non-private members of its base class
class MathsBook: public Book{
    public:
        int standard;
        char edition;

        // when GerInfo will be called the parent function would run
        void GetInfo() {
        std::cout << this->title << " - " << this->author << " - " << this->pages << std::endl;
        }

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
    PerPagePrice(book1);
    MathsBook book2("Basic Maths", "RD Sharama", 350.00, 630, 10, 5);
    std::cout << "Total Book: " << Book::BookCount << std::endl;
    book1.GetInfo();
    return 0;
}
