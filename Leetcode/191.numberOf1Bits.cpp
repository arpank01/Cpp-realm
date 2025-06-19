 int hammingWeight(int n) {
      int quot,powe,sum;
powe=1;
sum=0;
 

while(n>0){
  //modulo of number is extracted 
 quot=n%2;
    //modulo is multipled by postional exponent of 10 and then added to the sum value which produces the numbers in correct sequence .
    sum=sum+quot;
   //the powwer then is increased by 10 for the next loop to get correct modulo postioning again.
 
//n is then actually divided to get the quotient
 n=n/2;
    
}

return sum;  
    }
