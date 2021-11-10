#include<iostream>
using namespace std;
int Steps;
int binary_search(int a[],int low,int high,int key)
{
    Steps=0;
    for(int i=low;i<high;i++)
    {
        int mid=(low+high)/2;
        if(a[mid]==key)
            return 1;
        else
        {
            if(key>a[mid])
            {
                Steps++;
                low=mid;
                continue;
            }
            else if(key<a[mid])
            {
                Steps++;
                high=mid;
                continue;
            }
        }
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
        int x=binary_search(a,0,n,key);
        if(x==1)
        {
            cout<<"Present "<<Steps<<endl;
        }
        else
        {
            cout<<"Not Present "<<Steps<<endl;
        }
        t--;
    }

}
