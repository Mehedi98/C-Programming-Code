#include <stdio.h>

  int main()
    {
        int a ,b ,sum, res;
        printf("Input two numbers:\n");
        scanf("%d%d",&a, &b);

        sum=add(a,b);

        res=sub(a,b);

        printf("Addition of two number is:  %d\n",sum);
        printf("Substruction of two number is:  %d",res);

        return (0);

    }


    int add(int a, int b)
    {

      int c;
      c=a+b;

      return (c);

     }

     int sub (int x , int y){

     int z= x-y;

     return (z);

     }
