// bubble sort
#include<stdio.h>
int main(){
    int n;
    printf("enter size");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
for(int i=0;i<n-1;i++){
    for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
        int temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
    }
}
}
    printf("enter sorting elements are");
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

return 0;
}
