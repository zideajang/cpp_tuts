#include<iostream>

using namespace std;

void add_one(int& num){
    num = num + 1;
}

void add_one_immutable(const int& num){
    int res = num + 1;
}


int main(int argc, char const *argv[])
{
    /* code */

    int num = 17;
    // int& numRef = num;

    // cout << num << endl;//19
    // cout << numRef << endl;//19

    // numRef = 19;

    // cout << num << endl; //19
    // cout << numRef << endl;//19

    add_one_immutable(num);
    cout << num << endl;

    return 0;
}
