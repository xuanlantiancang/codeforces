#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long a[3];
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[2]-a[1]==a[0])
            cout<<"YES"<<endl;
        else if(a[0]==a[1]&&a[2]%2==0)
            cout<<"YES"<<endl;
        else if(a[1]==a[2]&&a[0]%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}