#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    void arraySearch(int x[],int key)
    {
        for(int i=0;x[i]!='\0';i++)
        {
            if(x[i]==key)
            {
                cout<<"Key is present."<<endl;
                cout<<"Number of comparisions = "<<i+1<<endl;
                return;
            }
        }
    }
};
int main()
{
    Solution sol;
    int t,arr[10]={1,10,3,45,20,67,4,12,8,50},key;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cout<<"Input Key: ";
        cin>>key;
        sol.arraySearch(arr,key);
    }
    return 0;
}