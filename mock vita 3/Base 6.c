
#include<stdio.h>
int main()
{
        int n,a[100],i,j,r,l=0,sum,m,b[100],count=0;
        scanf("%d\n",&n);
        for(i=0;i<n;i++)
        scanf("%d,",&a[i]);
        for(i=0;i<n;i++)
        {
            m=a[i];
            sum=0;
         while(m>=1)
         {
            r=m%6;
            sum=sum+r;
            m=m/6;
         }
         b[l]=sum;
         l++;
        }
        for(i=0;i<l;i++)
        {
               for(j=i+1;j<n;j++)
               {
                       if(b[i]>b[j])
                       count++;
                       
               }
        }
        printf("%d",count);
         return 0;
}
