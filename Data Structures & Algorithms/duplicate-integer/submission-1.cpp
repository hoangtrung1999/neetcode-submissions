class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int size = nums.size();
        map<int, int> heap;
        for (int i = 0; i < size; i++)
        {
            if (heap[nums[i]] > 0)
            {
                cout<<i<<" "<<heap[i]<<endl;
                return true;
            }
            else
            {
                heap[nums[i]] = 1;
                //cout<<i<<" "<<heap[i]<<endl;
            }
                
        }
        return false;
    }
};