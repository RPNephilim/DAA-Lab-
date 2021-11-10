#include<iostream>
using namespace std;
int main()
{
    int t,flag=0;
    cin>>t;
    while (t)
    {
        int Steps=0;
        int n,i;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int key;
        cin>>key;
        i=0;
        while(i<n)
        {
            if(key==a[i]||key==a[i+2])
            {
                Steps++;
                flag=1;
                break;
            }
            else if(key>a[i]&&key<a[i+2]);
            {
                for(int j=i;j<i+2;j++)
                {
                    if(key==a[j])
                    {
                        Steps++;
                        flag=1;
                        break;
                    }
                    else
                        Steps++;
                }
            }
            if(flag==1)
            {
                break;
            }
        
                Steps++;
                i=i+2;
        }
        if(flag==1)
        {
            cout<<"Present "<<Steps;
            break;
        }
        else
        {
            cout<<"Not Present "<<Steps;
        }
        t--;
    }
    
}