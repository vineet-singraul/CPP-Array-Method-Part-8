#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter The Size Of Arrat : ";
    cin >> n;
    int arr[n] = {};

    for (int i = 0; i < n; ++i)
    {
        cout<<"Enter Array Value "<<i<<" : ";
        cin>>arr[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cout << "value Of " << i << " : " << arr[i] << endl;
    }
}