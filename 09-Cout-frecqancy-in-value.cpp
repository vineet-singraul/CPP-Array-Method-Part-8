#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 1, 2, 2};
    int count = 0;

    for (int i = 0; i < 5; ++i)
    {
        count = 0;
        for (int j = i + 1; j < 5; ++j)
        {
            if (arr1[i] == arr1[j] && arr1[j] != -1)
            {
                count++;
                arr1[j] = -1;
            }
        }
        if (count != 0)
        {
            cout << arr1[i] << " : " << count + 1 << endl; 
        }
    }
    return 0;
}
