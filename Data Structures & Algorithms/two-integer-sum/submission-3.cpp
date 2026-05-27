class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int, int> heapMap;
        int size = nums.size();
        int index_i;
        int index_j;
        auto it = heapMap.end();
        for (int i = 0; i < size; i++)
        {
            it = heapMap.find(target - nums[i]);
            cout<<"Finding: "<<target - nums[i]<<endl;
            if (it == heapMap.end())
            {
                heapMap[nums[i]] = i;
                cout<<"Saved to heapmap: "<<nums[i]<<" - "<<i<<endl;
            }
            else
            {
                index_i = distance(heapMap.begin(), it);
                cout<<"Found: "<<index_i<<" "<<i<<endl;
                cout<<heapMap[it->first]<<endl;
                vector<int> result = {heapMap[it->first], i};
                return result;
            }
        }
    }
};
