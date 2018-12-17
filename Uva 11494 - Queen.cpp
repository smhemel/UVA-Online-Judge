//
//  main.cpp
//  Uva 11494 - Queen
//
//  Created by S M HEMEL on 2/7/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int ro[] = {0,0,-1,1,1,-1,-1,1};
int co[] = {1,-1,0,0,1,-1,1,-1};
bool chess[8][8];
bool flag = false;
void count(int a, int b, int c, int d)
{
    for(int i=0; i<8; i++)
    {
        int row = b;
        int coloum = a;
        while(1)
        {
            row += ro[i];
            coloum += co[i];
            if(row==d && coloum==c){
                flag = true;
                break;
            }
            if (row>8 || coloum>8 || row<1 || coloum<1)
                break;
            
        }
        if(flag==true){
            cout << "1" <<endl;
            break;
        }
    }
}
int main()
{
    int a,b,c,d;
    while ((cin >> a >> b >> c >> d) && a && b && c && d)
    {
        flag = false;
        if(a==c && b==d){
            cout << '0' << endl;
            continue;
        }
        count(a,b,c,d);
        if(flag==false)
            cout << "2" <<endl;
    }
    return 0;
}
