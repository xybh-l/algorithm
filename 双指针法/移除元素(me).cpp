#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
      for(vector<int>::iterator i=nums.begin();i!=nums.end();i++)
            if(*i==val)
            {
            	nums.erase(i);
            	i--;
            }
        return nums.size();
    }
};

int main()
{
    Solution s;
    int n[] ={0,1,2,2,3,0,4,2};
    int val = 2;
    vector<int> nums;
    nums.assign(n,n+8);
    cout << s.removeElement(nums,val);
}