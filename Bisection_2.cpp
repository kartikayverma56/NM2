#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<process.h>
#include<string.h>

#define EPS 0.00000005 
#define F(x) x*x-30

void Bisect();
int count=1,n;
float root=1;


int main()
{
	
	printf("\n Solution of Bisection method");
	printf("\n eqaution is");
	printf("\n\t\t\t x*x-30=0\n");
	printf("enter the number of iterations\n");
	scanf("%d",&n);
	Bisect();
	getch();
	
}
void Bisect()
{
	float x0,x1,x2;
	float f0,f1,f2;
	int i=0;
	for(x2=1;;x2++)
	{
		f2=F(x2);
		if(f2>0)
		{
			break;
		}
	}
	for(x1=x2-1;;x2--)
	{
		f1=F(x1);
		if(f1<0)
		{
			break;
		}
	}
	printf("\t\t--------------------");
	printf("\n\t\t iterations \t\t    roots\n");
	printf("\t\t----------------------");
	for(;count<=n;count++)
	{
		x0=(x1+x2)/2.0;
		f0=F(x0);
		if(f0==0)
		{
			root=x0;
			
		}
		if(f0*f1<0)
		{
			x2=x0;
		}
		else
		{
			x1=x0;
			f1=f0;
			
		}
		printf("\n\t\t Iteration %d",count);
		printf("\t :\t   %f",x0);
		if(fabs((x1-x2)/x1)<EPS)
		{
			printf("\n\t\t ----------------------");
			printf("\n\t\t root=%f",x0);
			printf("\n\t\t Iterations = %d\n",count);
			printf("\t\t------------------------");
			getch();
			exit(0);
		}
	}
	printf("\n\t\t---------------------");
	printf("\n\t\t\t root = %7.4f",x0);
	printf("\n\t\t Iterations = %d\n ",count-1);
	printf("\t\t-----------------------");
	getch();
	}
