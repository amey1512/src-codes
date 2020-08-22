class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int firstSmallest= -1, secondSmallest = -1;
        
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i] > nums[i-1]) {
                firstSmallest = i-1;
                break;
            }
        }
        if(firstSmallest == -1) {
            reverse(nums.begin(), nums.end());
        }
        else{
            for(int i=nums.size()-1;i>firstSmallest;i--){
                if(nums[i] > nums[firstSmallest]) {
                    secondSmallest = i;
                    break;
                }
            }
            swap(nums[firstSmallest], nums[secondSmallest]);
            reverse(nums.begin()+firstSmallest+1, nums.end());
        }
    }
};
