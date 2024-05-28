#include <iostream>
using namespace std;


int ReadPositiveNumber(string Message)
{
	int Number = 0; do {
		cout << Message << endl;
		cin >> Number;
	} while (Number <= 0); return Number;
}
bool isPerfectNumber(int Number) {
	int Sum = 0; for (int i = 1; i < Number; i++)
	{
		if (Number % i == 0)
			Sum += i;
	} return Number == Sum;
}

void PrintResults(int Number) {
	if (isPerfectNumber(Number))
		cout << Number << " Is Perfect Number.\n"; else
		cout << Number << " Is NOT Perfect Number.\n";
}
int main()
{
	PrintResults(ReadPositiveNumber("Please enter a positive number?")); return 0;
}


//using chatgpt
//#include <iostream>
//using namespace std;
//
//// Function to read a positive number from the user
//int ReadPositiveNumber(string Message) {
//    int Number = 0;
//    do {
//        cout << Message << endl;
//        cin >> Number;
//    } while (Number <= 0);
//    return Number;
//}
//
//// Function to check if a number is perfect
//bool isPerfectNumber(int Number) {
//    int Sum = 0;
//    for (int i = 1; i < Number; i++) {
//        if (Number % i == 0)
//            Sum += i;
//    }
//    return Number == Sum;
//}
//
//// Function to print the result
//void PrintResults(int Number) {
//    if (isPerfectNumber(Number))
//        cout << Number << " Is Perfect Number.\n";
//    else
//        cout << Number << " Is NOT Perfect Number.\n";
//}
//
//// Main function
//int main() {
//    PrintResults(ReadPositiveNumber("Please enter a positive number?"));
//    return 0;
//}
