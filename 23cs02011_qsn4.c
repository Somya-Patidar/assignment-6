#include <stdio.h>


int isSubset(int arr1[], int arr2[], int m, int n) {
    int i = 0, j = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (arr2[i] == arr1[j])
                break;
        }
        
        if (j == m)
            return 0;
    }
    
    return 1;
}

int main() {
    int n1,n2;
    printf("enter the size of arr1:");
    scanf("%d",&n1);
    
    printf("enter the size of arr2:");
    scanf("%d",&n2);

    int arr1[n1],arr2[n2];
    printf("enter the elements in 1st array:\n");
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("enter the elements in 2nd array:\n");
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    

    if (isSubset(arr1, arr2, n1, n2))
        printf("arr2[] is subset of arr1[]\n");
    else
        printf("arr2[] is not subset of arr1[]\n");

    return 0;
}
