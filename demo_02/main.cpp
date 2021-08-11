#include<iostream>
#include "scalarTensor.h"

using namespace std;

int main(int argc, char const *argv[])
{
    ScalarTensor* scalar_tensor = new ScalarTensor(100);
    // scalar_tensor->setValue(100);
    cout << scalar_tensor->getValue() << endl;
    return 0;
}
