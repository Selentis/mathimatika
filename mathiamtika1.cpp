#include<stdio.h>
#include<math.h>
#include <unistd.h>

int main()
{	
	float a,b,g,e,f,s,d,p,c;
	char r,q,x;
	Arxi:		
	printf("Ypologismos trionimoy\nPatas tin epilogi soy kai meta enter");
	printf("\nIsagete A: ");
	scanf("%f",&a);
	printf("Isagete B: ");
	scanf("%f",&b);
	printf("Isagete G: ");
	scanf("%f",&g);	
	
	s=-(b/a);
	p=g/a;
	d=(b*b)-(4*a*g);
	e=(-b-sqrt(d))/(2*a);
	f=(-b+sqrt(d))/(2*a);
	c=-b/(2*a);
	
	printf("\nH diakrinoysa einai %f\n", d);
	if(d>0)
	{
	printf("\nTo S einai %f\n", s);
	printf("To p einai %f\n", p);
	printf("\nTo X1 einai %f\n", e);
	printf("To X2 einai %f\n", f);
	}
	else if (d=0)
	{
	printf("\nTo X einai %f\n", e);
	}
	
	if (a>0)
	{
		if(d>0)
		{
			if(e<f)
			{
			printf("\nAn Ax(tetragono)+Bx+G>0 Tote xE(-apiro,%f)U(%f,+apiro)\n",e,f);
			printf("An Ax(tetragono)+Bx+G<0 Tote xE(%f,%f)\n",e,f);
			printf("An Ax(tetragono)+Bx+G=0 Tote x=%f x=%f\n",f,e);
			}
			else if (e>f)
			{
			printf("\nAn Ax(tetragono)+Bx+G>0 Tote xE(-apiro,%f)U(%f,+apiro)\n",f,e);
			printf("An Ax(tetragono)+Bx+G<0 Tote xE(%f,%f)\n",f,e);
			printf("An Ax(tetragono)+Bx+G=0 Tote x=%f x=%f\n",f,e);
			}	
		}
		else if (d<0)
		{
		printf("\nTo Ax(tetragono)+Bx+G>0 isxiei Panta\n");
		printf("To Ax(tetragono)+Bx+G<0 den isxiei Pote\n");
		}
		else if (d==0)
		{
		printf("\nTo Ax(tetragono)+Bx+G>0 isxiei Panta\n");
		printf("To Ax(tetragono)+Bx+G<0 den isxiei Pote\n");
		printf("To Ax(tetragono)+Bx+G=0 isxyei me x=%d\n", c);
		}		
	}		
	if(a<0)
	{
		if(d>0)
		{
			if(e<f)
			{
			printf("\nAn Ax(tetragono)+Bx+G>0 Tote xE(%f,%f)\n",e,f);
			printf("An Ax(tetragono)+Bx+G<0 Tote xE(-apiro,%f)U(%f,+apiro)\n",e,f);
			printf("An Ax(tetragono)+Bx+G=0 Tote x=%f x=%f\n",e,f);
			}
			else if (e>f)
			{
			printf("\nAn Ax(tetragono)+Bx+G>0 Tote xE(%f,%f)\n",f,e);
			printf("An Ax(tetragono)+Bx+G<0 Tote111 xE(-apiro,%f)U(%f,+apiro)\n",f,e);	
			printf("An Ax(tetragono)+Bx+G=0 Tote x=%f x=%f\n",f,e);
			}
		}	
		else if (d<0)
		{
		printf("\nTo Ax(tetragono)+Bx+G>0 den isxiei Pote\n");
		printf("To Ax(tetragono)+Bx+G<0 isxiei Panta\n");	
		}
		else if (d==0)
		{
		printf("\nTo Ax(tetragono)+Bx+G>0 den isxiei Pote\n");
		printf("To Ax(tetragono)+Bx+G<0 isxiei Panta\n");
		printf("To Ax(tetragono)+Bx+G=0 isxyei me x=%d\n", c);
		}
	}
	
	printf("\nPata X gia na sinexiseis\nPata Q gia na bgeis\n");
	scanf(" %c", &r);
	if(r=='q')
	{ printf("Sas Efxaristo Poly Romanos Selentis");
	sleep(3);
	return 0;	
	}
	else if(r=='x')
	{ printf("\n");
	goto Arxi;
	}

}


