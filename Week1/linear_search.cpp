#include<iostream>
using namespace std;
int main()
{
    int t,ele,i,step=0,n;
    cout<<"Enter the Number of test cases: ";
    cin>>t;
    while(t)
    {
        cout<<"Enter the number of elements : ";
        cin>>n;
        int a[n];
        cout<<"Enter the values in array : ";
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"\nEnter the Element you want to search : ";
        cin>>ele;
        int flag=0;
        for(i=0;i<n;i++)
        {
            if(a[i]==ele)
            {
                flag=1;
                break;
            }
            step++;
        }
        if(flag==1)
        {
            cout<<"Element found at index = "<<i<<endl;
            cout<<"Steps taken = "<<step<<endl;
        }
        else
        {
            cout<<"Element not found"<<endl;
        }
        t--;
    }
    return 0;
}