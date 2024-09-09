#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float num1, num2, result;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    result = sqrt(pow(num1, 2) + pow(num2, 2));
    cout << result;
    return 0;
}