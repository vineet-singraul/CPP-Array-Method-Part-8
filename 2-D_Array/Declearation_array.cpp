#include <iostream>
using namespace std;
int main()
{
    // Declare and initialize the 2D array
    int arr[2][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}};
    // cout<<arr[0][0]<<endl;
    // cout<<arr[0][1]<<endl;
    // cout<<arr[1][0]<<endl;
    // cout<<arr[1][1]<<endl;

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            cout << "The Value Of : {" << i << "}{" << j << "} Is : " << arr[i][j] << endl;
        }
    }
}
   