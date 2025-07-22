#include <iostream>
#include <string>
#include <vector>
using namespace std;
void perm(string s, int i , int j , vector<string>&solu){
    if(i==s.size()-1){
        solu.push_back(s);
        return;
   
        
    }
    j=i;
    string original;
    original=s;
    while(j<s.size()){
        swap(s[i],s[j]);
        
        perm(s,i+1,i+1,solu);
        j++;
        s=original;
    } 
}

int main() {
    // Write C++ code here
    vector<string>solu;
    string h = "abc";
    perm(h,0,0,solu);
    int i =1;
    for(string n : solu){
        cout<<n<<" "<<i<<endl;
        i++;
    }

    return 0;
}
