#include <iostream>
#include <cmath>

using namespace std;

//Write a program that enters a number and prints out whether it's even or odd. Use a switch statement for this.

int main() {

    cout << "Conditionals loops \n" << endl;
    cout << "\n" << endl;

    int number = 0;

    cout << "Enter any number to check even or odd: ";
    cin >> number;

    int result = number % 2;

    switch (result)
    {
        //If n%2 == 0
    case 0:
        cout << "Number is Even";
        break;

        //Else if n%2 != 0
    case 1:
        cout << "Number is Odd";
        break;
    }
    return 0;
}