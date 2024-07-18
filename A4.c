/*
 * A4.c
 *
 *  Created on: 16 Jul 2024
 *      Author: ABHISHEK
 */
#include<stdio.h>
#include<conio.h>
#define INTEGER 1
#define REAL 2
struct stint
{
	int f3,f4;
};
struct stfloat
{
	float f5,f6;
};
struct sample
{
	int f1;
	float f2;
	int utype;
	union
	{
		struct stint x;
		struct stfloar y;
	}funion;
};
void a()
{
	struct sample s;
	s.funion.x.f3=7;
}
struct rational
{
	int numerator;
	int denominator;
};
typedef struct
{
	int numerator;
	int denominator;
}Rational;
void a1()
{
	struct rational r;
	Rational r1;
	r1.denominator=5;
	printf("\n%d",r1.denominator);
}
int main()
{
	a();
	a1();
	getch();
	return 0;
}
