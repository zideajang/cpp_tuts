#ifndef LAYER_H
#define LAYER_H

#include <iostream>

using namespace std;

class MiniLayer
{
public:
    MiniLayer(int input_size, int output_size);
    int getInputSize(){return input_size;};
    int getOutputSize(){return output_size;};

    friend ostream& operator<<(ostream& os, const MiniLayer& l);
private:
    /* data */
    int input_size;
    int output_size;

};

#endif