#include <iostream>

using namespace std ;

int main() {
   
    int n ,m , k,ex ;
    
    
    //n is input integer , k is sum value like 1*2^2+0*2^1+1*2^0=5 , ex is expnent to be multiplied to each modulo at each step for conversion
    
    cin>>n;
    ex=1;
    k=0;
    //
    while (n>0){
        
        
        //remainder is saved inside m 
       
       
        m=n%10;
        
        
        //the remainder times the exponent of 2 is added to the sum value k
       
       
        k=k+ ex*m;
       
       
        //after each step the ex is accordingly multiplied by 2 to raise its exponent 
        
        
        ex=ex*2;
        
        //exponent is increased for the next step 
        
        
        n=n/10;
        
        //n is divided to get to the next digit ;
        
    }
   cout<<k;

    return 0;
}
