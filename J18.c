#include <stdio.h>
#include <time.h>
#include <stdlib.h>
 void kirit(int arr[], int n){
      for(int i=0; i<n; i++){
          arr[i]=rand()%21-9;
      }
 }
 void chiqar(int arr[], int n){
      for(int i=0; i<n; i++){
          printf("%d ",arr[i]);
      }
      puts("");
 }
 void  middle_sum(int arr[], int n){
      int a,b,sum;
      for(int i=0; i<n; i++){
           if(!(arr[i]%2)){
                a=i;
                break;
           }
      }
      for(int i=n-1; i>=0; i--){
           if(arr[i]%2){
                b=i;
                break;
           }
      }
      for(int i=a+1; i<b; i++){
          printf("%d ",arr[i]);
          sum+=arr[i];
      }
      printf("\n sum=%d\n",sum);
 }


int main(){ 
 srand(time(0));
 int n;
 printf("array o'lcahmi: "); scanf("%d",&n);
 int a[n];
 kirit(a,n);
 chiqar(a,n);
 middle_sum(a,n);


 return 0;
}
