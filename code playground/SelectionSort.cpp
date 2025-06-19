#include <iostream>
#include <vector>
using namespace std ;
void slectionSort(vector<int>&nums ){
    int idx;
    int n=nums.size();
    for(int i=0;i<n;i++){
        int smallest=nums[i];
       //unsorted part 
        for(int j=i;j<n;j++){
            if(smallest>nums[j]){
                smallest=nums[j];

            }


        }
        //searching for the smallest value in the subarray 
        for(int k=i;k<n;k++){
            if(smallest==nums[k]){
                idx=k;
                break;
            }
        }
        //swap the smallest value with the current value 
        swap(nums[i],nums[idx]);
    }
}






int main() {
 vector<int>prices={8,5,9,4,5,7,6};


 slectionSort(prices);
 for (int i : prices)
 {
    cout<< i;
}

return 0;
}
