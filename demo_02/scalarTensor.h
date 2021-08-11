#ifndef SCALAR_TENSOR
#define SCALAR_TENSOR

class  ScalarTensor
{
private:
    int val;
public:
    ScalarTensor(int val);
    void setValue(int val);
    int getValue(){ return val;}
};

#endif
