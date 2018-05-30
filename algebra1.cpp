#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int NWD(int x, int y)
{
	if (y == 0) return x;
    else return NWD(y,(x%y));
}
 
void odwracalne(int n)
{
    for(int i = 0; i < n; i++)
	{
        if(NWD(n,i) == 1)
		{
			printf("%d ", i);
        }
    }
}
 
void dz_zera(int n)
{
    int pom = 0;
        for(int i = 0 ; i < n; i++)
		{
            pom = 0;
            	for(int j = 1; j < n; j++)
				{
                        if((i*j) % n == 0)
						{
                            if (pom == 0) 
							{
                                printf("%d ", i);
                                pom++;
                            }
                            else continue;
                        }
                }
        }
}

void nilpotentne(int n)
{
    int pom = 0;
    for(int i = 0; i < n; i++)
	{
        pom = 0;
                for(int j = 1; j < n; j++)
				{
                        int a = pow(i,j);
                            if(a % n == 0)
							{
                                if (pom == 0) 
								{
                                    printf("%d ", i);
                                    pom++;
                                }
                                else continue;
                            }
                }
    }
}
 
void idempotentne(int n)
{
        for(int i = 0; i < n; i++)
		{
            if((i*i) % n == i)
			{
                printf("%d ", i);
            }
        }
}
 
int main()
{
    int n;
    
    printf("Podaj n: ");
    scanf("%d", &n);
    
	printf("\nW Z/%d:\n", n);
    printf("Elementy odwracalne: ");
    odwracalne(n);
    printf("\n");
    
    printf("Dzielniki zera: ");
    dz_zera(n);
    printf("\n");
 
    printf("Elementy nilpotentne: ");
    nilpotentne(n);
    printf("\n");
 
    printf("Elementy idempotentne: ");
    idempotentne(n);
 
    return 0;
 
}
