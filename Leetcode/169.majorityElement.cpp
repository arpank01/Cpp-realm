int majorityElement(vector<int> nums) {
        int n, count, idx;
        count,idx = 0;
        
        n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {

                if (nums[j] == nums[i]) {
                    count = count + 1;
                }
            }
            if (count >= (n + 1) / 2) {
                idx = nums[i];
                break;
            } else {
                count = 0;
            }
        }
        return idx;
    }
