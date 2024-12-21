#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;
    int arr[n];
    int largest = 0;
    int secLargest = 0;

    for (int i = 0; i < n; ++i)
    {
        cout << "Enter The Value " << i << " : ";
        cin >> arr[i];
    }

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] > largest)
        {
            secLargest = largest; // Update second largest before updating largest
            largest = arr[i];
        }
        else if (arr[i] > secLargest && arr[i] != largest) // Ensure second largest is distinct
        {
            secLargest = arr[i];
        }
    }

    cout << "The Second Largest Value Of All Array: " << secLargest;
}




