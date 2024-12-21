#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    bool cd = true;

    for (int i = 0; i < 4; ++i)
    {
        if (arr1[i] > arr1[i + 1])
        {
            cd = false;
            break;
        }
    }

    if (cd == true)
    {
        cout << "Array is Present in ascending ordered way." << endl;
    }
    else
    {
        cout << "Not an Ascending Ordered array." << endl;
    }

    return 0;
}
