//This Program is to remove a particular value in the Array or Vector
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector <int> remove_value(vector <int> nums,int n,int val)
{
    int index = 0;
    for(int i = 0; i < n;i++)
    {
        if(nums[i] != val)
        {
            nums[index] = nums[i];
            i++;
        }
    }
    return index;
}

int main()
{
    int n,val;
    cin >> n >> val;
    vector <int> nums;;
    for(int i = 0; i < n; i++)
    {
        int temp; 
        cin >> temp;
        nums.push_back(temp);
    }
    vector <int> ans = remove_value(nums,n,val);
    for(auto k : ans)cout << k << " ";
    return 0;
}
