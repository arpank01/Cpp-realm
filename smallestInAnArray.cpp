#include <iostream>
#include <climits>
using namespace std;
int main() {
    
  int arr1[7]={24,23,45,67,5,56,40};
  int smallest=arr1[0];
  for(int i=0;i<7;i++)
  {
     if(arr1[i]<smallest){
         smallest=arr1[i];
         
         
     }
  }
cout<<smallest;
    return 0;
}
