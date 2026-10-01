#include<iostream.h>
#include<math.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
ofstream output("gweddle.txt");
float f(float x)
{
return(1/(1+x*x));
}
int main()
{
int n,i,m;
float a,b,h,sum=0.0,x[20],fx[20];
cout<<"\n Weddle's Rule"<<endl;
cout<<"\n Enter the value of lower limit:"<<endl;
cin>>a;
cout<<"\n Enter the value of upper limit:"<<endl;
cin>>b;
cout<<"\n Enter the no. of subintervals:"<<endl;
cin>>n;
output<<"\n The value of lower limit is:"<<a<<endl;
output<<"\n The value of upper limit is:"<<b<<endl;
output<<"\n The no. of subintervals is:"<<n<<endl;
h=(b-a)/n;
m=n/6;
if(n%6==0)
{
for (i=0;i<m;i++)
{
sum = sum+f(a)+5*f(a+h)+f(a+2*h)+6*f(a+3*h)+f(a+4*h)+5*f(a+5*h)+f(a+6*h);
a=a+6*h;
}
sum= sum *(3*h/10);
output<<"\n The value of integral is : "<<sum<<endl;
}
else
{
output<<"\n The weddle's rule is not applicable."<<endl;
}
return(0);
}