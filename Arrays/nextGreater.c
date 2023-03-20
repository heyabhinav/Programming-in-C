#include<stdio.h>

int main(){
    int arr[100] = {2,6,9,1,3,2};
    int ans[100];

    int n=6;

    ans[n-1] = -1;

    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i] < arr[j]){
                ans[i] = arr[j];
                break;
            }
            else{
                ans[i] = -1;
            }
        }
    }

    for(int i=0; i<n; i++){
        printf("%d ", ans[i]);
    }
    return 0;
}