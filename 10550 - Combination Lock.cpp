#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,a,b,c,res=0;

    while(1)
    {
        cin>>n>>a>>b>>c;
        if(n==0 && a==0 && b==0 && c==0)break;

        int r=abs(a-n);
        res=res+(r*9*2);
        int r1=abs(b-a);
        res=res+(r1*9);
        int r2=abs(c-b);
        res=res+(r2*9*2);

        cout<<res<<endl;
        res=0;
    }
}
