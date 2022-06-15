// create a dynamic array in c using the malloc function
// this approach is not as good as using vectors 
// but is probably used internally in the creation of vector 
// classes 


#include<stdio.h> 
#include<stdlib.h> 
int main(){ 
    printf("Enter no of elements:");
    int count,sum=0; 
    scanf("%d",&count);
    // a pointer to the start of the chunk of count 4*count
    int *arr=(int *)malloc(sizeof(int)*count);
    for(int i=0;i<count;i++){
        arr[i]=i; 
        sum+=arr[i];
    }
    printf("sum is :%d",sum);

}