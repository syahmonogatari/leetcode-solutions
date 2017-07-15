class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        int left = 0;
        int right = size-1;
        int sum = 0;

        vector<int> sorted (nums);
        std::sort(sorted.begin(), sorted.end());

        vector<int> index;
        while(left < right){
        	sum = sorted[left] + sorted[right];
        	if(sum == target) {
        		for(int i = 0; i < size; i++) {
        			if(nums[i] == sorted[left]) {
        				index.push_back(i);
        			}
        			else if(nums[i] == sorted[right]) {
        				index.push_back(i);
        			}
        			if(index.size() == 2) {
        				return index;
        			}
        		}
        	}
        	else if(sum > target) {
        		right--;
        	}
        	else {
        		left++;
        	}

    	}
    }
};

