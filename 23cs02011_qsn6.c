#include <stdio.h>
int main(){
    int arr[3][7];
    printf("enter temperature for 1st city in a week:\n");
    for(int j=0;j<7;j++){
        scanf("%d",&arr[0][j]);
    }
    printf("enter temperature for 2nd city in a week:\n");
    for(int j=0;j<7;j++){
        scanf("%d",&arr[1][j]);
    }
    printf("enter temperature for 3rd city in a week:\n");
    for(int j=0;j<7;j++){
        scanf("%d",&arr[2][j]);
    }

    float sum1=0;
    for(int i=0;i<7;i++){
        sum1+=arr[0][i];
    }
   
    float avg1= sum1/7;
    
    float sum2=0;
    for(int i=0;i<7;i++){
        sum2+=arr[1][i];
    }
    float avg2= sum2/7;
   
    float sum3=0;
    for(int i=0;i<7;i++){
        sum3+=arr[2][i];
    }
    float avg3= sum3/7;
    printf("\nAverage temperature of 1st city is:%.2f ",avg1);
    printf("\nAverage temperature of 2nd city is:%.2f ",avg2);
    printf("\nAverage temperature of 3rd city is:%.2f ",avg3);
}