#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the numbers";
cin>>"num";
double numbers[n];
double sum=0.0;
for(int i=0;i<n;i++)
{
  cout<<"enter the number"<<i+1":
  cin>>numbers[i];
sum+=numbers[i];
}
double average=sum/n;
cout<<"sum:"<<sum<<end1;
cout<<"average:"<<average<<end1;
return 0;
}
