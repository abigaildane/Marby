#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int Cube(int &num)
{
	int root = num;
	int cube = num * num;
	return cube;
}

int main()
{

	int num = 0;

	cout << "Enter an integer.\n";
	cin >> num;
	cout << num << " cubed is " << Cube(num);

	_getch();
	return 0;
}