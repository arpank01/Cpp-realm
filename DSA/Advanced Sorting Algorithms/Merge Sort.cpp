void merge(vector<int>& nums, int st, int end, int mid) {
        int array1size = mid - st + 1;
        int array2size = end - mid;
        int* arr1 = new int[array1size];
        int* arr2 = new int[array2size];
        for (int i = 0; i < array1size; i++) {
            arr1[i] = nums[i + st];
        }
        for (int i = 0; i < array2size; i++) {
            arr2[i] = nums[i + mid + 1];
        }
        int i = 0;
        int j = 0;
        int mainindex = st;
        // I for array 1 , j for array 2,mainindex is the index of the nums vector to insert elements where required 
        while (i < array1size && j < array2size) {
            if (arr1[i] >= arr2[j]) {
                nums[mainindex] = arr2[j];
                j++;
                mainindex++;
            } else {
                nums[mainindex] = arr1[i];
                i++;
                mainindex++;
            }
            if (i >= array1size) {
                for (int l = j; l < array2size; l++) {
                    nums[mainindex] = arr2[l];
                    mainindex++;
                    
                }
                return;
            }
            if (j >= array2size) {
                for (int m = i; m < array1size; m++) {
                    nums[mainindex] = arr1[m];
                    mainindex++;
                    
                }
                return;
            }
        }
    }

    void mergesort(vector<int>& nums, int st, int end) {
        if (st >= end)
            return;
        int mid = (st + end) / 2;
        mergesort(nums, st, mid);
        mergesort(nums, mid + 1, end);
        merge(nums, st, end, mid);
    }
//gotta give the input in the form mergesort(vector,starting index, ending index)
