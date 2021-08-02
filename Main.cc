#include <iostream>
// For Advanced Math calculations
#include <cmath>

using namespace std;

// Function Declaration
void SayHello(string name, int age)
{
    cout << "Hello, " << name << " you are " << age << " years old." << endl;
};

// Function Signature
void GetAge(int age);

// float function
float Cube(float num)
{
    return num * num * num;
};

int main()
{
    // Declared and Assinged String Variable
    string characterName = "John";
    // Declared int variable
    int characterAge;
    // Assinged int variable
    characterAge = 40;

    cout << "There was a man named " << characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;

    /* Data Types */
    string Name = "Bilal"; // String Variable
    int Age = 15;          // Int Varible
    double Marks = 94.6;   //decimal Variable
    char Grade = 'A';      //character Variable
    bool isMale = true;    //boolean Variable

    /* Sub Strings */
    string sentence = "Apple is red";
    string sub = sentence.substr(9, 3); // string.substr(index, length)
    cout << sub << endl;

    /* Math Funnctions*/
    int num = 10;
    cout << pow(num, 2) << endl;   // Does 10 raise to the power 2
    cout << fmax(10, 12) << endl;  // Gives the Max number
    cout << ceil(10.4193) << endl; // Round up
    cout << floor(2.983) << endl;  // Round Down

    /* User Input */
    int age;
    string name;
    cin >> age; // cin is used to get user input in Char or int
    cout << "You are " << age << " years old" << endl;
    getline(cin, name); // getline is used to get user input in string of text
    cout << "Your name is" << name << endl;

    /* Arrays */
    int array[20] = {1, 3, 5, 7, 9}; // ArrayName[size] = {elements}
    array[6] = 13;
    cout << array[6] << endl;

    /* Functions */
    SayHello("John", 20);
    GetAge(12);         // Function Call
    cout << Cube(4.00) << endl; // Calling a float function

    /* If Else Statements */
    bool isFemale = true;
    bool isTall = false;

    if(isFemale && isTall){
        cout << "You are a tall female" << endl;
    }else if(!isTall){ // ! stands for not keyword
        cout << "You are short" << endl; 
    }else if(isTall || !isFemale){ 
        cout << "You are either tall or nor not female" << endl;
    }else{
        cout << "NA";
    }

    return 0;
}

void GetAge(int age)
{
    cout << "Age : " << age << endl;
}