#include <iostream>
#include <vector>
using namespace std;
vector<int> merge(vector<int>nums1,vector<int>nums2,int start1,int start2,vector<int>&answers){
    
    
    while(start1<nums1.size() && start2<nums2.size()){
        if(nums1[start1]>=nums2[start2]){
              answers.push_back(nums2[start2]);
        start2++;
        
        }else{
            answers.push_back(nums1[start1]);
            
        start1++;
        
        
        
        }
    
    }
    if(start1>=nums1.size()){
        for(int i=start2;i<nums2.size();i++){
            answers.push_back(nums2[i]);

        }
    } 
    if(start2>=nums2.size()){
    for(int i = start1;i<nums1.size();i++){
            answers.push_back(nums1[i]);
        }
    }
 return answers;   
}

int main() {
   vector<int>vect1,vect2,newv;
   vect1={1,2,3,4,5,6};
    vect2={7,8,9};
    newv=merge(vect1,vect2,0,0,newv);
    for(int n:newv){
        cout<<n;
    }
   

    return 0;
}
