#include<iostream>

using namespace std;

void swap(int& a, int& b){
    int tmp = b;
    b = a;
    a = tmp;
}

int main(int argc, char const *argv[])
{
    /* code */
    //变量定义
    // auto 变量，类型推断，这是 c++11 所有编译时候需要指定一下 c++ 的版本
    auto i = 3; // i 是 int 型变量
    auto f = 5.0f; // f 是 float 型变量

    //指针动态生成
    //指针变量的动态生成与删除
    //指针变量所指内存可以通过 new/delete 运算符在程序运行时动态生成和删除
    int* ptr = new int; //单个变量，在内存里面开辟一个能够存放一个整数的空间，然后将内存空间地址赋值给指针变量
    // 这里 int 是语言内建的类型，自定义类型也如此定义
    int* arr = new int[10];//内存空间地址是连续的

    *ptr = 10;

    cout << *ptr << endl;

    //内存的释放
    delete ptr; //删除指针变量所指向内存单元,保存值为内存地址，ptr 变量自身空间是不会释放，而是释放 ptr 所指向的内存空间
    delete[] arr; //

    //左值引用
    // 具有名称变量的别名，类型名& 引用名 变量名
    int a;
    int& a_ref = a;//在内存中指向一个同一个内存
    
    //引用必须在定义时进行初始化
    //被引用变量名可以是结构变量的成员变量，避免结构套结构而引起变量名称过长
    //函数参数可以引用类型，表示函数的形式参数与实际参数是同一个变量，改变形参变量将改变实参
    //函数返回值可以是引用类型，但不得是函数的临时变量

    //右值引用(c++11)
    //不能取地址的，没有名字的就是右值，匿名变量(临时变量)的别名
    //类型名&& 引用名 表达式
    int&& sum = 3 + 4;
    // float&& res = 
    cout << sum << endl;

    //目的是，减少临时变量 copy 的开销
    // c 变量类型为 int 值为 42
    int c = 42; //类型
    c = 123;
    cout << c << endl;



    return 0;
}
