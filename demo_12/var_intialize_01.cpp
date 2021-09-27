#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    //引用更安全
    //引用本质上与指针无根本本性的差别，但是有时候特别方便书写更可读的代码，更方便编译器去优化
    // uint32_t i = 0; // i 左值

    //用花括号{} 包括起来的元素序列，可以用来对变量进行初始化
    // int a[] = {1,3,5};
    // int b[]{1,3,5};

    //列表初始化可以{}花括号之前使用等号，也可以不用变量的初始化方法
    // int a = 3 + 5;
    // int a = {3+5};
    // int a(3+5); //圆括号,面向对象定义类时候会用到这种初始化()
    int a{3+2}; //花括号

    cout << a << endl;

    // int* i = new int(10);// int a(3+5) 比较类似
    double* d = new double{1.2f}; //对变量进行初始化

    cout << *d << endl;
    //这里 a 是基础类型，也可以用类似类型形式对其进行初始化

    


    return 0;
}
