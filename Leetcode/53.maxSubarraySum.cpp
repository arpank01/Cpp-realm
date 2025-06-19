vector<int> soln;
   int current,maxs;
   current=0;
   maxs=nums[0];
   for(int i=0;i<nums.size();i++){
       current=current+nums[i];
       maxs=max(maxs,current);
       if(current<0){
           current=0;
       }
       
   }
   return maxs;
