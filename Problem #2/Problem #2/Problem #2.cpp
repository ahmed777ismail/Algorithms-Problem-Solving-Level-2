#include <iostream>
#include<string>
using namespace std;

enum enPrimNotPrime { Prime = 1, NotPrime = 2 };
int ReadPositiveNumber(string Message)
{
	int Number = 0; do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0); return Number;
}




enPrimNotPrime CheckPrime(int Number) {
	int M = round(Number / 2);
	for (int Counter = 2; Counter <= M; Counter++)
	{
		if (Number % Counter == 0) return enPrimNotPrime::NotPrime;
	}
	return enPrimNotPrime::Prime;
}

void PrintPrimeNumbersFrom1ToN(int Number)
{
	cout << "\n";      cout << "Prime Numbers from " << 1 << " To " << Number;
	cout << " are : " << endl; for (int i = 1; i <= Number; i++) {
		if (CheckPrime(i) == enPrimNotPrime::Prime) { cout << i << endl; }
	}
}

int main()
{
	PrintPrimeNumbersFrom1ToN(ReadPositiveNumber("Please enter a positive number ? "));
	return 0;
}

// advamced way using chatgpt

//#include <iostream>
//#include <cmath>
//using namespace std;
//
//// Function to read a positive number from the user
//int ReadPositiveNumber(const string& message) {
//    int number = 0;
//    do {
//        cout << message << endl;
//        cin >> number;
//    } while (number <= 0);
//    return number;
//}
//
//// Function to check if a number is prime
//bool IsPrime(int number) {
//    if (number <= 1) {
//        return false;
//    }
//    if (number <= 3) {
//        return true;
//    }
//    if (number % 2 == 0 || number % 3 == 0) {
//        return false;
//    }
//    for (int i = 5; i * i <= number; i += 6) {
//        if (number % i == 0 || number % (i + 2) == 0) {
//            return false;
//        }
//    }
//    return true;
//}
//
//// Function to print all prime numbers from 1 to the given number
//void PrintPrimeNumbersFrom1ToN(int number) {
//    cout << "\nPrime Numbers from 1 to " << number << " are:\n";
//    for (int i = 1; i <= number; ++i) {
//        if (IsPrime(i)) {
//            cout << i << endl;
//        }
//    }
//}
//
//int main() {
//    int number = ReadPositiveNumber("Please enter a positive number:");
//    PrintPrimeNumbersFrom1ToN(number);
//    return 0;
//}
