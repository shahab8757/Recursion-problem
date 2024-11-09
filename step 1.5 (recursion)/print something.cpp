#include<iostream>
using namespace std;

int cnt=0;
void print()
{
    // base condition
    if(cnt==11)
    return ;
    cout<<cnt <<endl;
    //count incremented
    cnt++;
    print();

}
int main()
{
    system("cls");
 print();
 return 0;
}