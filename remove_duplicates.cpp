
#include<iostream>
using namespace std;
int remove_duplicates(int arr[] , int n)
{
    int i = 0;
    for(int j = 0; j < n; j++)
    {
        if(arr[i] != arr[j])
        {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return (i+1);
}
int main()
{
    int n;
    cout << "Enter size of Array";
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << remove_duplicates(arr,n) << endl;
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}