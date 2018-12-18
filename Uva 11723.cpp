#include<stdio.h>
#include <math.h>
int main()
{
    int a,b,x=0;
    double y;
    int i;
    for(i=0 ; i<10002 ; i++)
    {
        scanf("%d%d",&a,&b);
        if(a==0 && b==0 )
        {
            break;
        }
        printf("Case %d: ",i+1);
        if(a<b)
        {
            printf("%d\n",x);
        }
        else
        {
            if(a>(26*b)+b)
            {
                printf("impossible\n");
            }
            else
            {
                y = ceil((a-b)/(b-2.0 +2));
                printf("%.0lf\n",y);
            }
        }
    }
    return 0;
}
