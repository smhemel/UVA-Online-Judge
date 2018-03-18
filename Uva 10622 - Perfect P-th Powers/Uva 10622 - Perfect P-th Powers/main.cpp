//  main.cpp
//  Uva 10622 - Perfect P-th Powers
//
//  Created by S M HEMEL on 1/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

/*#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;
map<long long,int> power;
int main()
{
    long long n;
    int l;
    while(cin >> n)
    {
        if(!n)
            break;
        long long x = (n>=0) ? n: -n;
        power.clear();
        for(long long i=2; i*i<=x; i++) {
            while(x%i==0) {
                power[i]++;
                x/=i;
            }
        }
        if(x > 1)
            power[x]++;
        for(l=32; l>=1; l--)
        {
            bool found = true;
            for(typeof((power).begin()) k=(power).begin();k!=(power).end(); k++)
            {
                if(k->second%l != 0) {
                    found = false;
                    break;
                }
            }
            if(n>=0 && found)
                break;
            else if(n<0 && found && (l%2==1))
                break;
        }
        printf("%d\n",l);
    }
    return 0;
}*/



#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int n;
    while (cin >> n && n)
    {
        bool flag = true;
        if(n==1) {
            cout << "0" <<endl;
            continue;
        }
        if(n<0)
        {
            n = abs(n);
            flag = false;
        }
        long long int l = 0,p=1;
        while(p<=n){
            p = p*2;
            l++;
        }
        float n2 = 0;
        long long int n1 = 0;
        for(long long int i=l; i>0; i--)
        {
            n2 = 1.0/i;
            n1 = pow(n,n2);
            if(int(pow(n1,i))==n)
            {
                if(flag==true || i%2==1)
                    cout << i <<endl;
                else
                    cout <<"1"<<endl;
                break;
            }
            n2 = 0;
            n1  = 0;
        }
    }
    return 0;
}
