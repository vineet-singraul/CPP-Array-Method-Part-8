#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 0, 0, 4, 5};
    int j = 0;
    for (int i = 0; i < 5; ++i)
    {

        if (arr1[i] != 0)
        {
            arr1[j] = arr1[i];
            j++;
        }
    }

    for(int i = j; i<5 ;++i)
    {
        arr1[j] = 0;
        j++;
    }

    for (int j = 0; j < 5; ++j)
    {
        cout << arr1[j];
    }

    return 0;
}
