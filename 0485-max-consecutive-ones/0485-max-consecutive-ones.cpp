class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ct1=0;
        int ct2=0;
        for(int i=0;i<size(nums);i++){
            if(nums[i]==1 ){
                ct1++;
            }
            if(ct2<ct1){
                ct2=ct1;
            }
            if(nums[i] == 0){
                ct1=0;
            }
        }
        return ct2;
    }
};