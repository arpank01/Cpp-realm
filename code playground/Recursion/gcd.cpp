#include <iostream>
int gcd(int a , int b){
    int remainder = a%b;
    if (remainder ==0 )return b;
    return gcd(b,remainder);
}
int main() {
   
   std :: cout<<gcd(4,3);

    return 0;
}
