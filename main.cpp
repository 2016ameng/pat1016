//
//  main.cpp
//  pat1016
//
//  Created by 董依萌 on 2017/5/26.
//  Copyright © 2017年 董依萌. All rights reserved.
//

#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int x1,y1;
    string x,y;
    int a=0,c=0,d=0,i=0,j=0;
    cin>>x;
    cin>>x1;
    cin>>y;
    cin>>y1;
    while(x[i]){
        a=(x[i]-'0')%10;
        if(a==x1){
            if(c==0)
                c=x1;
            else
                c=c*10+x1;
        }
        i++;
    }
    while(y[j]){
        a=(y[j]-'0')%10;
        if(a==y1){
            if(d==0)
                d=y1;
            else
                d=d*10+y1;
        }
        j++;
    }
    cout<<c+d;
    return 0;
}
