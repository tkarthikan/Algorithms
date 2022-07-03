#include "stdio.h"
#include "stdlib.h"

void checkEndian(){
    unsigned int i = 1;
    char *c = (char*)&i;
    if (*c)
    {
        printf("%s",c);
        printf("This processor is Big endian");
    }
    else
        printf("This processor is Little endian"); 
}

int AtoI(char *str)  //String to integer conversion
{
    int res = 0; //Initialize result
    int sign = 1; //Initialize sign as positve
    int i = 0; //Initialize index of first digit

    if (str[0]=='-')
    {
        sign = -1;
        i++;
    }
    printf("%d\n", i);
    for (; str[i]!='\0'; ++i)
    {
        res = res*10 + str[i] - '0';
    }
    return sign*res;
}

//Function to create a 2D array in Heap memory
int** get2Darray(int N)
{
    int** arr = (int**)malloc(N*sizeof(int*));
    for (int i=0; i<N; i++)
    {
        arr[i] = (int*)malloc(sizeof(int)*N);
        for (int j=0; j<N; j++)
        {
            arr[i][j]=i+j;
        }
    }
    return arr;
}

void printarray(int **arr, int N)
{
    for (int i=0; i<N; ++i)
    {
        for (int j=0; j<N; j++)
        {
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}


int main() 
{
    //Initialise selected indices called DEsignated Initilization 
    int arr[10] = {[6]=3, [2]=2};
    
    //Checking endian
    checkEndian();  

    //Converting stringer to integer
    char str1[] = "12";
    char str2[] = "-43";
    int val1 = AtoI(str1);
    printf("Str1 in integer %d\n", val1);
    printf("Str2 in integer %d\n",AtoI(str2));

    //Returning 2D from a function
    int** k = get2Darray(5);
    printarray(k,5);


    return 0;
}