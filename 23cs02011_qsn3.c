#include <stdio.h>
void reverse(int arr[],int n,int st){
    int ed=(n-1),temp;
    if(st>=ed){
        return;
    }
    temp=arr[st];
    arr[st]=arr[ed];
    arr[ed]=temp;
    reverse(arr,n-1,st+1);

}
int main(){
    int n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int arr[n];
    printf("enter the elements of array:\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    reverse(arr,n,0);
    printf("reversed array is:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}