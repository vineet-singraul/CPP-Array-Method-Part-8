#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter the number Od Row (r) : ";
    cin >> r;

    cout << "Enter the number Od Colom (c) : " ;
    cin >> c;

    int arr[r][c] = {};

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cout << "Enter The Value Of "<< "{"<< i<< "} , {"<< j<< "} : ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < r; ++i)
    {
        for (int j = 0; j < c; ++j)
        {
            cout << "Tha Value Is :" << "{" << i << "} {" << j << "}"<<" : "<<arr[i][j];
            cout << endl;
        }
    }
}
