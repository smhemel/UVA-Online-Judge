//
//  main.cpp
//  Uva 12347 - Binary Search Tree
//
//  Created by S M HEMEL on 30/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
struct Tree {
    int val = 0;
    Tree *L = NULL;
    Tree *R = NULL;
};
Tree * Pre_Order_Insert(Tree *H, int nodeValue)
{
    Tree *N = new Tree;
    N->val = nodeValue;
    if (H == NULL) return N;
    Tree *Temp = H, *nxt = H;
    while (nxt != NULL)
    {
        Temp = nxt;
        if(nodeValue > nxt->val) nxt = nxt->R;
        else nxt = nxt->L;
    }
    if(nodeValue> Temp->val) Temp->R = N;
    else Temp->L = N;
    return H;
}

void Post_Order(Tree *Root)
{
    if(Root == NULL) return;
    Post_Order(Root->L);
    Post_Order(Root->R);
    printf("%d\n", Root->val);
}

int main()
{
    Tree *MyBSTree = NULL;
    int node;
    while (scanf("%d",&node) != EOF)
    {
        MyBSTree = Pre_Order_Insert(MyBSTree,node);
    }
    Post_Order(MyBSTree);
    return 0;
}
