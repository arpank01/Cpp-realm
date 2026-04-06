// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int arr[1000000];
int test[7]={0,1,3,7,5,4,6};
void build( int idx,int left,int right){
    if(left==right){
        arr[idx]=test[right];
        return;
    }
    int mid=(left+right)/2;
    
    build(2*idx,left,mid);
    build(2*idx+1,mid+1,right);
    arr[idx]=min(arr[2*idx],arr[2*idx+1]);
    
}
int query(int idx, int left_idx,int right_idx,int l,int r ){
    if(left_idx>r || right_idx<l){
        return INT_MAX;
    }
    if(left_idx >= l && right_idx <= r){
    return arr[idx];
}
    int mid=(left_idx+right_idx)/2;
    
    int a=query(2*idx,left_idx,mid,l,r);
    int b=query(2*idx+1,mid+1,right_idx,l,r);
    return min(a,b);
    
    
}


int main() {
    build(1,1,7);
    cout<<query(1,1,7,3,5);

    return 0;
}
