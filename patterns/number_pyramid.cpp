#include <iostream>
using namespace std;

int main() 
{
  for(int i=1;i<=4;i++){
      for(int k=4-i;k>=0;k--){
          cout<<" ";
          
      }
      for(int j=1;j<=i;j++){
          cout<<j;
          
      }
      for(int j=i-1;j>=1;j--){
          cout<<j;
      }
      
      cout<<endl;
  }
return 0;
    
    
    
}
