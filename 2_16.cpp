#include <iostream>

using namespace std;

int main()
{
int n, z;
int sum = 0;
cin >> n >> z;
for (int i=1; i<=n; i++)
{
if (i % z == 0)
{
sum+=i;
}
}
cout << sum << endl;
} 