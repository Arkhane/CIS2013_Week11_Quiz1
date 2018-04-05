//on start asks for a number of row and then asks for number of computers on each row.
//prints out rows and computers on each row.
//asks for a row and computer number to set a grade on
//reprints the output with the grade to the cumputer/rows.
//repeats at step 3.

#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;


const int rows = 10;
const int elements = 10;
int matrix[rows][elements];


void Clear()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < elements; j++)
		{
			matrix[i][j] = 0;
		}

	}
}

void Show()
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < elements; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;

	}
}


int main()
{
	cout << "Please type number of rows..." << endl;
	//cin >> numberOfRows;
	//cout << "Please type number of computers..." << endl;

	Clear();
	Show();

	systeam("pause");
	return 0;
}