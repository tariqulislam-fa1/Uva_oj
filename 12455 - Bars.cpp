#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,n,p,sum,i;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n,&p);
        int arr[p],c=0;
        for(int l=0; l<p; l++)
            scanf("%d",&arr[l]);


        for(i=0; i<(1<<p); i++)
        {
            sum=0;
            for(int j=0; j<p; j++)
                if(i & (1<<j))
                    sum+=arr[j];
            if(sum==n)
            {
                printf("YES\n");
                c=1;
                break;
            }

        }
        if(c==0)
        printf("NO\n");

    }
}
