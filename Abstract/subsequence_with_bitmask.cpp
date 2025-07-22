class Solution {
public:

   
    vector<string> generateAllSubsequences(string s) {
        vector<string>solu;
        int total =1<<s.size();
        for (int mask=0;mask<total;mask++){
            string st;
            for(int j =0;j<s.size();j++){
                //checking which bits are set in the mask
                if(mask & (1<<j)){
                    st.push_back(s[j]);
                }
            }
            solu.push_back(st);
        }


        return solu; // Placeholder
    }
};
