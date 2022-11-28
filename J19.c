#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void input(int arr[], int n){
    for(int i=0; i<n; i++){
        arr[i]=rand()%201-100;
    }
}
void output(int arr[], int n){
    printf("array elementlari:\n");
    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
    puts("");
}
void calculation(int arr[], int n){
    int toq=0, juft=0, musbat=0, manfiy=0, nol=0;
    for(int i=0; i<n; i++){
        if(arr[i]%2){
            toq++;
        }else{
            juft++;
        }
        if(arr[i]>0){
            musbat++;
        }else if(arr[i]<0){
            manfiy++;
        }else{
            nol++;
        }
    }
    printf("%d ta manfiy, %d ta musbat, %d ta toq, %d ta juft, %d ta nol\n",manfiy,musbat,toq,juft,nol);
}




int main(){
    srand(time(NULL));
    int n;
    printf("array o'lchami:");
    scanf("%d",&n);
    int a[n];
    input(a,n);
    output(a,n);
    calculation(a,n);

    return 0;
}
