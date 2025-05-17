#include <iostream>
using namespace std ;
int fact(int a){
   int mul=1;
    while(a>=1){
        mul=mul*a;
        a--;
    }
    return mul;

}
int main() {
   int a ,b;
   cout<<"binomial coefficient calculator "<<endl;
   cout<<"N="<<endl;
   cin>>a;
   cout<<"R="<<endl;
   cin>>b;
   if(a<b){
       cout<<"invalid input";
   }
  int s=fact(a)/(fact(b)*fact(a-b));
  if(b==0){
      cout<<"1";
      
  }
   else{
       cout<<s;
   }
  
return 0;
        }
