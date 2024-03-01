#include <stdio.h>
void printPrime(int n){
    int flag=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==1){
        printf("%d  ",n);
    }
    
}

int main(){
    int a,b;
    printf("Input lower limit:");
    scanf("%d",&a);
    printf("input upper limit:");
    scanf("%d",&b);
    for(int i=a;i<=b;i++){
        printPrime(i);
    }
}