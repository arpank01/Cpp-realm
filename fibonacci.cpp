#include <iostream>
using namespace std;
int fibonacci(int n){
    if(n==0 || n==1 ){
     
        return n;
    }
   

    
    return fibonacci(n-1)+fibonacci(n-2);

}
int main(){
   int input;
  cin>>input;
  cout<<"------------The Fibonacci sequence"<<endl;
  for (int i=0;i<=input;i++){
    cout<<fibonacci(i)<<endl;
  }  
  
    return 0;
}
