#include <stdio.h>
 void input(int arr[], int n){
     for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
     }
 }
 void output(int arr[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    puts("");
 }
 void is_palindrome(int arr[], int n){
    int temp_arr[n], k, l1=0, l2=0, s1=0,s2=0;
    for(int i=0; i<n; i++)
        l1=l1*10+arr[i];
        k=l1;
    while(k>0){
        l2=l2*10+k%10;
        k/=10;
        s1++;
    }
    k=l2;
    l1=0;
    while(k>0){
        l1=l1*10+k%10;
        k/=10;
        s2++;
    }
    if(l1==l2 && n-s1==s1-s2)
        printf("palindrome\n");
    else
        printf("no palindrome\n");


 }


int main(){
 int n;
 printf("array size --> "); scanf("%d",&n);
 int a[n];
 input(a,n);
 //output(a,n);
 is_palindrome(a,n);
 return 0;
}
