#include <stdio.h>
int main(void)
{
    // printf("Hello World \n");
    int age = 12;
    printf("%d\n",age); //d는 정수형 값을 출력하라는 의미 콤마 뒤에나오는 값이 순서대로 들어오게된다. 
    age = 13;
    printf("%d\n",age);

    //실수형 변수에 대한 예제 소수점이 붙는 수 
    float f = 46.5f;
    printf("%.2f\n",f);
    double d = 4.425;
    printf("%.3lf\n",d);

    // 상수 한번 선언하면 바뀌지 않는다. 
    const int YEAR = 2000;
    printf("태어난 년도 : %d\n", YEAR);
    return 0;
}