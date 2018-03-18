//
//  main.cpp
//  UVa 11636 Hello World
//
//  Created by S M HEMEL on 11/1/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,j=1;
    while((cin >> a) && (a>=0))
    {
        if(a==1) cout <<"Case "<< j <<": 0"<<endl;
        for(int i=0;i<14;i++)
            if(pow(2,i)<a && a<=pow(2,i+1))
                cout <<"Case "<< j << ": " << i+1 <<endl;
        j++;
    } 
    return 0;
}
