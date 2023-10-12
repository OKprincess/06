//
//  main.c
//  06_P2 함수의 동작 관찰
//
//  Created by ok sojoung on 2023/10/12.
//

#include <stdio.h>
#include <stdlib.h>

void func1(void){
    int x;
    printf("func1 x is at %p\n", &x);   // &x는 메모리의 주소(하드웨어, 노트북 시스템에 따라 다름)
}

int main(void){
    int x;
    printf("main  x is at %p\n", &x);
    func1();
    
    /*  메모리 주소(&x)가 서로 다르게 나옴
        이름이 같아도 서로 다른 함수의 변수는 다른 변수다. 즉, x는 서로 다른거임.
        main함수의 메모리 영역이 더 높은 값임. 제일 먼저 부르는 함수가 제일 밑에(번지수 큼).
        func함수의 메모리 번지수가 더 작음.
    */
    return 0;
}
