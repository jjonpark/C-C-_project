// #include <stdio.h>

// 기본 자료형
// int main(void)
// {
//     // printf("Hello World \n");
//     int age = 12;
//     printf("%d\n",age); //d는 정수형 값을 출력하라는 의미 콤마 뒤에나오는 값이 순서대로 들어오게된다.
//     age = 13;
//     printf("%d\n",age);

//     //실수형 변수에 대한 예제 소수점이 붙는 수
//     float f = 46.5f;
//     printf("%.2f\n",f);
//     double d = 4.425;
//     printf("%.3lf\n",d);

//     // 상수 한번 선언하면 바뀌지 않는다.
//     const int YEAR = 2000;
//     printf("태어난 년도 : %d\n", YEAR);
//     return 0;
// }

// C++ 문법 공부 printf, scanf
// #include <stdio.h>
// int main(void)
// {
//     int add = 3 + 7;
//     printf("3+7 = %d\n", add);
//     printf("%d + %d = %d\n", 3, 7, 3 + 7);

//     // int input;
//     // printf("값을 입력하세요: ");
//     // scanf("%d", &input);
//     // printf("입력값 : %d\n", input);

//     // int one, two, three;
//     // printf("3개의 정수를 입력하세요 : ");
//     // scanf("%d %d %d", &one, &two, &three);
//     // printf("첫번째 값 : %d\n", one);
//     // printf("두번째 값 : %d\n", two);
//     // printf("세번째 값 : %d\n", three);

//     // 문자(한글자)
//     // char c = 'A';
//     // printf("%c\n", c);

//     // //문자 (두글자 이상)
//     // char str[256]; //대괄호 속에 숫자를 집어 넣으면 큰 공간을 만드는 구나
//     // scanf("%s", str, sizeof(str));
//     // printf("%s\n", str);

//     //프로젝트
//     char name[256];
//     printf("이름이 뭐예요?");
//     scanf("%s",name, sizeof(name));
//     int age;
//     printf("몇살이에요? ");
//     scanf("%d", &age);

//     float weigth;
//     printf("몸무게는 몇 kg 이에요?");
//     scanf("%f", &weigth);

//     double height;
//     printf("키는 몇 cm 이에요? ");
//     scanf("%lf", &height);

//     char what[256];
//     printf("무슨 범죄를 저질렀어요?");
//     scanf("%s",what,sizeof(what));

//     //조서 내용 출력
//     printf("\n\n--- 범죄자 정보 ---\n\n");
//     printf(" 이름      : %s\n", name);
//     printf(" 나이      : %d\n", age);
//     printf(" 몸무게     : %.2f\n", weigth);
//     printf(" 키        : %.2lf\n",height);
//     printf(" 범죄      : %s\n", what);
// }

//반목문

// #include <stdio.h>
// int main(void)
// {
//     printf("Hello World\n");

//     // ++ 의 개념
//     int b = 20;
//     printf("%d\n", ++b);
//     printf("%d\n", b++);
//     printf("%d\n", b);

// for, while do while
//  for (int i =1; i<=10; i++){
//      printf("hello world %d\n",i);
//  }
//  int i=1;
//  while (i<=10){
//      printf("Hello World %d\n",i++);
//  }
//  int c =1;
//  do {
//      printf("HELLO WORLD %d\n",c++);
//  }  while(c<=10);

// 2중 반복문
//  for (int i = 1 ; i<=3 ; i++){
//      printf("첫번째 반복문 : %d\n", i);

//     for (int j =1 ; j<=5; j++){
//         printf(" 두번째 반복문 : %d\n",j);
//     }
// }

// for (int i = 2; i <= 9; i++)
// {
//     for (int j = 1; j <= 9; j++)
//     {
//         printf("%d x %d = %d\n", i, j, i * j);
//     }
//     printf("\n");
// }
// int n;
// scanf("%d",&n);
// for (int i=1; i<=n; i++){
//     for (int j=1; j<=i; j++){
//         printf("*");
//     }
//     printf("\n");
// }

