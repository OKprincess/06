//
//  main.c
//  06_P3 여러가지 함수 구현
//
//  Created by ok sojoung on 2023/10/12.
//

#include <stdio.h>
#include <stdlib.h>

int sumTwo(int a, int b)
{
    return a+b;
}


int square(int n)
{
    return n*n;

}


int get_max(int x, int y)
{
    if(x>y)
        return x;
    else            // 이거 빼도됨. x 반환되면 끝이여서
        return y;
}

int main(void)
{
    int a, b;       // a,b 말고 다른 걸로 선언해도 됨
    a = 3; b = 10;
    printf("sumTwo result: %i\n", sumTwo(a,b) );
    
    int n = 3;
    printf("square result: %i\n", square(n));
    
    int x, y;
    x = 10; y = 8;
    printf("get_max result: %i\n", get_max(x,y));
    
    return 0;
}
