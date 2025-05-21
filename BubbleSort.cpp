#include <iostream>
#include <vector>
using namespace std ;
//Bubble sort function 
void BubbleSort(vector<int>&nums){
    
int n=nums.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }

}




int main() {
   vector<int>prices={8,5,9,4,5,7,6};


sort(prices);
for (int i : prices)
{
    cout<< i;
}

    return 0;
}
