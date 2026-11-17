class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int x = 0;
        int y = 0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]==1){
                x++;
                y = max(y,x);
            }
            else{
                x = 0;
            }
        }
        return y;

    }
};