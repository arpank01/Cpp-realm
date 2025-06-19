#include <iostream>
using namespace std ;
bool checkprime(int n){

    int count=0;
   //each input number is divided by every number less than it between 1 and the number itself .
    for(int i=2 ; i<n;i++){
        //if a number gets divided between this range , count increases which means the no is not prime as by definition.
        if(n%i==0){
           
            count=count+1;
          break;
        }
    }
       //if count=0, not prime , hence return false , else true
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
