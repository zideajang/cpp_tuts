#include<iostream>

#include "layer.h"

using namespace std;

MiniLayer::MiniLayer(int input_size, int output_size)
    : input_size(input_size),output_size(output_size){}

ostream& operator<<(ostream& os, const MiniLayer& l){
    os << "(" << l.input_size << "," << l.output_size << ")" << endl;
    return os;
}