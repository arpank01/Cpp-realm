#include <iostream>
using namespace std;
int main(){
   int num, count;
   cin>>num;
   count=0;
   for(int i=1;i<num;i++){
    if(num%i==0){
        count=count+1;

    }
   }
   cout<<(count>1?"Not prime":"Prime")<<endl;
   return 0;
}
