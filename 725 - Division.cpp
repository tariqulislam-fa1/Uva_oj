#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int N,c,d=0;


    while(1)
    {
        c=0;
        scanf("%d",&N);
        if(N==0)
            break;
            if(d++)cout<<endl;
        for(int fghij=1234; fghij<=98765/N; fghij++)
        {
            int abcde=(fghij*N);
            int temp,used=(fghij<10000);

            temp=abcde;
            while(temp)
            {
                used=used|(1<<(temp%10));
                temp/=10;
            }

            temp=fghij;
            while(temp)
            {
                used=used|(1<<(temp%10));
                temp/=10;
            }

            if(used==(1<<10)-1)
            {
                c++;
                printf("%0.5d / %0.5d = %d\n",abcde,fghij,N);
            }

        }
        if(c==0)
            printf("There are no solutions for %d.\n",N);


    }
}
