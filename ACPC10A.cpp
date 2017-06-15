// #include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    while(1){
        int a,b,c;
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0){
            break;
        }else{
            if(b-a == c-b){
                cout<<"AP "<<b-a+c<<endl;
            }else{
                cout<<"GP "<<c*(b/a)<<endl;
            }
        }
    }
    return 0;
}