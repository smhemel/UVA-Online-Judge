//
//  main.cpp
//  Uva 294 - Divisors
//
//  Created by S M HEMEL on 1/12/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

/*#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
    int count,t,a,b,c = 0,k;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&a,&b);
        int max=0;
        k = a;
        for(; a<=b; a++)
        {
            count = 2;
            if(a==1)
                count--;
            int j=a;
            for(int i=2; i<j; i++)
            {
                if(a%i==0)
                    count+=2;
                j=a/i;
                if((double)a/i==i)
                    count--;
            }
            if(count>max)
            {
                max=count;
                c=a;
            }
        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",k,b,c,max);
    }
    return 0;
}*/


#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int cases;
    scanf("%d",&cases);
    while(cases--){
        int l,u;
        double temp,cont;
        int num=0,numd=0;
        cin>>l>>u;
        for(int i=l;i<=u;i++){
            temp=pow(i,0.5);
            cont=0;
            for(int j=1;j<=temp;j++){
                if(i%j==0){
                    cont++;
                    if(j<temp) cont++;
                }
            }
            if(cont>numd){
                numd=(int)cont;
                num=i;
            }
        }
        cout<<"Between "<<l<<" and "<<u<<", "<<num<<" has a maximum of "<<numd<<" divisors."<<endl;
    }
    return 0;
}
