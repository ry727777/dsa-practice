
#include <bits/stdc++.h>
using namespace std;

 int removeDuplicates(vector<int>& arr) {
        // int arr[204];
        // for (int i = 0; i < 204; ++i)
        //     arr[i] = -1;
        // for (int i=0; i<nums.size(); i++){
        //     arr[100+nums[i]] = 100+nums[i];
        // }
        // int k=0;
        // int count = 0;
        // for (int i=0; i<204; i++){
        //     if(arr[i] != -1){
        //         count++;
        //         nums[k] = arr[i] - 100;
        //         k++;
        //     }
        // }
        // return count;
        // above solution is of O(n) time and O(k) space complexity
        
        // using O(N) time complexity only
        int i=0,j=0;
        int count = 1;
        while(j< arr.size()){
            if(arr[i] == arr[j]){
                j++;
            }
            else{
                i++;
                count++;
                arr[i] = arr[j];
            }
        }
        return count;
    }

int main()
{
  vector<int> tmp = {1,1,1,2,3,4,4,4,5,6};
  int k = removeDuplicates(tmp);
  cout<< k;
}