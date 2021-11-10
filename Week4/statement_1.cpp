#include<iostream>
#include<algorithm>
using namespace std;
int c=0;
int s=0;
int partition(int a[],int low,int high)
{
    int pivot=a[low];
    int i=low;
    int j=high;
    do
    {
        do
        {
            c++;
            i++;
        } while (a[i]<=pivot);
        do
        {
            c++;
            j--;
        } while (a[j]>pivot);
        if(i<j){
            swap(a[i],a[j]);
            s++;
        }
    }while(i<j);
    s++;
    swap(a[low],a[j]);
    return j;
}
void quicksort(int a[],int low,int high)
{
    int loc;
    if(low<high)
    {
        loc=partition(a,low,high);
        quicksort(a,low,loc-1);
        quicksort(a,loc+1,high);
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
        quicksort(a,0,n);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        cout<<"Comparison= "<<c<<endl;
        cout<<"Swaps= "<<s;
        t--;
        c=0;
        s=0;
    }
}