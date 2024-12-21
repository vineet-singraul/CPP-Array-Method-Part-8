// #include <iostream>
// using namespace std;

// int main()
// {
//     int arr1[] = {1, 2, 3, 2, 1};
//     int brr[5] = {};
//     int temp = 0;

//     for (int i = 0; i < 5; ++i)
//     {
//         brr[i] = arr1[i];
//     }

//     for (int i = 0; i < 5 / 2; ++i)
//     {
//         temp = arr1[i];
//         arr1[i] = arr1[5 - i - 1];
//         arr1[5 - i - 1] = temp;
//     }

//     char CH = 'A';
//     for (int i = 0; i < 5; ++i)
//     {
//         if (arr1[i] != brr[i])
//         {
//             CH = 'a';
//             break;
//         }
//     }

//     if (CH == 'A')
//     {
//         cout << "Array Is The Palindrome Number." << endl;
//     }
//     else
//     {
//         cout << "Not A Palindrome." << endl;
//     }

//     return 0;
// }

//                     OR OR OR OR OR OR OR OR OR ORO OR OR OR RO RO RO RO R R RO RO RO RO O R

#include <iostream>
using namespace std;

int main()
{
    int arr1[] = {1, 2, 3, 2, 0};

    char ch = 'A';
    for (int i = 0; i < 5 / 2; ++i)
    {
        if (arr1[i] != arr1[5 - i - 1])
        {
            ch = 'a';
        }
    }
    if (ch == 'A')
    {
        cout << "Array Is A Palindrome." << endl;
    }
    else{  
        cout << "Array Is Not A Palindrome." << endl;
    }


    return 0;
}
