#include <iostream>
#include <vector>
using namespace std;
int maxsearching(vector<int>&vec,int max,int i){
  if(i==vec.size()){
      return max;
  }
  
  if(vec[i+1]>max){
      max=vec[i+1];
      
  }
  i=i+1;
  return maxsearching(vec,max,i) ;
 
}

int main()
{
    vector<int> arr={78,432,243,53,4765,76,86};
    cout<<maxsearching(arr,arr[0],0);
    

    return 0;
}
