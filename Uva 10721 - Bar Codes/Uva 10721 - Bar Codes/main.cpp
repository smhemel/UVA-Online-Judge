//
//  main.cpp
//  Uva 10721 - Bar Codes
//
//  Created by S M HEMEL on 11/10/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
long long dp[51][51][51];
int main()
{
    dp[0][0][0] = 1;
    int N, K, M;
    while (cin >> N >> K >> M)
    {
        long long ans = 0;
        for (int i=1; i<=N; i++)
            for (int k=1; k<=K; k++)
                for (int last = 1; last <= M; last++)
                {
                    dp[i][k][last] = dp[i-1][k][last-1];
                    if (last==1)
                        for (int l=0; l<=M; l++)
                            dp[i][k][last] += dp[i-1][k-1][l];
                    if (i==N && k==K)
                        ans += dp[i][k][last];
                }
        cin >> ans;
    }
    return 0;
}
