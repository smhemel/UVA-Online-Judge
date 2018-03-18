//
//  main.cpp
//  Uva - 12802 - Gift From the Gods
//
//  Created by S M HEMEL on 1/18/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
bool prime[1000010];
void seive()
{
    for(int i=4; i<1000010; i+=2)
        prime[i] = 1;
    prime[0] = prime[1] = 1;
    int root = sqrt(1000010);
    for(int i=3; i<=root; i+=2)
        if(!prime[i])
            for(int l=i*i; l<1000010; l+=2*i)
                prime[l] = 1;
}
int main()
{
    seive();
    long long int n;
    while (cin >> n)
    {
        long long int n1 = n,r=0;
        while (n1)
        {
            int temp = n1%10;
            r = r*10+temp;
            n1 /= 10;
        }
        long long int n2 = n<<1;
        cout << n2 << endl;
        if(n==r)
        {
            if(prime[r]==0)
                return 0;
        }
    }
    return 0;
}
