string triangleType(vector<int>& nums) {
        int big,othersum,bigind;
        big=nums[0];
        othersum=0;
        string type=" ";
        
       //to find biggest no 
        for(int i=0; i<3;i++){
            if(nums[i]>big){
                big=nums[i];
                bigind=i;
            }
           
            
        }
        
        //to find sum of the other two;
        for(int i=0; i<3;i++){
            if(i!=bigind){
                othersum=othersum+nums[i];
            }
          
            
        }
         
       
        //case 1 when triangle is possible
        if(othersum>big){
            
            //scalene and isosceles
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                   if(i!=j) {
                       if(nums[i]==nums[j]){
                      type="isosceles";
                      break;
                                            }
                    }
                    
                }
                
            }
            if(nums[1]!=nums[2] && nums[1]!=nums[0] && nums[2]!=nums[0]){
                type="scalene" ;
                
            }
            //equilateral case
            if(nums[0]==nums[1] && nums[1]==nums[2] && nums[0]==nums[2]){
                type="equilateral";
            }
            return type;
        }
        //case 2 when triangle is not possible
        else{
            return "none";
        }
       
        
    }
