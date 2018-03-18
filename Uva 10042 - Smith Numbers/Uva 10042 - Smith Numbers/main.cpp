//
//  main.cpp
//  Uva 10042 - Smith Numbers
//
//  Created by S M HEMEL on 1/26/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define N 31623
int prime[50000];
bool is_prime(int n)
{
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for(int i=3; i<=ceil(sqrt(n)); i+=2)
        if (n % i == 0)
            return false;
    return true;
}
int l1=0;
void find_prime()
{
    prime[l1++] = 2;
    for(int i=3; i<N; i += 2)
        if (is_prime(i))
            prime[l1++] = i;
}
int digit_sum(int num)
{
    int sum = 0;
    while (num)
    {
        sum += (num % 10);
        num /= 10;
    }
    return sum;
}
int main()
{
    int cas, number;
    find_prime();
    cin >> cas;
    while (cas--)
    {
        cin >> number;
        int find_number = number + 1;
        while (1)
        {
            if (is_prime(find_number))
            {
                find_number++;
                continue;
            }
            int copy = find_number;
            int sum = digit_sum(find_number);
            int sum1 = 0;
            while (1)
            {
                int m = copy;
                for (int i = 0; i <l1; i++)
                    if (copy%prime[i] == 0)
                    {
                        copy /= prime[i];
                        sum1 += digit_sum(prime[i]);
                        break;
                    }
                if (copy==1 || m==copy)
                    break;
            }
            if (copy > 1)
                sum1 += digit_sum(copy);
            if (sum1 == sum)
            {
                cout << find_number << endl;
                break;
            }
            find_number++;
        }
    }
    return 0;
}
