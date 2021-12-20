#include <iostream>

using namespace std;

int main()
{
setlocale (LC_ALL, "Russian");    
int n, z, k;
bool flag;
cin >> n >> z;
while (n>0 && !flag)
{
k = n%10;
if (k == z)
{
flag = true;
cout << "Цифра найдена." << endl;
}
else
{
n = n/10;
}
}
if (!flag)
{
cout << "Цифры" << z << "в заданном числе нет"
} 
} 