#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int operation, x, y, result;
	char yn;
	
	
	cout << "MENU:" << endl;
	cout << "1. ADD" << endl;
	cout << "2. SUBTRACT" <<endl;
	cout << "3. MULTIPLY" << endl;
	cout << "4. DIVIDE" << endl;
	cout << "5. MODULUS" << endl;
	cout << " " << endl;
	
	do {
	
	cout << "ENTER YOUR CHOICE: " << endl;
	cin >> operation;
	
	cout << "ENTER YOUR TWO NUMBERS: " << endl;
	cin >> x >> y;
	
	
	//result
	
	if (operation == 1)
	 result = x + y;
	
	else if (operation == 2)
	result = x - y;
	
	else if (operation == 3)
	result = x * y;
	
	else if (operation == 4)
	result = x / y;
	
	else if (operation == 5)
	result = x%y;
	
//	else 
//	result =
	
	cout << "result is: " <<result<< endl;
	
	cout << "CONTINUE? (y or n)" << endl;
	cin >> yn;
	
} while (yn == 'y');
	
	
	
	
}
