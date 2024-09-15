#include<iostream>
#include<ctime>
using namespace std;
int main(){
    int guess;
    int tries = 0;
    srand(time(0));
    int num = rand() %100 + 1;
    do{
        cout << "Enter your guess(1 - 100):";
        cin >> guess;
        tries++;
        if (guess == num){
            cout << "You got it right. " << guess << " is the right answer.\n";
        }
        else if(guess > num){
            cout << "Too high.\n";
        }
        else{
            cout << "Too low.\n";
        }
    }while(guess!=num);
    cout << "You took " << tries << " guesses to complete the game.";
    return 0;
}