class Solution {
public:
     void reverse(vector<char>& s,int start,int end){
        if(start>end){
            return s;
        }
         swap(s[start],s[end]);
       reverse(s,start+1,end-1);
     }
     vector<char> reverseString(vector<char>& s) {
          int end=s.size()-1;
          reverse(s,0,end);
       return s;
    }
};
