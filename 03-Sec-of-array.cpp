#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enrte Number : ";
    cin >> n;
    int arr[n] {1,2,3,4};
    int largest = 0;

    // for (int i = 0; i < n; ++i)
    // {
    //     cout << "Enter The Value " << i << " : ";
    //     cin >> arr[i];
    // }

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout<<"The Largest Value Of All Array : "<<largest; 
}