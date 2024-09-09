#include<iostream>
using namespace std;
int main(){
    float num1, num2;
    char operation;
    cout << "Enter operation(+ - * /)";
    cin >> operation;
    cout <<"Enter #1: ";
    cin >> num1;
    cout <<"Enter #2: ";
    cin >> num2;

    switch(operation){
        case '+':
            cout << "result: " << num1 + num2;
            break;
        case '-':
            cout << "result: " << num1 - num2;
            break;
        case '*':
            cout << "result: " << num1 * num2;
            break;
        case '/':
            if (num2 != 0){
                cout << "result: " << num1 / num2;
            }
            else{
                cout << "Cannot divide by 0.";
            }
            break;
        default:
            cout << "Invalid operation";
    }
    return 0;
}