#include <stdio.h>
#include <limits.h>
void printAvg(int arr[],int n);
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\nRequired output:\n");
    printAvg(arr,n);

}
void printAvg(int arr[],int n){
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    float avg=sum/n;
    
    for(int i=0;i<n;i++){
        if(arr[i]>avg){
            printf("%d ",arr[i]);
        }
    }
    return;
}