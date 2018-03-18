//
//  main.cpp
//  Uva 11340 - Newspaper
//
//  Created by S M HEMEL on 28/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>
using namespace std;
map<char,int> M;
int main(){
    int test,k,n,x;
    char c;
    scanf("%d",&test);
    while(test--) {
        double sum = 0;
        string s = "";
        scanf("%d",&k);
        for(int i=0; i<k ;i++){
            scanf("%c%d",&c,&x);
            M[c] = x;
        }
        scanf("%d",&n);
        cin.ignore();
        while(n--){
            getline(cin, s);
            for(int i=0; s[i]; i++)
                sum += M[s[i]];
        }
        printf("%.2lf$\n",sum/100);
        M.clear();
    }
    return 0;
}
