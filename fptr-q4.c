#include <stdio.h>

void doubler(int* p1,int* p2,int* p3){
    *p1 = (*p1)*2;
    *p2 = (*p2)*2;
    *p3 = (*p3)*2;
}


int main()
{

   // Create a C function called doubled that accepts three integer pointers
   //as input and update those original
    //integer values by multiplying its current value by 2.

int x,y,z;
x = 10;
y=20;
z=30;
doubler(&x,&y,&z);

printf("Sum is %d %d %d",x,z,y);

}
