//
//  main.cpp
//  Uva UVa Problem Solution 10222 - Decode the Mad man
//
//  Created by S M HEMEL on 9/23/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
    char l[200];
    int i,len;
    while(gets(l))
    {
        len = (int)strlen(l);
        for(i=0;i<len;i++)
        {
            switch(l[i])
            {
                case ']':
                    printf("p");
                    break;
                case '[':
                    printf("o");
                    break;
                case 'p':
                case 'P':
                    printf("i");
                    break;
                case 'o':
                case 'O':
                    printf("u");
                    break;
                case 'i':
                case 'I':
                    printf("y");
                    break;
                case 'u':
                case 'U':
                    printf("t");
                    break;
                case 'y':
                case 'Y':
                    printf("r");
                    break;
                case 't':
                case 'T':
                    printf("e");
                    break;
                case 'r':
                case 'R':
                    printf("w");
                    break;
                case 'e':
                case 'E':
                    printf("q");
                    break;
                case 'w':
                case 'W':
                    printf("w");
                    break;
                case 'q':
                case 'Q':
                    printf("q");
                    break;
                case '"':
                    printf("l");
                    break;
                case ';':
                case ':':
                    printf("k");
                    break;
                case 'l':
                case 'L':
                    printf("j");
                    break;
                case 'k':
                case 'K':
                    printf("h");
                    break;
                case 'j':
                case 'J':
                    printf("g");
                    break;
                case 'h':
                case 'H':
                    printf("f");
                    break;
                case 'g':
                case 'G':
                    printf("d");
                    break;
                case 'f':
                case 'F':
                    printf("s");
                    break;
                case 'd':
                case 'D':
                    printf("a");
                    break;
                case '/':
                case '?':
                    printf(",");
                    break;
                case '.':
                case '>':
                    printf("m");
                    break;
                case ',':
                case '<':
                    printf("n");
                    break;
                case 'm':
                case 'M':
                    printf("b");
                    break;
                case 'n':
                case 'N':
                    printf("v");
                    break;
                case 'b':
                case 'B':
                    printf("c");
                    break;
                case 'v':
                case 'V':
                    printf("x");
                    break;
                case 'c':
                case 'C':
                    printf("z");
                    break;
                case 'x':
                case 'X':
                    printf("x");
                    break;
                case 'z':
                case 'Z':
                    printf("z");
                    break;
                case '\'':
                    printf("l");
                    break;
                case '=':
                    printf("0");
                    break;
                case '-':
                    printf("9");
                    break;
                case '0':
                    printf("8");
                    break;
                case '9':
                    printf("7");
                    break;
                case '8':
                    printf("6");
                    break;
                case '7':
                    printf("5");
                    break;
                case '6':
                    printf("4");
                    break;
                case '5':
                    printf("3");
                    break;
                case '4':
                    printf("2");
                    break;
                case '3':
                    printf("1");
                    break;
                case '2':
                    printf("`");
                    break;
                default:
                    cout << l[i];
            }
        }
        cout <<endl;
    }
    return 0;
}
