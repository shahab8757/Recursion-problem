#include<iostream>
using namespace std;
 int  count(int n)
 {

 if(n==0)
 {
    return 1;
 }

   count(n-1);
 cout<<n <<endl; 
 }


int main()
{

    system("cls");
    int n;
    cin>>n;
    count(n);
    
}