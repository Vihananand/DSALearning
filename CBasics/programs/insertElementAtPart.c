#include <stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int element,index;
    scanf("%d",&element);
    printf("enter the index number at which you want to insert:");
    scanf("%d",&index);
    for(int i=size;i>index;i--){
        arr[i]=arr[i-1];
    }
    arr[index]=element;
    printf("Array after insertion of element:");
    for(int i=0;i<size+1;i++){
        printf("%d",arr[i]);
    }
    return 0;
}