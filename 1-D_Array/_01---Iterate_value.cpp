#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1,2,3,4,5};

    // static Way To Itrerate the value 

    // cout<<arr[0]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[2]<<endl;
    // cout<<arr[3]<<endl;
    // cout<<arr[4]<<endl;

            // OR

    for(int i = 0; i<5 ; ++i)
    {
        cout<<"value Of "<<i<<" : "<<arr[i]<<endl;
    }
}