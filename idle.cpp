//cpp program for checking a given number is prime not using
//three diiffferent functions with different time complexities
#include <iostream>
using namespace std;

//Naive Method
bool isPrime1(int n)
{
    if(n==1) return false;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        return false;
    }
    return true;
}
//Efficient Method
bool isPrime2(int n)
{
    if(n==1) return false;
    if(n==2 || n==3) return true;
    if(n%2==0 || n%3==0) return false;
    for(int i=5;i<=n;i=i+6)
    {
        if(n%i==0 || n%(i+2)==0)
        return false;
    }
    return true;
}
//More Efficient Method
bool isPrime3(int n)
{
    if(n==1) return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return false;
    }
}

int main()
{
    int num;
    cout<<"Enter Number :";
    cin>>num;
    if(isPrime3(num))
    cout<<"It is Prime";
    else
    cout<<"Not prime";
}