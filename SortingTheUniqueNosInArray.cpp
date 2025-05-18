#include <iostream>
using namespace std ;
int main(){
int arr[]={1,2,3,4,4,8,8,9,4,5};
bool state=true;
for(int j=0;j<10;j++)
{
    
for(int i=0;i<10;i++)
{
  if(i!=j){
    if(arr[j]==arr[i])
    {
        state=false;
        break;
        
    }
    else{
        state=true;
    }
  }

}

if(state==true){
        cout<<"unique no is "<<arr[j]<<endl;
        
    }
}
return 0;

    }
