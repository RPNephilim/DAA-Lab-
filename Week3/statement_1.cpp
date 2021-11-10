#include<iostream>
#include<algorithm>
using namespace std;
void insert_sort(int a[],int n)
{
    int j,c=0,s=0;
    for(int i=1;i<n;i++){
        j=i-1;
         int x=a[i];
        while(j>-1&&a[j]>x)
        {
            c++;
            a[j+1]=a[j];
            s++;
            j--;
        }
        a[j+1]=x;
        s++;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Comparisons: "<<c<<endl;
    cout<<"Shifts: "<<s<<endl;
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
        insert_sort(a,n);
    }
}