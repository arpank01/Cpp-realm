 vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>soln;
    
    for(int i=0;i<nums.size();i++){
        for(int j =0;j<nums.size();j++){
          if(i!=j && i>j){
            if(nums[i]+nums[j]==target){
                soln.push_back(i);
                soln.push_back(j);
                break;
            }
          }
        }
    }
        return soln;
    }
