//
//  main.cpp
//  Uva 1185 - Big Number
//
//  Created by S M HEMEL on 2/5/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

/*#include <stdio.h>
#include <math.h>

double a[10000001];

int main()
{
    int n, i, t;
    a[1]=1;
    for(i=2; i<=10000001; i++){
        a[i]=a[i-1]+log10(i);
    }
    while(scanf("%d", &t)==1){
        while(t--){
            scanf("%d", &n);
            printf("%d\n", (int)a[n]);
        }
    }
    return 0;
}*/



#include <iostream>
using namespace std;
int numInput = 0;
int input[1000];

int main() {
    cin >> numInput;
    for (int i=0; i<numInput; i++) {
        cin >> input[i];
    }
    for (int i=0; i<numInput; i++) {
        int numDigits = 1;
        double number = (double)input[i];
        for (int x = number-1; x>0; x--) {
            while (number >= 10.0) {
                numDigits++;
                number /= 10.0;
            }
            number *= x;
        }
        cout << numDigits << endl;
    }
    cin >> numInput;
    
    return 0;
}
