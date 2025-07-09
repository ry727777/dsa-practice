
#include <bits/stdc++.h>
using namespace std;

 vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int>> new_vct;
        for(int i=0; i<nums.size(); i++){
            new_vct.push_back({nums[i],i});
        }
        sort(new_vct.begin(), new_vct.end());
        int i=0, j=nums.size()-1;
        vector<int> tmp;
        while(i < j){
            int ans = 0;
            ans = new_vct[i].first + new_vct[j].first;
            if(ans == target){
                cout<<"print";
                tmp = {new_vct[i].second, new_vct[j].second};
                break;
            }
            else if(ans > target){
                cout<<"yes"<<endl;
                j--;
            }else{
                cout<<"no"<<endl;
                i++;
            }
        }
        return tmp;
}

int main()
{
   vector<int> nums = {3,2,4};
   vector<int> values = twoSum(nums,6);
   cout<<values.size();
}