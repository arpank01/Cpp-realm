#include <iostream>
using namespace std;

//exponential function
int expon(int n ){
    int powe=1;
    for(int i=1; i<=n;i++){
        powe=powe*10;
    }
    return powe;
    
}



//length function
int length(int n){
   int count=0;
   while(n>=1){
      count=count+1;
       n=n/10;
   }
   return count;
}



int main() {
   int n,ny,expo , rem,sum;
   expo=1;
   sum=0;
   cin>>ny;
   n=ny;
   //reversal function
   
  for(int i=0;i<length(ny);i++)
  {
      
      rem=n%10;
      sum=sum+rem*expon(length(ny)-i-1);
      n=n/10;
      
      
      
  }
  cout<<sum;
   
    return 0;
}
