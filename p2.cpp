#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    string abc;
    cin>> abc; 
    do{
        cout << abc << endl;
    }while(next_permutation(abc.begin(),abc.end()));
    return 0;
}