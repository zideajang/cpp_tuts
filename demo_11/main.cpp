#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int a = 10;
    int b = 20;
    int* pnt = &a;

    *pnt = 20;
    
    // pnt = &b;

    cout << *pnt << endl;



    return 0;
}
