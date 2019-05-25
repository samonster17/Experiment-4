#include <iostream>
#include <conio.h>

using namespace std;
	
int main()
{
	int i, j, n, temp, arr[30], size;
	char ab;
	
	cout << "Pick a Sort Type";
	cout <<endl<<endl;
	
	cout << "Choices:" << endl;
	cout << "(A) selection sort"<< endl;
	cout << "(B) bubble sort"<< endl;
	
	cout << "Enter selection (a or b): ";
	cin >> ab;
	
	
		
	if (ab == 'b')
	{
		
			cout << "Enter the no. of elements to be sorted: " << flush;
	cin >> n;


	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
		cout << arr[i] << ", ";

	}

	cout << endl << endl;


	for (i = 0; i < n; i++)
	{
		for (j= 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	
		cout <<" The array elements after sorting using bubble sort is: ";
	for ( i=0; i < n; i++)
	{
		cout << arr[i] << ", ";
	}
}

else if (ab == 'a')
{

		cout << "Enter array size:";
	cin >> size;

	cout << "enter array elements : " << endl;

	for (i = 0; i < size; i++)
	{ cin >> arr[i];}

	cout << "Sorting array using selection sort...\n";

	for (i = 0; i < size; i++)
	{ for ( j = i + 1; j < size; j++)
	{ if (arr[i] > arr[j])
	{temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
	}
	}
	}
	
		cout << " Now the array after sorting using selection sort is :\n";
	for (i = 0; i < size; i++)
	{ cout << arr[i] << " "; }
}




	_getch();
	return 0;
}
