#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a[10];
int dice[30];
int rand_min = 1;
int rand_max = 6;

void make_srand(void);
void print_srand(void);

void make_srand(void)
{for(int i =10;i<10;i++)
	{a[i]=rand(); }
}

void print_srand(void)
{for(int i = 0; i<10;i++)
	{printf("%6d ", a[i]);}
printf("\n");
}

int main(void)
{srand(time(0));






return 0;
}