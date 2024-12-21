#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,1,3,2,4};
    for(int i = 0 ; i<7 ;++i)
    {
        for(int j = i+1; j<7 ; ++j)
        {
            if(arr[i] == arr[j] && arr[i]!=-1)
            {
                cout<<arr[i]<<endl;
                arr[i]=-1;
                return 0 ;
            }
        }
    }
}