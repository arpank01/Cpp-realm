int searchInsert(vector<int>& nums, int target) {
         int start , end,mid;
        start =0;
        end=nums.size()-1;
        
        
        while(start<=end){
            mid=start +(end-start)/2;
            if(target>nums[mid]){
                start=mid+1;
            }
            else if(target<nums[mid]){
                end=mid-1;
            }
            else{
                return mid;
            }
        }
       return max(start,end);
        
    }
