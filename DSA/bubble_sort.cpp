#include<bits/stdc++.h>
using namespace std;

void solve(int arr[], int n){
    
    for(int i=0; i<n-1; i++){
        bool issort = false;
        for(int j = 0; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                issort = true;
                swap(arr[j],arr[j+1]);
            }
        }
        if(!issort){
            break;
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[5] = {5,1,3,2,4};
    solve(arr, 5);
}