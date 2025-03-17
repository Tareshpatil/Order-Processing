#include <stdio.h>

int main(){

    int result =765;
    int marks=89;
    int *ptrResult=&result;
    printf("Value of result: %d\n", result);
    printf("Value of *ptrResult: %d\n",*ptrResult);

    printf("Value of ptrResult: %d\n", ptrResult);
    printf("Address of result: %p\n",&result);

    char ch='C';
    char *ptrCh=&ch;
    printf("Value of ch : %c\n",ch);
    printf("Value of *ptrCh: %c\n",*ptrCh);
    printf("Value of ptrCh: %d\n",ptrCh);

    void * ptr=NULL;
    ptr=&result;
    printf("\n Value of *ptr: %d\n",*(int *)ptr);

    ptr=&ch;
    printf("\n Value of *ptr: %c\n",*(char *)ptr);



}