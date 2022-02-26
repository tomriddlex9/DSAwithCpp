#include<stdio.h>
int main(int argc, char const *argv[])
{
    typedef double num[3];
    num array[5]={1,2,3,4,5,6};
    printf("%u",sizeof(array));
    printf("%.2f",array[1][1]);
    return 0;
}
