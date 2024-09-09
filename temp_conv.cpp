#include<iostream>
using namespace std;
int main(){
    double celsius, farenheit;
    char operation;
    cout << "Convert to (c/f): ";
    cin >> operation;
    if (operation == 'c' || operation == 'C'){
        cout << "Enter the temperature in farenheit: ";
        cin >> farenheit;
        celsius = ((farenheit - 32)/ (1.8));
        cout << farenheit << " farenheit in celsius is " << celsius;
    }
    else if (operation == 'f' || operation == 'F'){
        cout << "Enter the temperature in celsius: ";
        cin >> celsius;
        farenheit = (celsius * (1.8) + 32.0);
        cout << celsius << " celsius in farenheit is " << farenheit;
    }
    else{
        cout << "Invalid Operation.";
    }
    return 0;
}