//     for (int i =0; i<5 ; i++){
//         for (int j =i ; j<5-1; j++){
//             printf(" ");
//         }
//         for (int k =0 ; k<i;k++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     int floor;
//     printf("몇층을 쌓을꺼니?");
//     scanf("%d", &floor);
//     for (int i = 0; i < floor; i++)
//     {
//         for (int j = i; j < floor - 1; j++)
//         {
//             printf(" ");
//         }
//         for (int k = 1; k <= (2 * i)+1; k++)
//         {
//             printf("*");
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>
// int main(void)
// {
//     srand(time(NULL));
//     int i = rand() % 3; // 0~2 사이의 값을 반환
//     switch (i)
//     {
//     case 0: printf("가위\n"); break;
//     case 1: printf("바위\n"); break;
//     case 2: printf("보\n"); break;
//     default: printf("몰라요\n"); break;
//     }
// }

// #include <stdio.h>
// //선언
// void p(int num);
// int function_with_return();
// int apple(int total, int ate);
// int main(void)
// {
//     int num = 2;
//     p(num);
//     // 2+3은?
//     num = num + 3;
//     p(num);

//     // 이러한 계산들을 함수를 통해서 관리해보자

//     int ret = function_with_return();
//     p(ret);

//     // 파라미터(전달값)도 받고, 반환값이 있는 함수
//     int rete = apple(5,2); //개의 사과중 2개를 먹었어요
//     printf("사과 5개중에 2개를 먹으면? %d 가 남아요 ",rete);
// }
// void p(int num)
// {
//     printf("num은 %d입니다.\n", num);
// }

// int plus_4(int num2)
// {
//     return num2 + 4;
// }

// int function_with_return()
// {
//     printf("반환값이 있는 함수 입니다. \n");
//     return 10;
// }

// int apple(int total, int apple)
// {
//     printf("전달값과 반환값이 있는 함수 입니다. \n");
//     return total - apple;
// }
// #include <stdlib.h>
// #include <stdio.h>
// #include <time.h>

// int getRandomNumber(int level);
// void showQuestion(int level, int num1, int num2);
// void success();
// void fail();
// int main(void)
// {
//     // 문이 5개가 있고, 각 문마다 점점 어려운 수식 퀴즈가 출제
//     // 문제를 맞히면 통과, 틀리면 실패
//     srand(time(NULL));
//     int count = 0;
//     for (int i=1 ; i<=5; i++)
//     {
//         int num1 = getRandomNumber(i);
//         int num2 = getRandomNumber(i);
//         showQuestion(i, num1, num2);
//         int answer=-1;
//         scanf("%d",&answer);
//         if ( answer == -1)
//         {
//             printf("프로그램을 종료합니다.");
//             exit(0);
//         }
//         else if (answer == num1 *num2 )
//         {
//             success();
//             count++;
//         }
//         else
//         {
//             fail();
//         }
//     }
//     printf("\n\n 당신은 5개의 문제중 %d 의 문제를 맞췄습니다.\n ", count);
//     return 0;
// }
// int getRandomNumber(int level)
// {
//     return rand() % (level *7) +1;

// }
// void showQuestion(int level, int num1, int num2)
// {
//     printf("\n\n\n######## %d 번째 비밀번호 ########\n", level);
//     printf("\n\t%d x %d 는? \n\n", num1, num2);
//     printf("#####################################\n");
//     printf("\n 비밀번호를 입력하세요 (종료 :-1) >>");
// }

// void success()
// {
//     printf("맞췄습니다!!\n");
// }
// void fail()
// {
//     printf("틀렸습니다!\n");
// }


// 배열

#include <stdio.h>

int main(void)
{
    //여러개의 변수를 함께, 동시에 생성
    int subway_array[3];
    subway_array[0]=30;
    subway_array[1]=40;
    subway_array[2]=50;

    for (int i = 0; i<3; i++)
    {
        printf("지하철 %d호차에 %d 명이 타고 있습니다. \n",i+1, subway_array[i]);
    }

}