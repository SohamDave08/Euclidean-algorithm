#include "iostream"
using namespace std;

int GCD(int a, int b)
{
    if(a==0)
        return b;
    
    return GCD(b%a,a);
}

int main()
{
    int a,b;
    cout<<endl<<endl<<"Enter 2 numbers you want to find GCD for:\n";
    cin>>a>>b;
    int result = GCD(a,b);
    cout<<"\nGCD("<<a<<","<<b<<") = "<<result<<endl;
    return 0;
}