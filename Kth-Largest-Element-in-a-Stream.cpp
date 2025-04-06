class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> minheap;
    int K;
    KthLargest(int k, vector<int>& nums) {
        K=k;
        for(int i=0; i<nums.size(); i++){
        int num = nums[i];
        minheap.push(num);

        if(K<minheap.size()){
            minheap.pop();

        }
      }  
    }
    
    int add(int val) {
      minheap.push(val);
      if(K<minheap.size()){
        minheap.pop();

        } 
        return minheap.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */