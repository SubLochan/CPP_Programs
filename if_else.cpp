// program to Illustrate if else
#include<iostream>
using std::cin;
using std::cout;
int age;
int main()
{
cout<<"Enter Age: ";
cin>>age;
if(age>=18)
cout<<"Eligible to Vote\n";
else
cout<<"Not Eligible to vote\n";
return 0;
}