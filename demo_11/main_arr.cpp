#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout << "first element: "<< arr[0] << endl;

    int* p = arr;

    cout << "first element: "<< *p << endl;

    p++;//向后偏移了 4 个字节

    cout << "second element: "<< *p << endl;

    int* pnt = arr;

    for (int i = 0; i < 10; i++)
    {
        /* code */
        cout << *pnt << endl;
        pnt++;
    }
    

    return 0;
}
