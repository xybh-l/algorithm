#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int i = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[j] != val)
            {
                nums[i] = nums[j];
                i++;
            }
        }
        return i;
    }
};

int main()
{
    Solution s;
    int n[] = {0, 1, 2, 2, 3, 0, 4, 2};
    int val = 2;
    vector<int> nums;
    nums.assign(n, n + 8);
    cout << s.removeElement(nums, val);
}
