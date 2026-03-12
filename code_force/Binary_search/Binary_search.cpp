#include<iostream>
using namespace std;

bool isPresent(int *arr, int n, int key){
    int l = 0, h = n-1;
    while(l <= h){
        int mid = l + (h-l)/2;
        if(arr[mid] == key){
            return true;
        }
        else if(key > arr[mid]){
            l = mid+1;
        }else{
            h = mid-1;
        }
    }
    return false;
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    while(k--){
        int key;
        cin>>key;
        bool ans = isPresent(arr, n, key);
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}