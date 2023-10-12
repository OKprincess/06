//
//  main.c
//  06_P4 Call by value
//
//  Created by ok sojoung on 2023/10/12.
//

#include <stdio.h>
#include <stdlib.h>

/*
void square(int a)
{
    a = a*a;                    // square(2)=4가 나옴.
}

int main(void)
{
    int a = 2;                  //스텍에 제일 아래에 main(a=2)이 먼저 오고 그 위에 스텍영역에 계산된 4값이있음.
    square(a);
    printf("a = %i\n",a);       // 결과가 2로 나옴.
}
*/

int square(int a)
{
    return (a*a);               // 함수의 결과를 쓰고 싶을 땐 무조건 return 사용!!
}

int main(void)
{
    int a=2;                    // 스텍 제일 아래부분에 2가 들어가있음.
    a = square(a);              // 그 위에 2가 들어가서 a=4가 됨.
    printf("a = %i\n", a);
}
