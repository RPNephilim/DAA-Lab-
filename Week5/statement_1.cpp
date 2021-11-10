#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t)
    {
        int n;
        cin>>n;
        char a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int alpha[27]={0};
        for(int i=0;i<n;i++)
        {
            alpha[a[i]-97]++;
        }
        for(int i=0;i<27;i++)
        {
            if(alpha[i]>1)
            {
                char c=i+97;
                cout<<c<<"-"<<alpha[i]<<endl;
            }
        }
        t--;
    }
}