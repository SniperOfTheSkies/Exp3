#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()

{

	// Variable Declaration

	char let[50];

	int i, a = 0, cap;


	cout << "                   Press any key to start the program... \n";

	_getch();



	cout << "     Good day, User!\n\n";

	cout << "     This program would be able to sort an array \n     of characters and would let you declare its size!\n\n";

	cout << "     To get started, kindly enter the characters you \n     wish to include in the array: \n\n";



	_getch();

	cout << "     How big would you like your array to be? (Capacity): ";

	cin >> cap;

	cout << "\n\n";

	cin.ignore();

	cout << "     Input your character/s below \n";


	string* array = new string[cap];

	for (int i = 0; i < cap; i++)

	{

		cout << "         \n        : ";

		getline(cin, array[i]);

	}

	cout << "\n\n";

	bool swap = true;

	string b;

	while (swap)

	{

		swap = false;

		a++;

		for (int l = 0; l < cap - a; l++)

		{

			if (array[l] > array[l + 1])

			{

				b = array[l];

				array[l] = array[l + 1];

				array[l + 1] = b;

				swap = true;

			}

		}

	}

	cout << "     Below is the sorted array for your characters: \n\n";

	for (int c = 0; c < cap; c++)

	{

		cout << "        " << array[c] << "\n";

	}

	cout << "                   Press any key to end the program... \n";

	_getch();

	return 0;
}