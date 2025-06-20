#include <iostream>
#include <vector>
using namespace std;
int searching(vector<int>&vec,int target,int i){
    if(vec[i]==target){
        return i;
    }
    if( i==vec.size()){
        return -1;
    }
    i=i+1;
    return searching(vec,target,i);
}

int main()
{
    vector<int> arr={78,432,243,53,4765,76,86};
    cout<<searching(arr,768,0);
    

    return 0;
}
