// program to print prime numbers upto n
#include<iostream>
using std::cin;
using std::cout;
int main()
{
    int n,i,j,c;
    cout<<"Input N: ";
    cin>>n;
    for(i=2;i<=n;i++)
    { c=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            c++;
        }
            if(c==0)
            printf("%d\t",i);
        
    }
}