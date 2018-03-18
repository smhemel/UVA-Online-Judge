//
//  main.cpp
//  Uva 10083- Division
//
//  Created by S M HEMEL on 10/9/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include<cmath>
#define digitMax 101
using namespace std;

int main()
{
    int t, a, b;
    int ans[digitMax], divisor[digitMax], tmp[digitMax];
    int i, j, k, count, bit;
    
    while(cin>>t>>a>>b)
    {
        if(a==b)
        {
            cout<<"("<<t<<"^"<<a<<"-1)/("<<t<<"^"<<b<<"-1) 1"<<endl;
            continue;
        }
        else if(a==0)
        {
            cout<<"("<<t<<"^"<<a<<"-1)/("<<t<<"^"<<b<<"-1) 0"<<endl;
            continue;
        }
        else if(b==0 || a%b!=0 || t==1 || (a-b)*log10(t)>99)
        {
            cout<<"("<<t<<"^"<<a<<"-1)/("<<t<<"^"<<b<<"-1) is not an integer with less than 100 digits."<<endl;
            continue;
        }
    
        
       for(i=0; i<digitMax; ++i){
            divisor[i] = 0;
            tmp[i] = 0;
        }
        count = 1;
        divisor[0] = 1;
        for(i=0; i<b; ++i){
            for(j=0; j<=count; ++j){
                divisor[j] *= t;
                if(j>0 && divisor[j-1]>9){
                    divisor[j] += divisor[j-1]/10;
                    divisor[j-1] %= 10;
                    if(j==count){
                        ++count;
                    }
                }
            }
        }
        
        ans[0] = 1;
        bit = 1;
        for(k=0; k<a/b-1; ++k){
            for(j=0; j<count; ++j){
                for(i=0; i<bit; ++i){
                    tmp[i+j] += ans[i]*divisor[j];
                }
            }
            tmp[0] += 1;
            bit += count-1;
            for(i=1; i<=bit; ++i){
                if(tmp[i-1]>9){
                    tmp[i] += tmp[i-1]/10;
                    tmp[i-1] %= 10;
                    if(i==bit){
                        ++bit;
                    }
                }
                ans[i-1] = tmp[i-1];
                tmp[i-1] = 0;
            }
        }
        
        cout<<"("<<t<<"^"<<a<<"-1)/("<<t<<"^"<<b<<"-1) ";
        for(i=bit-1; i>=0; --i){
            cout<<ans[i];
        }
        cout<<endl;
    }
    return 0;
}
