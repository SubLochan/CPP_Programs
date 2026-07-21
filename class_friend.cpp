#include<iostream>
using namespace std;
class Jimmy
{
    private:
    int k1=55;
    protected:
    char k3='H';
    public:
    float k2=7.32;
    friend void print(const Jimmy &L);
}L;
void print(const Jimmy &L)
{
    cout<<L.k1<<"\n"<<L.k2<<"\n"<<L.k3<<endl;
}
int main()
{
   print(L);
    return 0;
}