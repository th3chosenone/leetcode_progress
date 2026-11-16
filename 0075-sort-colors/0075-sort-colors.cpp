class Solution {
public:
    void sortColors(vector<int>& nums) {
        int x = nums.size();
        for(int i = 0; i<x-1;i++){
            for(int j=0;j<x-1-i;j++){
                if(nums[j]> nums[j+1]){
                    swap(nums[j], nums[j+1]);
                }
            }
        }    
    }
};