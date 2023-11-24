#include<iostream>
using namespace std;
int main()
{
	int r, c, c1, r1;
	char arr[3][3];

	cout << "0\t0\t0" << endl;
	cout << "0\t0\t0" << endl;
	cout << "0\t0\t0" << endl;
	for (int p = 0; p < 9; p++)
	{
		cout << "Enter coloumn number: " << endl;
		cin >> c;
		cout << endl << "Enter row number: " << endl;
		cin >> r;
		cout << endl;
		c1 = c - 1;
		r1 = r - 1;
		if (p % 2 == 0)
		{
			arr[r1][c1] = 'X';
		}
		if (p % 2 != 0)
		{
			arr[r1][c1] = 'O';
		}
		for (int a = 0; a < 3; a++)
		{
			for (int a1 = 0; a1 < 3; a1++)
			{
				cout << arr[a][a1] << "\t";
			}
			cout << endl;
		}
	}
	//Looking for triplets!!
	//rows
	if (arr[0][0] == arr[0][1] && arr[0][1] == arr[0][2])
	{
		cout << "player " << arr[0][0] << " wins";
	}
	if (arr[1][0] == arr[1][1] && arr[1][1] == arr[1][2])
	{
		cout << "player " << arr[1][0] << " wins";
	}
	if (arr[2][0] == arr[2][1] && arr[2][1] == arr[2][2])
	{
		cout << "player " << arr[2][0] << " wins";
	}
	//coloumns
	if (arr[0][0] == arr[1][0] && arr[1][0] == arr[1][0])
	{
		cout << "player " << arr[0][0] << " wins";
	}
	if (arr[0][1] == arr[1][1] && arr[1][1] == arr[2][1])
	{
		cout << "player " << arr[0][1] << " wins";
	}
	if (arr[0][2] == arr[1][2] && arr[1][2] == arr[2][2])
	{
		cout << "player " << arr[0][2] << " wins";
	}
	//Diagnals
	if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
	{
		cout << "player " << arr[1][1] << " wins";
	}
	if (arr[2][0] == arr[1][1] && arr[1][1] == arr[0][2])
	{
		cout << "player " << arr[1][0] << " wins";
	}
}