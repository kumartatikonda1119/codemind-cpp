#include<iostream>
using namespace std;
int main()
{
    int arr[5],s=0;
    for(int i=0;i<5;i++)
    {
       cin>>arr[i];
        s=s+arr[i];
        
    }
    float k=(s/500.0)*100.0;
    if(k>=90)cout<<"Grade A";
    else if(k>=80)cout<<"Grade B";
    else if(k>=70)cout<<"Grade C";
    else if(k>=60)cout<<"Grade D";
    else if(k>=40)cout<<"Grade E";
    else if(k<40)cout<<"Grade F";
}