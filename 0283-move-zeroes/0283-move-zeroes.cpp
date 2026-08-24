class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=n-1;
        for(int i=0;i<=n-1;i++){
            if(nums[i]!=0){
                int temp=nums[left];
                nums[left]=nums[i];
                nums[i]=temp;
                left++;
            } else{
                continue;
            }
        }
    }
};