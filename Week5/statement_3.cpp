#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n;
        int m;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>m;
        int b[m];
        for(int i=0;i<m;i++)
        {
            cin>>b[i];
        }        
        int i=0;
        int j=0;
        int flag=0;
        while(i<n&&j<m)
        {
            if(a[i]==b[j])
            {
                flag=1;
                cout<<a[i]<<" ";
                i++;
                j++;
            }
            else if(a[i]>b[j])
                j++;
            else if(a[i]<b[j])
                i++;
        }
        if(flag==0)
        {
            cout<<"NO SUCH PAIR EXIST";
        }
        t--;
    }
}