#ifndef SCALAR_TENSOR
#define SCALAR_TENSOR

class  ScalarTensor
{
private:
    int value;
    /* data */
public:
    ScalarTensor(int val);
    int getValue(){ return value;}
};

#endif
