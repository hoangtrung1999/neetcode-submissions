class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int, int> heapMap;
        int size = numbers.size();
        auto it = heapMap.end();
        for (int i = 0; i < size; i++)
        {
            it = heapMap.find(target - numbers[i]);
            if (it == heapMap.end())
            {
                heapMap[numbers[i]] = i;
                cout<<"Key: "<<numbers[i]<<" Value: "<<i<<endl;
            }
            else
            {
                cout<<"Found: "<<target - numbers[i]<<" at: "<<it->first<<endl;
                
                vector<int> result = {it->second+1, i+1};
                return result;
            }
        }    
    }

};
