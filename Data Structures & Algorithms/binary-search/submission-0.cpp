class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size() - 1;
        int mid = ceil(l + (r-l)/2);
        int size = nums.size();
        while (l <= r)
        {
            cout<<"l: "<<l<<" r: "<<r<<" mid: "<<mid<<endl;
            cout<<nums[l]<<" "<<nums[r]<<" "<<nums[mid]<<endl;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
                r = mid - 1;
            else if (nums[mid] < target)
                l = mid + 1;
            mid = ceil(l + (r-l)/2);
        }
    return -1;
    }
};
