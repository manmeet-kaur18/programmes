include<stdio.h>
int hcf(int,int);
int main()
{
int a,b,z,c,d,lcm;
printf("enter 2 nos.");
scanf("%d %d",&a,&b);
z=hcf(a,b);
c=a/z;
d=b/z;
lcm=c*d*z;
printf("the lcm of nos is %d",lcm);
return 0;
}
int hcf(int a, int b)
int  h ,i,j, max=0;
if(a>b)
{
for(i=1; i<=b; i++)
{
if(a%i==0 && b%i==0)
{
if(i>max)
{
max=i;
}
}
}
h=max;
return h;
}
else
{
int max=0;
for(j=1;j<=a;i++)
{
if(a%i==0 && b%i==0)
{
if(i>max)
{
max=i;
}
}
}
h=max;
return h;
}
}


