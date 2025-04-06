class Solution {
public:
    int binarysearch(vector<int>& nums, int target,int s, int e) {
        if(s>e){
            return -1;
        } 
        int mid = s+(e-s)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(target>nums[mid]){
            return binarysearch(nums,target,mid+1,e);
        }
        else{
            return binarysearch(nums,target,s,mid-1);
        }
    }
    int search(vector<int>& nums, int target){
        return binarysearch(nums, target, 0 , nums.size() -1 );
    }

};