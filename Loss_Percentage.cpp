#include<iostream>
#include<iomanip>
#include<limits>
using namespace std;
int main()
{
    float a,b;
    cin>>a>>b;
    int c=a-b;
    float k=c/a*100.0;
   
    cout<<fixed<<setprecision(2)<<k;
}