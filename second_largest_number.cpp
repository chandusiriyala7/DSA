#include<iostream>
using namespace std;

int second_largest(int arr[],int n)
{
    int max1 = arr[0];
    int max2 = -1;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max1)
        {
            int temp =  max1;
            max1 = arr[i];
            max2 = temp;
        }
        if(arr[i] > max2  and arr[i] < max1)
        {
            arr[i] = max2;
        }
    }
    return max2;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n ; i++)
    {
        cin >> arr[i];
    }
    cout << second_largest(arr,n);
    return 0;
}