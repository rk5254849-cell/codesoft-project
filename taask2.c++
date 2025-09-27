#include <iostream>

#include <ctime>
using namespace std;

int main() {
  int   srand(time(0));
    int randomnumber = rand() % 100 + 1;
    int guess;

    cout << "guess the number between one and too degit :"<< endl;
         
               while (guess !=randomnumber) {
         cin >> guess;

        if (guess > randomnumber) {
            cout << "Too high: ";
        } 
        else if (guess < randomnumber) {
            cout << "Too low: ";
        } 
        else {
            cout << " Congratulations! You guessed  right.\n";
            break;   
        }
    }

    return 0;
}
