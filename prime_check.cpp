// program to check number is prime or not
#include<iostream>
using std::cin;
using std::cout;
using std::endl;
int n,i,c;
int main()
{
cout<<"Input Number: ";
cin>>n;
c=0;
for(i=2;i<=n/2;i++)
{
    if((n%i)==0)
    c++;
    else
    c=0;
}
if(c==0)
cout<<"Prime";
else
cout<<"Not Prime";
}
