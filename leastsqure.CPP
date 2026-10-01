#include<fstream.h>
#include<conio.h>
#include<iomanip.h>
#include<math.h>
#include<iostream.h>
ofstream  output("leastsquare.txt");
int main()
{
int i,n;
float a,b,sumx=0.0, sumxx=0.0, sumy=0.0, sumxy=0.0,x[100],y[100],yfit[100];
cout<<"\n Enter the values of data points 'n': "<<endl;
cin>>n;
cout<<"\n Enter the values of x"<<endl;
for(i=0;i<n;i++)
{
cin>>x[i];
}
cout<<"\n Enter the values of y "<<endl;
for(i=0;i<n;i++)
{
cin>>y[i];
}
for(i=0;i<n;i++)
{
sumx = sumx+x[i];
sumy = sumy+y[i];
sumxy = sumxy+x[i]*y[i];
sumxx = sumxx+ x[i]*x[i];
}
a= ((sumxx*sumy)-(sumx*sumxy))/(n*sumxx-(sumx*sumx));
b=(n*sumxy-(sumx*sumy))/(n*sumxx-(sumx*sumx));
output<<"The Value of intercept is:"<<a<<endl;
output<<"The value of slope is:"<<b<<endl;
output<<"The equation of line is:"<<a<<"+"<<b<<"x"<<endl;
output<<setw(8)<<"x"<<setw(8)<<"y"<<setw(15)<<"yfit"<<endl;
for(i=0;i<n;i++)
{
yfit[i] = a+b*x[i];
output<<setw(8)<<x[i]<<setw(8)<<y[i]<<setw(15)<<yfit[i]<<endl;
}
return(0);
}

