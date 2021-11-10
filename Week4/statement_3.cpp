#include<iostream>
#include<algorithm>
using namespace std;
int partiton1(int a[],int low,int high)
{
    int pivot=a[low];
    int i=low;
    int j=high;
    do
    {
       while(a[i]<=pivot)
            i++;
        while (a[j]>pivot)
        {
            j--;
        }
        
    if(i<j)
    {
        swap(a[i],a[j]);
    }
    } while (i<j);
    swap(a[low],a[j]);
    return j;
}
int klargest(int a[],int low,int high,int key)
{
    int loc;
    while(low<high)
    {
        loc=partiton1(a,low,high);
        if(loc==key)
            return a[loc];
        else if(loc>key)
            high=loc-1;
        else if(loc<key)
            low=loc+1;
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int key;
        cin>>key;
        int ans=klargest(a,0,n-1,key-1);
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
        cout<<"Answers : "<<ans;
    }
}