#include<iostream>
#include<algorithm>
using namespace std;
void select_sort(int a[],int n)
{
    int k,c=0,swp=0;;
    for(int i=0;i<n-1;i++)
    {
        for(int j=k=i;j<n;j++)
        {
            if(a[j]<a[k])
            {
                k=j;
            }
            c++;
        }
        if(k!=i){
            swp++;
            swap(a[i],a[k]);
            }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Comparisons: "<<c<<endl;
    cout<<"Swaps: "<<swp<<endl;
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
        select_sort(a,n);
        t--;
    }
}