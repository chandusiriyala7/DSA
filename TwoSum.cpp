#include<iostream>

vector <int> TwoSum(vector <int> nums , int target)
{
    int n = nums.size();
    for (int i = 0; i < n-1; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(nums[i]+nums[j] == target)
            {
                return {i,j};
            }
        }
    }
    return {};
}

int main()
{
    vector <int> nums = {1,2,3,4,5,6,7,8,9};
    int target;
    cin >> target;
    cout << TwoSum(nums,target);
    return 0;
}