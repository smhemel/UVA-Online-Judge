//
//  main.cpp
//  583 - Prime Factors
//
//  Created by S M HEMEL on 11/1/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

/*#include <iostream>
#define N 15000000
using namespace std;
long long prime[N+100];
void sieve()
{
    prime[0]=prime[1]=1;
    for (int i=2; i*i<N; i++)
    {
        if(prime[i]==0){
            for (int j=2*i; j<=N; j+=i)
                prime[j]=1;
        }
    }
}

int main()
{
    long long n;
    sieve();
    while (cin >> n)
    {
        if(n==0) break;
        if(n<0 && prime[abs(n)]==0)
            cout << n << " = -1 x " << abs(n) <<endl;
        else if (n>0 && prime[n]==0)
            cout << n << " = " << abs(n) <<endl;
        else
        {
            if(n<0) cout << n << " = -1 x ";
            else cout << n << " = ";
            n = abs(n);
            for (int i=2; i<=n; i++)
            {
                while(n%i==0)
                {
                    n = n/i;
                    if(prime[n]==0){
                        cout << i;
                        break;
                    }
                    cout << i << " x ";
                    if (n%i!=0) break;
                    
                }
                if (prime[n]==0){
                    cout << " x " << n;
                    break;
                }
            }
            cout <<endl;
        }
    }
    return 0;
}*/


#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int a,b,c,prime[100],i,root,check;
    while((cin >> a)&&a)
    {
        if(a==1 || a==-1)
            continue;
        check = 0;
        c = a;
        if(a<0) a = -a;
        root=sqrt(a);
        for(b=2,i=0; a!=1; b++)
        {
            if(a%b==0)
            {
                prime[i]=b;
                i++;
                a/=b;
                b=1;
            }
            else if (b>=root && i==0)
            {
                check=1;
                break;
            }
        }
        cout << c <<" = ";
        if (c<0 && check==1) cout <<"-1 x " << -c <<endl;
        else if (c>0 && check==1) cout << c <<endl;
        else
        {
            if (c<0) cout << "-1 x ";
            for(b=0; b<i; b++)
            {
                if (b==i-1) cout << prime[b] <<endl;
                else cout <<prime[b] <<" x ";
            }
        }
    }
    return 0;
}
