#include<iostream>
#include<algorithm>
using namespace std;
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
        sort(a,a+n);
        int i=0;
        int j=n-1;
        int flag=0;
        while(i<j)
        {
            if(a[i]+a[j]==key)
            {
                flag=1;
                cout<<a[i]<<" "<<a[j]<<", ";
                i++;
                j--;
            }
            else if(a[i]+a[j]>key)
            {
                j--;
            }
            else if(a[i]+a[j]<key)
            {
                i++;
            }
        }
        if(flag==0)
        {
            cout<<"NO SUCH PAIRS EXIST";
        }
        t--;
    }
}