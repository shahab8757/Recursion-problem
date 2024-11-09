 #include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
   
   // Base Condition.
   if(i>n) return;
   
   cout<<"shahabuddin"<<endl;

   // Function call to print till i increments.
   func(i+1,n);

}

int main(){
  
  // Here, let’s take the value of n to be 4.
  int n = 4;
  func(1,n);
  return 0;

}


// wrong method 

/*#include<iostream>
using namespace std;
int print(int n){
//base condtiton
if(n==0)
return 1;
   // recursive call
   
   cout<<"shahabuddin" <<endl;
   print(n);
  
}

int main()
{
  system("cls");
  int n;
  cin>>n;
  print(n);
}
*/