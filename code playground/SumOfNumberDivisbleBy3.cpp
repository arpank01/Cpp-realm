#include <iostream>
using namespace std;
int main(){
    int n,sum;
    sum=0;
    
    
    cin>>n;
    for(int i=1 ; 3*i<=n ; i++){
        sum=sum+ 3*i;
    }

    cout<<sum<<endl;
return 0;
}
