#include<iostream>
using namespace std;

void fibo(int n, int a, int b){
    if(n == 0)
       return;
    cout<<a<<" ";
    fibo(n-1, b, a+b);
}

int main(){
    int n = 5;
    fibo(n, 1 ,1);
}