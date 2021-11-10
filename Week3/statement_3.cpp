#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>
int main()
{
    int t;
    cin>>t;
    int n;
    int c;
    while (t)
    {
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            cin>>c;
            v.push_back(c);
        }
        sort(v.begin(),v.end());
       int flag=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]==v[i+1])
            {
                flag=1;
            }
        }
        if(flag=1)
            cout<<"YES"<<endl;
        else
            cout<<"NO";
        t--;
    }
    
}