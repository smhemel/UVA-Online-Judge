#include<stdio.h>

int main()
{
    long long num,actual;
    int taka,cas = 1;
    while(scanf("%lld",&num)!=EOF)
    {
        actual = num;
        printf("%4d.",cas++);
        if(!num)printf(" 0");
        taka = num/100000000000000;
        num%=100000000000000;
        if(taka)
            printf(" %d kuti",taka);
        taka = num/1000000000000;
        num%=1000000000000;
        if(taka)
            printf(" %d lakh",taka);
        taka = num/10000000000;
        num%=10000000000;
        if(taka)
            printf(" %d hajar",taka);
        taka = num/1000000000;
        num%=1000000000;
        if(taka)
            printf(" %d shata",taka);
        taka = num/10000000;
        num%=10000000;
        if(actual>10000000 && !taka)
            printf(" kuti");
        if(taka)
            printf(" %d kuti",taka);
        taka = num/100000;
        num%=100000;
        if(taka)
            printf(" %d lakh",taka);
        taka = num/1000;
        num%=1000;
        if(taka)
            printf(" %d hajar",taka);
        taka = num/100;
        num%=100;
        if(taka)
            printf(" %d shata",taka);
        if(num)
            printf(" %lld",num);
        printf("\n");
    }
    
    return 0;
}
