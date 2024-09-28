#include <iostream>
using namespace std;

template<typename T1, typename T2>
T1 suma(T1 a, T2 b){
    return a+b;
}

int main(){
    double a = 4.5;
    int b = 6;

    cout<<suma(a,b);
}