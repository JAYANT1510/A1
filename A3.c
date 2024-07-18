/*
 * A3.c
 *
 *  Created on: 15 Jul 2024
 *      Author: ABHISHEK
 */
#include<stdio.h>
#include<conio.h>
void a()
{
	long long int a[1000] [10000][10000][10000];
}
union a1
{

	char a[1000][1000][1000][1000];
};
#define LIFE 1
#define AUTO 2
#define HOME 3
struct addr
{
	char street[50];
	char city[10];
	char state[3];
	char zip[6];
};
struct date
{
	int month;
	int day;
	int year;
};
struct policy
{
	int policynumber;
	char name[30];
	struct addr address;
	int amount;
	float premium;
	int kind;
	union {
		struct
		{
			char benificiary[30];
			struct date birthday;
		}life;
		struct
		{
			int autoduct;
			char license[10];
			char state[3];
			char model[15];
			int year;
		}auto1;
		struct
		{
			int homededuct;
			int yearbuilt;
		}home;
	}policyinfo;
};
void b()
{
	struct policy p;
	p.policyinfo.auto1.year=2057;
	printf("policy year = %d",p.policyinfo.auto1.year);
}
int main()
{
	b();
	getch();
	return 0;
}
