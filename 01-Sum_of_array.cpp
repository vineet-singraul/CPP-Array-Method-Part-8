#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum = 0;
    cout << "Enrte Number : ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cout << "Enter Value Is :" << "{" << i << "}";
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout << "The Sum Of Array : "<<sum;
}