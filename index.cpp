#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main()
{
   int i,n,t,a[5],max=0,maxi;
    a[0]=0;
    a[1]=0;
    a[2]=0;
    a[3]=0;
    a[4]=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        a[t-1]+=1;
    }
    for(i=0;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            maxi=i+1;
        }
    }
    printf("%d",maxi);
    return 0;
}
