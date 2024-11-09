#include<bits/stdc++.h>
using namespace std;
int findgcd(int a,int b){
    if(b==0){
        return a;
    }
    return findgcd(b,a%b);
}
int main(){
    int a,b;
    cout<<"enter the value of a and b";
    cin>>a >>b;
    cout<<findgcd(a,b);
}