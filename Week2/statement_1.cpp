#include<iostream>
#include<algorithm>
using namespace std;
int binary_search(int a[],int low,int n,int key)
{
     if(low<=n)
    {
        int mid,i=0;
        mid=(low+n)/2;
        if(a[mid]==key)
            {
                if(a[mid+1]==key)
                {
                    while(mid<n&&a[mid]==key)
                    {
                        i++;
                        mid++;
                    }
                }
                if(a[mid-1]==key)
                {
                     while(mid>low&&a[mid]==key)
                    {
                        i++;
                        mid--;
                    }
                }
                return i;
            }
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
    int n,key,result=0;
    while (t)
    {
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        cin>>key;
        result= binary_search(a,0,n,key);
        cout<<key<<"- "<<result;
        t--;
}
}