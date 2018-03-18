//
//  main.cpp
//  Uva 10019 - Funny Encryption Method
//
//  Created by S M HEMEL on 10/24/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

/*#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,cnt,i,k,t;
    cin >> t;
    while(t--)
    {
        cin >> a;
        i = a;
        cnt=0;
        while(i!=0)
        {
            if(i%2)
                cnt++;
            i/=2;
        }
        cout << cnt << " ";
        k=0;
        while(a!=0)
        {
            i+=(a%10)*pow(16,k++);
            a/=10;
        }
        cnt=0;
        while(i!=0)
        {
            if(i%2!=0)
                cnt++;
            i/=2;
        }
        cout << cnt <<endl;;
    }
    return 0;
}*/



#include <stdio.h>

int main() {
    int t;
    char s[10];
    scanf("%d", &t);
    while(t--) {
        scanf("%s", s);
        int x1, x2, b1 = 0, b2 = 0;
        sscanf(s, "%d", &x1);
        sscanf(s, "%x", &x2);
        while(x1)
            b1 += x1&1, x1 /= 2;
        while(x2)
            b2 += x2&1, x2 /= 2;
        printf("%d %d\n", b1, b2);
    }
    return 0;
}
