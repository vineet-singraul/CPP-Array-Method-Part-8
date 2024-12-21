#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 1, 3, 2, 4};
    for (int i = 0; i < 6; ++i)
    {
        int a;
        for (int j = i + 1; j < 6; ++j)
        {
            a = 1;
            if (arr[i] == arr[j] && arr[i] != -1)
            {
                // cout << arr[i] << endl;
                arr[i] = -1;
                a = 2;
                break;
            }

        }
                    if (arr[i] != -1 && a != 2)
            {
                cout << arr[i] << endl
            }
    }
}