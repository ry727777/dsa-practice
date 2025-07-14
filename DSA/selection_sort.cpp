#include<bits/stdc++.h>
using namespace  std;

// select the smallest value and swap it to the first

void solve(int arr[] , int n){
    int k = -1;
    for(int i=0; i<n; i++){
        int min_value = arr[i];
        for(int j=i+1; j<n; j++){
            // min_value = (arr[j]<arr[i])? arr[j]:arr[i];
            if (min_value > arr[j]){
                min_value = arr[j];
                k = j;
            }
        }
        if(k != -1){
            swap(arr[i],arr[k]);
        }
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
     int arr[1] = {3};
     solve(arr, 1);
}