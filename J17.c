#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void input(int arr[], int n){
   for(int i=0; i<n; i++){
       arr[i]=rand()%31-10;
   }
}
void output(int arr[], int n){
   for(int i=0; i<n; i++){
       printf("%d ",arr[i]);
   }
   puts("");
}
void end_negative_number_after_multi(int arr[], int n){
   int p=1,k;
   for(int i=n-1; i>-1; i--){
        if(arr[i]>=0){
            p*=arr[i];
            k=i;
        }else{
            break;
        }
   }
   for(int i=k; i<n; i++){
       printf("%d ",arr[i]);
   }
   printf("\np=%d\n",p);

}
int main(){
 srand(time(0));
 int n;
 printf("array o'lchami:");5
 scanf("%d",&n);
 int a[n];
 input(a,n);
 output(a,n);
 end_negative_number_after_multi(a,n);
 return 0;
}


