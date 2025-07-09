#include<iostream>
using namespace std;

int countSetBit(int x){
   if(x == 0){
    return 0;
   }
   if(x & 1){
    return 1 + countSetBit(x >> 1);
   }else{
    return countSetBit(x >> 1);
   }
}

int main(){
    int n = 16;
    int ans = countSetBit(n);
    cout<<ans<<endl;
}