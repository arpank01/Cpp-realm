#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> &vec,int i){
    if(i==vec.size()){
        
        return ;
    }
    cout<<vec[i]<<endl;
    return print(vec,i+1);
    

}

int main()
{
    vector<int> arr={78,432,243,53,4765,76,86};
    print(arr,0);
    

    return 0;
}
