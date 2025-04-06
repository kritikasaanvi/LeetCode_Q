class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        //min heap
        priority_queue<int,vector<int>, greater<int>> minheap;
        for(int i=0;i<nums.size();i++){
            int num = nums[i];
            minheap.push(num);

            if(minheap.size()>k){
                minheap.pop();
            }
        }
         return minheap.top();
    }
};