#include "stdio.h"

int i;
int *p = &i;

int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

typedef int (*mathfun)(int, int); //Better to use for better code readability

mathfun fun(int type)
{
    if (type==0)
        return add;
    if (type==1)
        return sub;

    return NULL;
}

int main() 
{
    int (*func)(int,int);
    func = fun(0);

    mathfun arr[2] = {add, sub}; 
    //OR
    int (*arr2[2])(int,int) = {add,sub};

    int c = func(5,2); //new way
    printf("%d \n", c);
    c = (*func)(5,2); //Traditional way
    printf("%d \n", c);

    c = arr[0](5,2); //new way
    printf("%d \n", c);

    c = arr2[1](5,2); //new way
    printf("%d \n", c);
}