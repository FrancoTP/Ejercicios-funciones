#include<stdio.h>
#include<math.h>
#include<iostream>
#include<conio.h>
#include<string.h>
// HEcho por franco tobon
void ecuaciones(double,double,double,double *,double *);
int main (void){
	double a,b,c,x1,x2;

	printf("Introduzca un numero : \n");
	scanf("%lf",&a);
	printf("Introduzca otro numero : \n");
	scanf("%lf",&b);
	printf("Introduzca otro numero : \n");
	scanf("%lf",&c);
	ecuaciones(a,b,c,&x1,&x2);
	printf("Las soluciones son: %lf y %lf",x1,x2);

	getch();

}

void ecuaciones(double a,double b,double c,double *x1,double *x2){
	*x1= (-b+(sqrt(b*b-4*a*c)))/2*a;
	*x2= (-b-(sqrt(b*b-4*a*c)))/2*a;


system("pause");
}
