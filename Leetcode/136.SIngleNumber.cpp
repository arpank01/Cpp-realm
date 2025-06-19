int singleNumber(vector<int>& nums) {
        int sz = nums.size();
        int fn;
        bool state = true;
        for (int j = 0; j < sz; j++) {

            for (int i = 0; i < sz; i++) {
                if (i != j) {
                    if (nums[j] == nums[i]) {
                        state = false;
                        break;

                    } else {
                        state = true;
                    }
                }
            }

            if (state == true) {
                fn=nums[j];

            }
        }
   return fn; }
