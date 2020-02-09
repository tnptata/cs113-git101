#include <stdio.h>
#include <stdlib.h>
char name[20];
char number[5];
int main(){
    // printf("%s\n", name);
    // scanf("%s", name , &i); 
    // printf("Enter name : ");
    // gets(name);
    // fgets(name , 20 , stdin); 
    // getchar(char);
    // fgets(number , 5 , stdin); 
    // int i = atoi(number);
    // long l = atol();
    // double d = atof();
    // printf("number = %s , i = %d" , number , i); 

    // char = getcetchar();  
    // getchar();
    // chr1 = getchar();
    // fgets(number , 5 , stdin);
    // int i = atoi(number);
    // putchar(100);
    // putchar('u');

    // int found = 0; 
    // float inExist = 0.0; 
    // char isOnline = '\0'; 

    // fgets(number , 5 ,stdin);
    // int i = atoi(number);

    // if (i > 0 && i < 11)
    // {
    //     printf("if = %d\n" , i > 0 && i < 11);
    // }else if (i <= 20 || !found){
    //     printf("else if\n");
    // }else{

    // }

    fgets(number , 5 ,stdin);
    int i = atoi(number);
    int count = 0;
    int j = atoi(number);
    // while (count < i){
    //     // count++ * count - 5;  
    //     // ++count * count -5;   
    //     // printf("count = %d\n" , count);
    //     // count++;
    // }

    for (int j = 0; j < i; j++)
    {
        printf("j = %d\n" , j);
    }

}