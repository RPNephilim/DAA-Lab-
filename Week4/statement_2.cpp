#include<iostream>
#include<algorithm>
using namespace std;
int c=0;
int in=0;
void merge_sort(int a[],int mid,int low,int high)
{
    int b[high+1];
    int i=low;
    int j=mid+1;
    int k=low;
    while(i<=mid&&j<=high)
    {
        if(a[i]<a[j]){
            c++;
             b[k++]=a[i++];
        }
        else{
            c++;
             in++;
             b[k++]=a[j++];
        }
    }
    for(;i<=mid;i++)
    {
        b[k++]=a[i];
    }
    for(;j<=high;j++)
    {
        b[k++]=a[j];
    }
    for(int i=low;i<=high;i++)
    {
        a[i]=b[i];
    }
}
void mergesort(int a[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge_sort(a,mid,low,high);
    }
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
        mergesort(a,0,n-1);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        cout<<"Comparison= "<<c<<endl;
        cout<<"inversion= "<<in<<endl;
        t--;
    }
}