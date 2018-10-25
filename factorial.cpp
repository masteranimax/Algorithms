#include<iostream>

using namespace std;
int main()
{  cout<<"Enter the no. ";
   int n;
   cin>>n;
   long f=1;
   for(int i=1;i<=n;i++)
     f=f*i;
   cout<<"The factorial of the no. is "<<f;  
return 0;}
