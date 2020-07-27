class Solution {
public:
int removeElement(vector<int>& nums, int val) {
  int count=0, j;
  for(int i=0;i<nums.size();i++){
    if(nums[i] == val && nums[i] != -1) {
      for(j=i;j<nums.size()-1;j++){
        nums[j] = nums[j+1];
      }
      nums[j+1] = -1;
      i--;
    }
  }
  for(int i=0;i<nums.size();i++){
    if(nums[i] == -1) break;
    else count++;
  }
  return count;  
  }
};