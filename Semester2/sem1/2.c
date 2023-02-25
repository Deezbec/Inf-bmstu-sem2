#include <stdio.h>
#include <string.h>

int adding_stars_while(int len_name)
{
    int i = 0;
    while(i < len_name + 2)
    {
        i++;
        printf("*");
    }
    printf("\n");
    return 0;  
}

int adding_stars_for(int len_name)
{
    for(int i = 0; i < len_name + 2; i++)
    { printf("*"); }
    printf("\n");
    return 0;  
}

int with_while(char name[40], int len_name)
{
    adding_stars_for(len_name);
    printf("*%s*\n", name);
    adding_stars_while(len_name);
    return 0;  
}
int get_len(char name[40]) //not Done
{
    int j = 0;
    for(int i = 0; i < 40; i++)
    {
        if(name[i] != '\0') {j++; break;}
    }
    return j;
}
int recours(char name[40], int i, int len_name) //not Done
{
    if(i < len_name + 2)
    {printf("*");}
    else{
        if (i == len_name + 2) {printf("\n");}
        else{
            if (i == len_name + 3) {printf("*%s*\n", name);}
            else{recours(name, 0, len_name);}
        }

    }
}


int main(void)
{
    char name[40];
    scanf("%s", name);
    int len_name = strlen(name);
    //printf("%d %d\n", name[2], get_len(name));
    printf("%d %d\n", len_name, get_len(name));
    with_while(name, len_name); //Var2 with while
    //printf("********\n*Kirill*\n********\n"); //Var 1
    return 0;   
}

// Назовем это как дополнение к заданиям. 
// По 1.2: 
// Печать звездочек:
// 1) реализовать используя цикл while.
// 2) реализовать через цикл for
// 3) реализовать через рекурсию*
// 4) написать функцию, которая вычисляет длину строки и ей воспользоваться
// 5) в идеале все это определить как отдельные функции.
// По заданию 1.3:
// Реализовать печать n мерной таблицы умножения, где n вводится пользователем.

// Для ввода значений с клавиатуры используем scanf