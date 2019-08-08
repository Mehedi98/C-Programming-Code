#include<stdio.h>

int find_max(int a[100], int n);

 int main(){

    int a[100];
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++){
        scanf("%d",&a[i]);
    }

    int max= find_max(a,n);
    printf("%d",max);
    return 0;
}

int find_max( int a[100], int n)
{

     int max=a[0];
     int i;

     for(i = 0; i < n; i++){

      if (a[i] >max){

         max=a[i];
      }

     }
     return max;
}
