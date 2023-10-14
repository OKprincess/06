//
//  main.c
//  06_P5 Combination
//
//  Created by ok sojoung on 2023/10/12.
//

#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
    int res = 1;
    int i;
    for (i=1; i<n+1; i++)
    {
        res = res*i;
    }
    return res;
}


int combination(int n, int r)
{
    int div1, div2;
    
    div1 = factorial(n);
    div2 = factorial(n-r)*factorial(r);
    
    return (div1/div2);
}


int main(void)
{
    // 1. 입력값 받음
    int n, r;
    printf("input n :");
    scanf("%d", &n);
    printf("input r :");
    scanf("%d", &r);
    
    // 2. 분모 분자 계산
    int result;
    result = combination(n, r);
    
    // 3. 최종값 출력
    printf("Result of combination: %d\n", result);
    return 0;
}
