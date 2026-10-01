#include<iostream.h>
#include<math.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
ofstream output ("simpson5.txt");
float f(float x)
{
return (1/(1+x*x));
}
int main()
{
int a,b,n,i;
float h,sum,x[20],fx[20];
cout<<"\n SIMPSON'S RULE"<<endl;
cout<<"\n Enter the values of lower and upper limit and number of intervals"<<endl;
cin>>a>>b>>n;
h=(b-a)/n;
for (i=0;i<=n;i++)
{
x[i] =a+i*h;
fx[i]=f(x[i]);
}
for (i=0;i<=n;i++)
{
if (i==0||i==n)
sum = sum+fx[i];
else if (i%2==0)
sum = sum +2*fx[i];
else
sum = sum + 4*fx[i];
}
sum = sum*(h/3);
output<<"\n The lower limit: "<<a<<endl;
output<<"\n The upper limit: "<<b<<endl;
output<<"\n No. of subintervals: "<<n<<endl;
output<<"\n The value of integral is : "<<sum<<endl;
return (0);
}

