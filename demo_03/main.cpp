#include<iostream>

#include "layer.h"

using namespace std;

int main(int argc, char const *argv[])
{
    MiniLayer miniLayer = MiniLayer(20,20);
    
    cout << "input size: " << miniLayer.getInputSize() << endl;
    cout << "input size: " << miniLayer << endl;
    return 0;
}
