#include <stdio.h> 
#include <time.h>
# include <stdlib.h>
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

void to_first_negative_number_sum(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
            if(arr[i]>=0){
            sum+=arr[i];
        }else{
            break;
        }
    }
    printf("summa=%d\n",sum);
}

int main(){
 srand(time(0));
 int n;
 printf("array o'lchami:");
 scanf("%d",&n);
 int a[n];
 input(a,n);
 output(a,n);
 to_first_negative_number_sum(a,n);

 return 0;
}
