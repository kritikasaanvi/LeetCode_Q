class Solution {
public:
    int search(vector<int>& nums, int target) {
       int low=0;
       int high=nums.size()-1;

       while(high>=low){
        int mid = low + (high-low)/2;
        if(target==nums[mid]) return mid;
        //left half sorted case
        if(nums[low]<=nums[mid]){
            if(nums[low]<=target && nums[mid]>target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        //right half sorted case
        else{
            if(nums[mid]<target && nums[high]>=target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
       }
       return -1;
    }
};