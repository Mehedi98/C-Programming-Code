#include<stdio.h>
#include<stdbool.h>
int main()
#define TRUE 1
#define FALSE 0
{
    int cost;
    bool weatherhot=1;
    scanf("%d",&cost);
    scanf("%d",&weatherhot);
    if(cost<50 && weatherhot==1){

    printf("Eat Icecream ");
    }
    else{
        printf(" Drinking water");
    }
    return 0;

}
