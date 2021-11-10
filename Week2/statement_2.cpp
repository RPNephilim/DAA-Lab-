#include<iostream>
#include<algorithm>
using namespace std;
int binary_search(int a[],int low,int n,int key)
{
    if(low<=n)
    {
        int mid;
        mid=(low+n)/2;
        if(a[mid]==key)
            return mid+1;
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
    int n,i,k;
    while(t)
    {
        int flag=0;
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                int key=a[i]+a[j];
                k=binary_search(a,0,n,key);
                if(k)
                {
                    cout<<i+1<<" "<<j+1<<" "<<k<<endl;
                    flag=1;
                }
            }
            if(flag==1)
                break;
        }
        if(flag==0)
        {
            cout<<"NO SEQUENCE FOUND"<<endl;
        }
        t--;
    }
}