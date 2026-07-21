#include<iostream>
#include<string>
using namespace std;
int main()
{
    string dict[]={
        "A","Apple",
        "B","Boy",
        "C","Cat",
        "D","Dog"
    };
    string word;
    cout<<"Enter Word(A/B/C/D): ";
    cin>>word;
    cout<<dict[10].compare(word);
    return 0;


}