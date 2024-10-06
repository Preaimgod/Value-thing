#include <iostream>

using namespace std;


int main() {
	double num1, num2, num3, num4, num5;
	double average;

	cout << "Enter five floating-point values and I will average them out for you!\n";
	cout << "Enter your first value\n";
	cin >> num1;
	cout << "Enter your second value\n";
	cin >> num2;
	cout << "Enter your third value\n";
	cin >> num3;
	cout << "Enter your fourth value\n";
	cin >> num4;
	cout << "Enter your fifth and last value\n";
	cin >> num5;
	cout << "The values you entered are:\n";
	cout << "1: " << num1 << "\n";
	cout << "2: " << num2 << "\n";
	cout << "3: " << num3 << "\n";
	cout << "4: " << num4 << "\n";
	cout << "5: " << num5 << "\n";
	cout << "The average of these 5 values are " << (num1 + num2 + num3 + num4 + num5) / 5.0;
	cin.get();// Wait for user input before exiting
	system("pause"); // Pause the console window

	
}
