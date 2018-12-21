//
//  main.cpp
//  Uva 355 - The Bases Are Loaded
//
//  Created by S M HEMEL on 1/29/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <algorithm>
#include <cstdlib>
#include <cmath>
using namespace std;
int convert(char *c, int base)
{
    //convert any Number to other Base
    int res = 0,power = 1;
    int n = (int) strlen(c)-1;
    for(int i=n; i>=0; i--)
    {
        if(c[i]<='9' && c[i]>='0')
            res=res+power*(c[i]-'0');
        else
            res = res + power*(c[i]-'A'+10);
        power *= base;
    }
    return res;
}
long int convert_o(long int num,int base)
{
    long int res=num%base,div = num/base,r=1;
    while(div!=0)
    {
        r = r*10;
        res = ((div%base)*r)+res;
        div = div/base;
    }
    return res;
}
int main()
{
    char c[100];
    int a,b;
    while (scanf("%d%d%s",&a,&b,c)!=EOF)
    {
        int flag = 0;
        int gf = 0,r,sum=0;
        int l = (int)strlen(c);
        for(int i=l-1;i>=0;i--)
        {
            r = c[i];
            if(r>=48&&r<=57)
                sum = sum + (r-48)*pow(a,l-i-1);
            else
                sum = sum + (r-55)*pow(a,l-i-1);
        }
        if(sum==0){
            printf("0 base %d = 0 base %d\n",a,b);
            continue;
        }
        for(int t=0; t<l; t++)
        {
            if(c[t]>='A'&&c[t]<='F')
                gf = c[t]-55;
            else
                gf = c[t]-'0';
            if(gf>=a)
                flag = 1;
        }
        if(flag==1)
        {
            cout<<c<<" is an illegal base "<<a<<" number"<<endl;
            continue;
        }
        long int x = convert(c,a);
        long int y = convert_o(x,b);
        printf("%s base %d = %ld base %d\n",c,a,y,b);
    }
    return 0;
}
