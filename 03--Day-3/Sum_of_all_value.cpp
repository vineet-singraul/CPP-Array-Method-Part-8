#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    cout << "Enrte Number : ";
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; ++i)
    {
        cout << "Enter The Value " << i << " : ";
        cin >> arr[i];
        sum = sum + arr[i];
    }
    cout<<"the sum Of Array Is : "<<sum;
}