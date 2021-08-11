#include<iostream>

#include "tensor.h"

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    Tensor tensor_1 = Tensor(1,2,3);
    int h,w;
    tie(h,w) = tensor_1.size();
    
    cout << h << endl;

    return 0;
}
