//
//  main.c
//  06_P1
//
//  Created by ok sojoung on 2023/10/12.
//

// #define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
/*
int main(void)
{
    int i;
    
    for( i=0; i<10; i++ )
        printf("*");
    for( i=0; i<10; i++ )
        printf("*");
    for( i=0; i<10; i++ )
        printf("*");
    return 0;
}
*/

void print_star(void)   // 공통 부분을 함수로 정의
{
    int i;
    for( i=0; i<10; i++ )
        printf("*");
}

int main(void)          // 간단하게 함수 호출
{
    print_star();
    print_star();
    print_star();
    
    return 0;
}
