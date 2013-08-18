#include<iostream.h>
#include<conio.h>
void main()
{
int z,exp1[10],exp2[10],x,ans[10],deg1,k=0,deg2;
h:;
cout<<"\nENTER THE DEGREE OF FIRST POLYNOMIAL\n";
cin>>deg1;
if(deg1<0)
{
cout<<"\nINVALID ENTRY\n";
goto h;
}
for(int i=0;i<=deg1;i++)
{
cout<<"\nENTER THE COEFFICENT OF X^"<<i<<"\n";
cin>>exp1[i];
}
y:;
cout<<"\nENTER THE DEGREE OF SECOND POLYNOMIAL\n";
cin>>deg2;
if(deg2<0)
{
cout<<"\nINVALID ENTRY\n";
goto y;
}
for(int i=0;i<=deg2;i++)
{
cout<<"\nENTER THE COEFFICENT OF X^"<<i<<"\n";
cin>>exp2[i];
}
if(deg1!=deg2)
{
if(deg1>deg2)
{
x=deg1;
for(int k=0;k<=deg2;k++)
{
ans[k]=exp1[k]+exp2[k];
}
for(int l=deg2+1;l<=deg1;l++)
{
ans[l]=exp1[l];
}
}
else if(deg2>deg1)
{
x=deg2;
for(int k=0;k<=deg1;k++)
{
ans[k]=exp1[k]+exp2[k];
}
for(int l=deg1+1;l<=deg2;l++)
{
ans[l]=exp2[l];
}
}

}
else
{
for(int k=0;k<=deg1;k++)
{
ans[k]=exp1[k]+exp2[k];
x=deg1;
}
}
cout<<"\nADDITION RESULT\n";
for(int i=0;i<=x;i++)
{
if(i!=x)
cout<<ans[x-i]<<" "<<"X^"<<x-i<<" + ";
else
cout<<ans[x-i]<<" "<<"X^"<<x-i;
}

getch();
}


