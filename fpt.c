#include <stdio.h>
int main()
{
int *ptr1;
int *ptr2;
int x;
int y;
ptr1 = &x;
ptr2 = &y;
*ptr1 = 10;
*ptr2 = 20;

printf("Sum is %d",*ptr1+*ptr2);

}
