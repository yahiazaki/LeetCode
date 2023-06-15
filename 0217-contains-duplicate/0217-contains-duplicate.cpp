#include <set>
#include <vector>

class Solution {
public:
    set <int> s;
    
    bool containsDuplicate(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
                if(s.count(nums.at(i)))
                    return true;
                else
                s.insert(nums.at(i));
        }

        return false;
    
    }
};