#include <iostream>
using namespace std;

// Function to read a positive number from the user
int ReadPositiveNumber(string Message) {
    int Number = 0;
    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);
    return Number;
}

// Function to check if a number is perfect
bool isPerfectNumber(int Number) {
    int Sum = 0;
    for (int i = 1; i < Number; i++) {
        if (Number % i == 0)
            Sum += i;
    }
    return Number == Sum;
}

// Function to print all perfect numbers from 1 to N
void PrintPerfectNumbersUpTo(int N) {
    for (int i = 1; i <= N; i++) {
        if (isPerfectNumber(i)) {
            cout << i << endl;
        }
    }
}

int main() {
    int N = ReadPositiveNumber("Please enter a positive number:");
    PrintPerfectNumbersUpTo(N);
    return 0;
}
