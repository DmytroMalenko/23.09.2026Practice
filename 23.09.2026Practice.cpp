#include <iostream>

using namespace std;

int main()
{
	/* Task 1 

	int a, total; 
	total = 0;

	cout << "Enter the number up to which to print: \n";
	cin >> a; 

	for (int i = a; i <= 500; ++i) {
		total = total + i;
	}

	cout << total << " number.\n";

	*/

	/* Task 2

	int x, y, result;
	result = 1; 
	cout << "Enter two numbers: \n";
	cin >> x >> y;

	for (int i = 0; i < y; i++) {
		result = result * x;

	}

	cout << result << " number.\n";

	 */

	/* Task 3 	

	float total;
	total = 0;

	for (int i = 1; i <= 1000; ++i) {
		total = total + i;
	}

	total = total / 1000.0;

	cout << total << " number.\n"; 

	*/


	/* Task 4 


	int a; 
	long long result; 
	result = 1;

	cout << "Enter number a: \n";
	cin >> a;

	for (int i = a; i <= 20; i++) {
		result = result * i;
	}
	cout << result; 

	*/

	/* Task 5

	int k; 

	cout << "Enter number, which display the multiplication table: \n";
	cin >> k;

	for (int i = 1; i <= 10; ++i) {
		cout << k << " * " << i << " = " << k * i << "\n";
	}
	*/

	/* Task 6 

	int A, B;

	cout << "Enter number A: \n";
	cin >> A;

	for (int B = 1; B <= A; B++) {
		if (A % (B * B) == 0 && A % (B * B * B) != 0) {
			cout << B << "\n";
		}
	}

	*/

	/* Task 7 

	int num;

	cout << "Enter number: \n";
	cin >> num;

	for (int i = 1; i <= num; i++) {
		if (num % i == 0) {
			cout << i << "\n";
		}
	}

	*/

	/* Task 8 

	int num1, num2;

	cout << "Enter two numbers: \n";
	cin >> num1 >> num2; 

	for (int i = 1; i <= num1; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			cout << i << "\n";
		}
	}

	*/


	/* Task 9 */

	int figure, length, height;
	char symbol; 

	cout << "Enter symbol(*): \n";
	cin >> symbol;

	cout << "Choose number (1-3) of figure: \n";
	cout << "1. Square. \n";
	cout << "2. Rectangle. \n";
	cout << "3. Triangle. \n";
	cin >> figure;

	cout << "Enter The length of the sides and the height: \n";
	cin >> length >> height;


	switch (figure) {
		case 1: 
			for (int i = 0; i < length; i++) {
				for (int j = 0; j < length; j++) {
					cout << symbol;
				}
				cout << "\n";
			}
			break;


		case 2: 
			for (int i = 0; i < height; i++) {
				for (int j = 0; j < length; j++) {
					cout << symbol;
				}
				cout << "\n";
			}
			break;


		case 3: 
			for (int i = 1; i <= height; i++)
			{
				for (int j = 1; j <= i; j++)
				{
					cout << symbol;
				}
				cout << "\n";
			}

			break;
	}
}
