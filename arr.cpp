#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    vector <int> arr(n);
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
     for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}