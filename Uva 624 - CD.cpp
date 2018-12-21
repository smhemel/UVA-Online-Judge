//
//  main.cpp
//  Uva 624 - CD
//
//  Created by S M HEMEL on 2/5/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//



#include <cstdio>
#include <vector>
using namespace std;
int track[21];
int N, T;
vector<int> Container;
vector<int> Ans;
int Maxsum;
void combination(int pos, int sum);
int main()
{
    while (scanf("%d %d", &N, &T) != EOF)
    {
        for(int i=0; i<T; i++)
            scanf("%d", &track[i]);
        Container.clear();
        Maxsum = 0;
        combination(0, 0);
        int sum = 0;
        for (int n : Ans) {
            printf("%d ", n);
            sum += n;
        }
        printf("sum:%d\n", sum);
    }
}
void combination(int pos, int sum)
{
    if (sum > Maxsum) {
        Ans = Container;
        Maxsum = sum;
        printf("Max = %d\n",Maxsum);
    }
    
    for(int i=pos; i<T; i++) {
        if (track[i] + sum <= N) {
            sum += track[i];
            printf("Sum = %d\n",sum);
            Container.push_back(track[i]);
            combination(i + 1, sum);
            sum -= track[i];
            printf("Sum1 = %d\n",sum);
            Container.pop_back();
        }
    }
}
