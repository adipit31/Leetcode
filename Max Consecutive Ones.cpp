class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int  count = 0;
        int mcount = 0;
        for(int i = 0 ;i<nums.size() ; i++){
           if(nums[i] == 1){
            mcount++;
           }else{
               count = max(count,mcount);
               mcount = 0;
           }
        }
        count = max(count,mcount);
        return count;
        
    }
};
