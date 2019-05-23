#include <iostream>
#include <conio.h>

using namespace std;

int addition (int a, int b)
{
int r;
r = a + b;
return r;
}

int subtraction (int a, int b)
{
int r;
r = a - b;
return r;
}

int multiplication (int a, int b)
{
int r;
r = a * b;
return r;
}

int division (int a, int b)
{
int r;
r = a / b;
return r;
}

int modulo (int a, int b)
{
int r;
r = a % b;
return r;
}

int main()
{
	int q, asd, fgh, w, c;
	char ans = 'y';
	
	while (ans == 'y')
	{
	cout << "\nMENU: \n" << endl;
	cout << "1. ADDITION" << endl;
	cout << "2. SUBTRACT" << endl;
	cout << "3. MULTIPLY" << endl;
	cout << "4. DIVIDE" << endl;
	cout << "5. MODULO\n" << endl;
	
	cout << "Enter your choice: ";
	cin >> q;
	cout << "Enter your two numbers: ";
	cin >> asd >> fgh;
		
	switch(q)
		{
			case 1:
				w = addition (asd, fgh);
				cout << "Result: " << w;
				break;
			case 2:
				w = subtraction (asd, fgh);
				cout << "Result: " << w;
				break;
			case 3:
				w = multiplication (asd, fgh);
				cout << "Result: " << w;
				break;
			case 4:
				w = division (asd, fgh);
				cout << "Result: " << w;
				break;
			case 5:
				w = modulo (asd, fgh);
				cout << "Result: " << w;
				break;
			default:
				cout << "Invalid number!";
				break;
		}
	
	cout << "\nContinue? (y/n)";
	cin >> ans;
	cout << "\n";
	
	switch (ans)
	{
		case 'y':
		case 'Y':
			{
				continue;
			}
		default:
			{
				break;
			}
	}
	
	} 
	
	_getch();
	return 0;
}
