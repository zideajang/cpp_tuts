#include<iostream>
#include "scalarTensor.h"

using namespace std;

int main(int argc, char const *argv[])
{
    ScalarTensor scalar_tensor = ScalarTensor(1);
    cout << scalar_tensor.getValue() << endl;
    return 0;
}
