#include<iostream>
using namespace std;
#include<algorithm>
int binary_search(int a[],int low,int n,int key)
{
    if(low<=n)
    {
        int mid;
        mid=(low+n)/2;
        if(a[mid]==key)
            return 1;
        if(key>a[mid])  
            return binary_search(a,mid+1,n,key);
       if(key<a[mid])
            return binary_search(a,low,mid-1,key);      
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    int n,key,new_key;
    while (t)
    {
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        cin>>key;
        int c=0;
        for(int i=0;i<n;i++)
        {
            c=c+binary_search(a,0,n,key+a[i]);
        }
        cout<<c<<endl;
        t--;
    }
    
}