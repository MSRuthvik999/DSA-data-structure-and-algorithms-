class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x;
        map<int,int> mpp;
        for(int i=0;i<size(nums);i++){
            mpp[nums[i]]++;
        }
        for(auto i:mpp){
            if(i.second == 1) x=i.first;
        }
        return x;
    }
};