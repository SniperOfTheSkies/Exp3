#include <iostream>
#include <conio.h>

using namespace std;

int main()

{

	// Variable Declaration

	double proA[7], proB[7], proC[7];

	int i, a;




	cout << "                   Press any key to start the program... \n";

	

	_getch();



	cout << "     Good day, User!\n\n";

	cout << "     This program would be able to store a province's \n     general temperature each day for a week!\n\n";

	cout << "     To get started, kindly enter the temperature each day \n     for this week in each province (3): \n\n";


	_getch();


	cout << "     Kindly enter temperature each day for this week in Province A: \n\n";

	// Initialize

	for (i = 0; i < 7; ++i)

		proA[i] = 0.0;

	// Reading Data Into An Array - Province A

	for (i = 0; i < 7; ++i)

	{

		cout << "          ";

		cin >> proA[i];

	}



	cout << "     Kindly enter temperature each day for this week in Province B: \n\n";



	// Initialize

	for (i = 0; i < 7; ++i)

		proB[i] = 0.0;

	// Reading Data Into An Array - Province B

	for (i = 0; i < 7; ++i)

	{

		cout << "          ";

		cin >> proB[i];
	}

	cout << "     Kindly enter temperature each day for this week in Province C: \n\n";

	// Initialize

	for (i = 0; i < 7; ++i)

		proC[i] = 0.0;

	// Reading Data Into An Array - Province C

	for (i = 0; i < 7; ++i)

	{

		cout << "          ";

		cin >> proC[i];

	}


	cout << "     In the first province, the temperatures you've inputted are: \n\n";

	// Printing The Arrays

	for (i = 0; i < 7; ++i)

		cout << "         Day " << i + 1 << ": " << proA[i] << " degrees" << "\n";

	cout << "\n     Proceed?\n";


	_getch();

	cout << "     In the second province, the temperatures you've inputted are: \n\n";

	for (i = 0; i < 7; ++i)

		cout << "         Day " << i + 1 << ": " << proB[i] << " degrees" << "\n";

	cout << "\n     Proceed?\n";

	
	_getch();

	cout << "     In the third province, the temperatures you've inputted are: \n\n";

	for (i = 0; i < 7; ++i)

		cout << "         Day " << i + 1 << ": " << proC[i] << " degrees" << "\n";

	cout << "\n     Proceed?\n";

	_getch();

	cout << "                   End of program, nothing follows... :)";

	cout << "\n";

	cout << "                   Press any key to end the program... \n";

	_getch();

	return 0;

}