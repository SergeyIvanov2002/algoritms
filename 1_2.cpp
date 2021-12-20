#Include <iostream>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	float a, b;
	cin >> a >> b;
	if (b == 0) 
	{
		cout << "Невозможная операция";
	}
	else 
	{
		cout << a / b;
	}
	return 0;
}
