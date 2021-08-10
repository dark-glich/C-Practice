#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    // Changes a rand algorithm using current time
    srand(time(0));
    for (int i = 0; i < 5; i++){
        // Getting a random number between 1 and 6
        cout << 1+(rand()%6) << endl; // this will give a same set of random numbers
    }
    return 0;
}
