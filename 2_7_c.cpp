#include <iostream>

using namespace std;

int main()
 {
	setlocale(LC_ALL, "Russian");
	int n;
	cin >> n;
	if (n < 2)
     {
		cout << "Введите число большее 2";
		cin >> n;
	}
	for (int j = 0; j < n; j++) 
    {
		cout << "* ";
	}
	cout << endl;
	for (int j = 0; j < (n - 2); j++)
     {
		cout << "* ";
		for (int k = 0; k < n - 2; k++) 
        {
			cout << "  ";
		}
		cout << "* ";
		cout << endl;
	}
	for (int j = 0; j < n; j++) 
    {
		cout << "* ";
	}
	return 0;
}