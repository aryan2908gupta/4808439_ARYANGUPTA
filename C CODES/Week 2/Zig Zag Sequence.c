#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void findZigZagSequence(int arr[], int n) {
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(&arr[i],&arr[j]);
            }
        }
    }

    int mid = (n + 1) / 2 - 1;
    swap(&arr[mid], &arr[n-1]);

    int st = mid + 1;
    int ed = n - 2;
    while(st <= ed){
        swap(&arr[st], &arr[ed]);
        st++;
        ed--;
    }

    for(int i=0;i<n;i++){
        printf("%d", arr[i]);
        if(i < n-1) printf(" ");
    }
    printf("\n");
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++) scanf("%d",&arr[i]);
        findZigZagSequence(arr,n);
    }
    return 0;
}
