int maxProfit(vector<int>& prices) {
                int high , low, profit, n , idx;
        n=sizeof(prices)/sizeof(int);
        high=0;
        low=prices[0];
        vector<int>newv;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if((high)<(prices[j]-prices[i])){
                    high=prices[j]-prices[i];
                }
                
                
            }
        }
        
        for(int k=0;k<newv.size();k++){
            if(high<newv[k]){
                high=newv[k];
            }
        }
        
    
    
    
        
        return high;
    }
