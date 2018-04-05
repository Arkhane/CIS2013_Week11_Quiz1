//on start asks for a number of row and then asks for number of computers on each row.
//prints out rows and computers on each row.
//asks for a row and computer number to set a grade on
//reprints the output with the grade to the cumputer/rows.
//repeats at step 3.

#include <iostream>
#include <fstream>
#include <ctime>
#include <cstring>
using namespace std;


void Input()
{
	int a;
	cout << "Pick a (row,computer) to set a grade on.." << endl;
	cin >> a;

	if (a == 1)
		matrix[][] = player;

}

int main()
{
	int rows = 2;
	int numberOfComputer = 10;
	char matrix[rows][elements];

	cout << "Please type number of rows..." << endl;
	cin >> rows;
	cout << "Please type number of computers..." << endl;
	cin >> elements;

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < elements; j++)
		{
			matrix[i][j] = 0;
		}

	}


	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < elements; j++)
		{



			cout << matrix[i][j] << "computer ";


		}
		cout << endl;

	}






	return 0;
}




