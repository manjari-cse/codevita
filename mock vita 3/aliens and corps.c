#include <stdio.h>

int main()
{
    int ar[100][3],corps,zandar,c,z,steps=1,i,n,b[100],j;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
    for(i=0;i<3;i++)
    {
        scanf("%d",&ar[j][i]);
    }
    }
    for(i=0;i<n;i++)
    { 
        steps=1;
        if(ar[i][0]==ar[i][2])
        {
        printf("1");
        return 0;
        }
        c=ar[i][2];
        z=ar[i][1];
        zandar=ar[i][0]+ar[i][1];
        corps=ar[i][2];
        while(zandar!=corps)
            {
                 while(zandar>corps)
                {
                corps=corps+c;
                steps++;
                }
               while(zandar<corps)
                {
                zandar=zandar+z;
                }   
            }
        b[i]=steps;
    }
    for(i=0;i<n;i++)
    printf("%d\t",b[i]);
    return 0;
}
