#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
int make_devisor(int denum3,int num3)
{
    int d1 = denum3;
    int n1 = num3;
    int devidenumb = 0;
    while (n1 != 0)
    {
        devidenumb = d1 % n1;
        d1 = n1;
        n1 = devidenumb;
    }
    return (d1);
}
int* solution(int denum1, int num1, int denum2, int num2) {
    int denum3 = ((denum1 * num2) + (denum2 * num1));
    int num3 = num1 * num2;
    int* answer = malloc(sizeof(int) *2);
    int devidenumb = make_devisor(denum3, num3);
    answer[0] = denum3 / devidenumb;
    answer[1] = num3 / devidenumb;
    return (answer);
}
/*
문제
첫 번째 분수의 분자와 분모를 뜻하는 denum1, num1, 두 번째 분수의
분자와 분모를 뜻하는 denum2, num2가 매개변수로 주어집니다.
두 분수를 더한 값을 기약 분수로 나타냈을 때 분자와 분모를
순서대로 담은 배열을 return 하도록 solution 함수를 완성해보세요.

풀이
먼저 분모를 통일시켜주기 위하여 분모 분자에 각각 값을 곱함
최대공약수를 구하는 방법은 유클리드호제법을 사용한 함수
make_devisor를 만드는 방식으로 구현후 적용
*/
