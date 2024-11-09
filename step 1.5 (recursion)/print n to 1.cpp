#include<iostream>
using namespace std;
 int  count(int n)
 {
  //base condition
 if(n==0)
 {
    return 1;
 }
 //recursive function

      cout<<n <<endl;

   count(n-1);
 



 }


int main()
{

    system("cls");
    int n;
    cin>>n;
    count(n);
    
}