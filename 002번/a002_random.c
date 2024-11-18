#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a[10];
int dice[30];
int rand_min = 1;
int rand_max = 6;

void make_srand(void);
void print_srand(void);
void RAND_MAX_print(void);

void make_srand(void)
{for(int i =10;i<10;i++)
	{a[i]=rand(); }
}

void print_srand(void)
{for(int i = 0; i<10;i++)
	{printf("%6d ", a[i]);}
printf("\n");
}

void RAND_MAX_print(void)
{printf("time() 함수를 이용한 rand()의 최댓값은 16진수 : %x 10진수 : %6d \n",RAND_MAX,RAND_MAX); }




int main(void)
{srand(time(0));
make_srand();
print_srand();





return 0;
}