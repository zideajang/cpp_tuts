#ifndef TENSOR_H
#define TENSOR_H

#include<iostream>
#include<tuple>

using namespace std;



class Tensor
{
private:
    /* data */
    int h;
    int w;
    int channel;
public:
    
    Tensor(int h);
    Tensor(int h, int w);
    Tensor(int h, int w, int c);

    tuple<int,int> size();

};

#endif