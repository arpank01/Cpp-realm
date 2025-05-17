#include <iostream>
using namespace std;

int main() {
int n,quot,powe,sum;
powe=1;
sum=0;
 
cin>>n;
while(n>0){
    quot=n%2;
    
    sum=sum+quot*powe;
    powe=powe*10;
    n=n/2;
    
}
cout<<sum;
return 0;
}
