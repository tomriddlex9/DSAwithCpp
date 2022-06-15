// from the nptel series on Modern Programming in C++


#include<stdio.h> 
#include<stdlib.h> // for using the qsort function
int compare(const void *a,const void *b){
    return (*(int *)a > *(int *)b);
}
int compareCheck(int a ,int b){
    return a>b; 
}
int main(){ 
    int data[]={32,71,12,45,26};
    int a=43,b=32; 
    printf("%d \n",compareCheck(a,b));
    qsort(data,5,sizeof(int),compare);
    for(int i=0;i<5;i++){
        printf("%d  ",data[i]);
    }
}