

#include <stdio.h>

int main()
{
    int a[100],b[100][2],i,j,S,R,count=0,k;
    scanf("%d%d",&S,&R);
    for(i=0;i<S;i++)
    scanf("%d",&a[i]);
    for(i=0;i<R;i++)
    {
        scanf("%d%d",&b[i][0],&b[i][1]);
    }
    for(j=0;j<R;j++)
    {
    	count=0;
    for(i=0;i<S;i++)
    {
        for(k=b[j][0];k<=b[j][1];k++)
        {
        if(a[i]==k)
        count++;
        }
    }
       printf("%d\n",count);
    }
 
    

    return 0;
}
