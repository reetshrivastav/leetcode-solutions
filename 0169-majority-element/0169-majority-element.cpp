class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> arr;
        int majority=0,maxCount=0;
        for(int n:nums){
            arr[n]++;
            if(arr[n]>maxCount){
                maxCount=arr[n];
                majority=n;
            }
        }
        
        return majority;
    }
};