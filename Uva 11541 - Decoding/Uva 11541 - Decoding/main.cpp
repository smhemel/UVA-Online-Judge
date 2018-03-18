//
//  main.cpp
//  Uva 11541 - Decoding
//
//  Created by S M HEMEL on 12/27/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include <string>
using namespace std;

int main(){
    int n,cases=1;
    string line;
    scanf("%d",&n);
    getline(cin,line);
    while(n--){
        getline(cin,line);
        cout<<"Case "<<cases<<": ";
        cases++;
        int tam=(int)line.size();
        for(int i=0;i<tam;)
        {
            char let;
            let=line[i];
            i++;
            int num=0;
            while(isdigit(line[i])){
                num= (10 * num) + (line[i]-'0');
                i++;
            }
            for(int j=0;j<num;j++){
                cout<<let;
            }
        }
        cout<<endl;
    }
    return 0;
}
