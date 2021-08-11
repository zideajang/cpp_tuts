#include <iostream>
#include<tuple>

#include "tensor.h"


using namespace std;

Tensor::Tensor(int h):h(h){}
Tensor::Tensor(int h,int w):h(h),w(w){}
Tensor::Tensor(int h, int w, int c):h(h),w(w),channel(c){}

tuple<int,int> Tensor::size(){
    return {h, w};
}