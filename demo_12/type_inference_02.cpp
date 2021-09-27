#include<iostream>

using namespace std;

struct {char* name;}anon_u;
struct {
    int d;
    decltype(anon_u) id;
}anon_s[100];



int main(int argc, char const *argv[])
{
    decltype(anon_s) as;
    cin >> as[0].id.name;
    return 0;
}
