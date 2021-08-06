#include <iostream>
// For Advanced Math calculations
#include <cmath>
// For advanced Array functions
#include <array>

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

    /* While Loops */
    int i = 6;

    while(i <= 5){
        cout << i << endl;
        i++;
    }
    // Do while Loops : It first excutes the loop then checks the condition 
    do{
        cout << i << endl;
        i++;
    }while(i <= 5);
    
    /* For Loops */
    for(int z = 0; z < 5; z++){ 
        cout << z << endl;
    }
    /* Looping over a array */
    int list[] = {1,3,5,7,9};
    for(int a = 0; a < (sizeof(list)/sizeof(*list)); a++){
        cout << list[a] << endl;
    }

    /* 2 dimentional Arrays */
    int array2d[2][2] = {{1,2},{3,4}};
    cout << array2d[0][1] << endl;

    // Nested For loops
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            cout << array2d[i][j];
        }
        cout << endl;
    }

    /* Pointers : it refers to a variable that holds the address of another variable */
    string str = "abcd";
    string *pointer = &str; // pointers are intialized with * in the starting
    cout << pointer << endl; // returns a memory address

    // returns the data stored in that memory address
    cout << *pointer << endl;
    // returns the memory address of the pointer
    cout << &pointer << endl;

}

void GetAge(int age)
{
    cout << "Age : " << age << endl;
}