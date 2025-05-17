#include <iostream>
using namespace std ;
bool checkprime(int n){

    int count=0;
    for(int i=2 ; i<n;i++){
        if(n%i==0){
            count=count+1;
          break;
        }
    }
        if(count!=0){
            return false;
        
            
        }
        else{
            return true;
            
            
        }
        
    }


int main() {
  int num;
  cin>>num;
  
  for(int j=1; j<=num;j++){
      if(checkprime(j)==true){
          cout<<j<<" ";
      }
      
  }
  
return 0;
        }
