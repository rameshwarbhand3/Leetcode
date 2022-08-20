#include <iostream>
using namespace std;
void printarray(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "";
    }
    cout << endl;
}
void alternatereverse(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}
int main()
{
    int even[8] = {2, 3, 5, 7, 9, 0, 6, 1};
    int odd[7] = {2, 3, 4, 6, 7, 8, 9};

    alternatereverse(even, 8);
    printarray(even, 8);
    cout << endl;

    alternatereverse(odd, 7);
    printarray(odd, 7);

    return (0);
}