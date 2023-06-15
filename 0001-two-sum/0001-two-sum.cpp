class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int>v;
        unordered_map<int, int> map1;
        int value;
        
        for(int i=0;i<nums.size();i++)
        {
            value=target-nums.at(i);

            if (map1.count(value))
			    v = { map1[value],i };
		    else
			    map1[nums.at(i)] = i;

        }
            return v;
    }
};