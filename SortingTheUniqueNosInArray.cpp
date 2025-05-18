#include <iostream>
using namespace std ;
int main(){
int arr[]={1,2,3,4,4,8,8,9,4,5};
bool state=true;
//linear search for all variables
    for(int j=0;j<10;j++)
{
//linear search for a fixed no ie i=1 through the whole array ;
for(int i=0;i<10;i++)
{
//searching for indices other than itself
if(i!=j){
    if(arr[j]==arr[i])
    {
        //if any other number is same state is switched to false and the loop is broken 
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
