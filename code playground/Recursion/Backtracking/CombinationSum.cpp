#include <algorithm>
class Solution {
public:
   void dothejob(vector<int>nums, int idx , int sum , vector<int>ans, vector<vector<int>>&actualans){
   if(idx==nums.size())idx=0;
    if(sum==0){
        actualans.push_back(ans);
        return;
    }
    if(sum<0 || nums.size()==0){
        return;
    }
    //include case 
    ans.push_back(nums[idx]);
    dothejob(nums, idx+1, sum-nums[idx],ans,actualans);
    //exclude case 
    ans.pop_back();
    nums.erase(nums.begin()+idx);
    dothejob(nums,idx,sum,ans,actualans);
    
   }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> actualans;
        vector<int>ans;
        dothejob(candidates,0,target,ans,actualans);
        
        
        return actualans;
    }
};
