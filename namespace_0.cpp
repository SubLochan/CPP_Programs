#include<iostream>
using namespace std;
namespace parent
{
    namespace child{
        int k=10;
    }
}

int main()
{
    cout<<parent::child::k;
    return 0;
}