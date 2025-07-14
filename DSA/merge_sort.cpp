#include<bits/stdc++.h>
using namespace  std;

vector<int> merge(vector<int> ans1, vector<int> ans2){
    vector<int> ans;
    int i=0,j=0;
    while (i<ans1.size() && j<ans2.size())
    {
        if(ans1[i] < ans2[j]){
          ans.push_back(ans1[i]);
          i++;
         }
        else{
            ans.push_back(ans2[j]);
            j++;
        }
    }
    while(i<ans1.size()){
        ans.push_back(ans1[i]);
        i++;
    }
    while(j<ans2.size()){
        ans.push_back(ans2[j]);
        j++;
    }
    return ans;
    
}

vector<int> solve(int arr[],int n,int i,int j){
   if(n == 0) return {};
   if(i==j){
    return {arr[i]};
   }
   int mid = i + (j-i)/2;

   vector<int> ans1 = solve(arr,n, i, mid);
   vector<int> ans2 = solve(arr, n, mid+1, j);

   vector<int> merge_array = merge(ans1,ans2);
   return merge_array;
}

int main(){
   int n = 4;
   int arr[] = {3,4,1,2};
   vector<int> ans = solve(arr,n,0,n);
   for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
   }
}