#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x,y,z;
   printf(" enter the values of x y z:\n");
   scanf("%d%d%d",&x,&y,&z);
  if (x>y && x>z){

    printf("the largest number is %d\n",x);
  }
  else if(y>x && y>z){
    printf("the largest number is %d\n",y);

  }
  else if(z>x && z>y){
    printf("the largest number is %d\n",z);
  }
  else{
    printf(" all numbers are equal");
  }
    return 0;
}
******************************************************************************
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x,y,z,max=0;
   printf(" enter the values of x y z:\n");
   scanf("%d%d%d",&x,&y,&z);
 if (x>max){
    max=x;

 }
 if (y>max){
    max=y;


 }
 if (z>max){
    max=z;

 }
 printf("the greatest number is: %d\n",max);
    return 0;
}
*********************************************************************