#include <stdlib.h>
#include <stdio.h>

int sum (int, int, int);

int main (int argc, char *argv[]) 
{
    int val1, val2, val3;
    int n;
    int result;

    do{
        printf("Enter 3 integer arguments\n");
        n = scanf("%d %d %d",&val1, &val2, &val3);
    }while (n != 3);

    result = sum (val1, val2, 10) + sum (val2, val3, 25) + sum (val1, val3, 50);

    printf ("%d\n", result);

  return 0;
}

int sum (int val1, int val2, int val3) 
{
    int var1 = 4;

    return (var1 + val1 + val2 + val3 ) / 3;
}
