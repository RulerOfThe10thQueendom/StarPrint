#include <iostream>
using namespace std;

int main()
{
	int stars;
	do
	cout << "Input a size (positive integer): ";
	cin >> stars;

	for (int i = stars; i >= 0; i--)
	{
		for (int j = 0; j < i; j++)
		{
			cout << " ";

		}
		cout << "*" << endl;
	}
}