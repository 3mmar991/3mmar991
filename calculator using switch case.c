#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,z,ans;
    char y;
    while(1){
    printf("enter numbers to calculat\n");
    scanf(" %d",&x);
        scanf(" %c",&y);
            scanf(" %d",&z);
            switch (y){
            case '+' :
            ans=x+z;
            printf(" %d  +  %d  = %d\n",x,z,ans);
            break;
           case '-':
            ans=x-z;
            printf(" %d  -  %d  = %d\n",x,z,ans);
            break;
            case '*':
            ans=x*z;
            printf(" %d  *  %d  = %d\n",x,z,ans);
            break;
            case '/':
            if (z!=0){
            ans=x/z;
            printf(" %d  /  %d  = %d\n",x,z,ans);
            }
            else{
                printf("UNDIFINED\n");
            }
            break;
            case '%':
            ans=x%z;
            printf(" %d  %  %%d  = %d\n",x,z,ans);
            break;
            default:
                printf("wrong op\n");
                break;
             }
    }
    return 0;
}