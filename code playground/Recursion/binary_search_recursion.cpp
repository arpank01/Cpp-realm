#include <iostream>
#include <vector>
using namespace std;
int binarysearch(vector<int>&vec,int target,int start,int end){
    if(start<=end){
     int mid=(start+end)/2;
     if (vec[mid]==target) return mid;
    
     
     if(vec[mid]<target){
         start=mid+1;
     }
     if(vec[mid]>target){
         end=mid-1;
     }
    return binarysearch(vec,target,start,end);
    }else{
         //return -1 if element is not found
        return -1;
    }
}


int main()
{
vector<int>vec={1,2,3,4,5,6,7,7,8,9,10,11,12,13};
      cout << binarysearch(vec,0,0,vec.size());
      return 0;
}
