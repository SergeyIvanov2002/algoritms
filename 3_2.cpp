#include <iostream>

using namespace std;

int main() 
{
    int n = 7;
    int tmp, min_ind; 
    int arr[7] = { 5, 2, 4, 0, 6, 1, 3 };
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++) 
    {
        min_ind = i;
        for (int j = i + 1; j < n; j++) 
        {
            if (arr[j] < arr[min_ind]) 
            {
                min_ind = j;
            }
        }
        tmp = arr[min_ind];
        arr[min_in] = arr[i];
        arr[i] = tmp;
    }
    for (int i = 0; i < n; i++) 
    {
        cout << arr[i] << " ";
    }
    return 0;
}