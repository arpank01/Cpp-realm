#include <iostream>
using namespace std ;
int main(){
int arr[]={1,2,3,4,5};
int size=sizeof(arr)/sizeof(int);
//using two pointer approach
int start=0;
int end = size-1;
while(end>start){
    swap(arr[start],arr[end]);
    start++;
    end--;
}
for(int i=0;i<5;i++){
    cout<<arr[i];
}
return 0;

    }
