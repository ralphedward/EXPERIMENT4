#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
int q, arr[50], a, b, c;

cout << "Enter the size of your array: "; cin >> q;
cout << "Enter the " << q << " elements:\n"; 

	for (a = 0; a < q; a++)
		{
			cin >> arr[a];
		}
	
cout << "\nYour data: ";

	for (a = 0; a < q; a++)
	{
		cout << arr[a] << " ";
	}

	for (a = 0; a < q; a++)
	{
		for (b = a + 1; b < q; b++)
		{
			if (arr[a]>arr[b])
			{
				c = arr[a];
				arr[a] = arr[b];
				arr[b] = c;
			}
		}
	}
	
cout << "\n\nAfter using selection sort...\n\n" << "Sorted data: ";

	for (a = 0; a < q; a++)
	{
		cout << arr[a] << " ";
	}


_getch();
return 0;
}
