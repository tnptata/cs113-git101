#include <stdio.h>
int main(){
    int x = 100;
    int q = 0144;
    int w = 0x64;
    // printf("x = %d\n" , x);
    // printf("reference of x = %lu\n" , &x);
    // printf("reference of x = %p\n", &x);

    // int number[] = {1 ,2 , 3, 4 ,5 ,6};
    // int number[100];
    // int number[100] = {1,2,3,4,5,6};
    // number[1000] = 200;
    // printf("index 1 = %d" , number[1]);
    // printf("reference of &number[1] = %p\n", &number[1]);
    // printf("reference of &number[0] = %p\n", &number[0]);   
    // printf("reference of number = %p\n", &number + 1); 
    // printf("reference of number = %p\n", &number + 1);
    // printf("index 1 = %d" , number[1000]);

    // int number[] = {1 ,2 , 3, 4 ,5 ,6};
    // int *ptr = &x;
    // int *arrPtr;
    // arrPtr = number;
    // arrPtr += 3;
    // *arrPtr += 3;
    // printf("arrPtr = %p , *arrPtr = %d" , arrPtr , *arrPtr);

    // int number[] = {1 ,2 , 3, 4 ,5 ,6};
    // for (int *ptr = number; ptr < &number[4]; ptr++)
    // {
    //     printf("[%p] = %d\n" , ptr , *ptr);
    // }
    // printf("\n");
    // int *ptr2 = number;
    // for(int i = 0; i< 5; i++){
    //     printf("[%p] = %d\n" , ptr2 + i , *(ptr2 + i)); 
    // }
    
    // char input[100];
    // int count = 0;
    // char c;
    // while ((c = getchar()) != '\n') 
    // {
    //     input[count] = c;
    //     ++count;
    // }
    // input[count] = '\0';
    // for (char *cPtr = input; *cPtr != '\0' ;cPtr++)
    // {
    //     printf("%c\n" , *cPtr);
    // }

    char s[100];
    int i;
    char c;
    scanf("%d=%c=%s", &i, &c, s); 
    printf("%d--%c--%s", i, c, s);
    
}