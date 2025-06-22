#include <iostream>
#include <string>
#include <vector>
using namespace std;
void subsequence(string s,int idx,vector<string>&semt){
    if(s.size()>0 && idx<s.size()){
    
    subsequence(s,idx+1,semt);
    s.erase(s.begin()+idx);
    semt.push_back(s);
    
    subsequence(s,idx,semt);
    
    }else{
        return;
    }

}int main(){
    string st;
    cin>>st;
    vector<string> semt;
    subsequence(st,0,semt);
    semt.push_back(st);
    semt.push_back("");
    cout<<"Subsequence Possible are----------"<<endl;
    for (string n : semt){
        cout<<n<<" ";
    }
    
    
}
