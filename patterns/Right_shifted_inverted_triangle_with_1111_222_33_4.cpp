#include <iostream>
using namespace std ;

int main() {
   
   
    for(int i=1 ; i<=4 ; i++){
        for(int k=1;k<i;k++){
              cout<<" ";
          }
        for(int j=5-i; j>=1; j--){
          cout<<i;
         }
        cout<<endl;
        }
    
    return 0;
}
