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

// #include <stdio.h>

// int main(void)
// {
//     //여러개의 변수를 함께, 동시에 생성
//     int subway_array[3];
//     subway_array[0]=30;
//     subway_array[1]=40;
//     subway_array[2]=50;

//     for (int i = 0; i<3; i++)
//     {
//         printf("지하철 %d호차에 %d 명이 타고 있습니다. \n",i+1, subway_array[i]);
//     }

// ** 배열 생성시 주의 사항
// 배열의 값은 초기화를 반드시 해야함
// 배열 크기는 항상 상수로 선언
// int arr[10] ={1,2} ; // 3번째 값부터는 자동으로 '0' 으로 초기화 된다.
// float arr_f[5] = {1.0fm 2.0f, 3.0f};

//문자 VS 문자열

//문자열 끝에는 '끝'을 의미하는 NULL 문자 '\0'이 포함되어야 함
//즉, 문자열 선언시 여유공간 1개 가 필요
// char str[7] = "cooding";
// }

// #include <stdio.h>

// int main(void)
// {
//     printf("%c\n", 'a');
//     printf("%d\n", 'a');

//     printf("%c\n", 'A');
//     printf("%d\n", 'A');

//     printf("%c\n", '1');
//     printf("%d\n", '1');

// //참고 2 : 0~127 사이의 아스키 코드 정수값에 해당하는 문자 확인
// for(int i =0; i<128;i++)
// {
//     printf("아스키 코드 정수 %d : %c\n", i,i);
// }
// }
// #include <stdlib.h>
// #include <stdio.h>
// #include <time.h>

// int main(void)
// {
//     srand(time(NULL));
//     printf("\n\n === 아빠는 대머리 게임 === \n\n");
//     int answer;
//     int treatment = rand()% 4;
// }

//포인터
// #include <stdio.h>
// void swap(int a, int b);
// void swap_addr(int *a, int *b);
// int main(void)
// {
// //포인터
// //[철수] : 101호
// //[영희] : 201호
// //[민수] : 301호
// int a = 1;
// int b = 2;
// int c = 3;

// printf("철수네 주소 : %d, 암호 : %d\n", &a, a);
// printf("영희네 주소 : %d, 암호 : %d\n", &b, b);
// printf("민수네 주소 : %d, 암호 : %d\n", &c, c);

// //미션맨의 등장

// //첫번째 미션은 아파트의 각 집에 방문하여 문에 적힌 암호 확인
// int * mission_man; //포인터 변수
// mission_man = &a;
// printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", mission_man, *mission_man);

// mission_man = &b;
// printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", mission_man, *mission_man);

// mission_man = &c;
// printf("미션맨이 방문하는 곳 주소 : %d, 암호 : %d\n", mission_man, *mission_man);

// //두 번째 미션 : 각 암호에 3을 곱해라
// mission_man = &a;
// *mission_man = *mission_man*3;
// printf("미션맨이 암호를 바꾼곳 주소 : %d, 암호 : %d\n", mission_man, *mission_man);

// mission_man = &b;
// *mission_man = *mission_man*3;
// printf("미션맨이 암호를 바꾼곳 주소 : %d, 암호 : %d\n", mission_man, *mission_man);

// mission_man = &c;
// *mission_man = *mission_man*3;
// printf("미션맨이 암호를 바꾼곳 주소 : %d, 암호 : %d\n", mission_man, *mission_man);

// // 스파이
// //미션맨이 바꾼 암호에서 2를 빼라
// int *spy= mission_man;
// printf("\n .... 스파이가 미션 수행하는 중 ....\n\n");
// spy=&a;
// *spy = *spy - 2;
// printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", spy, *spy);

// spy=&b;
// *spy = *spy - 2;
// printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", spy, *spy);

// spy=&c;
// *spy = *spy - 2;
// printf("스파이가 방문하는 곳 주소 : %d, 암호 : %d\n", spy, *spy);

// printf("\n ... 철수 영희 민수는 집에 오고서는 바뀐 암호를 보고 깜놀 ...\n\n");

// printf("철수네 주소 : %d, 암호 : %d\n", &a, a);
// printf("영희네 주소 : %d, 암호 : %d\n", &b, b);
// printf("민수네 주소 : %d, 암호 : %d\n", &c, c);
// //참고 미션맨이 사는곳의 주소도 있을것이다
// printf("미션맨의 주소 : %d\n", &mission_man);
// printf("스파이의 주소 : %d\n", &spy);

// int arr[3] = {5, 10, 15};
// int *ptr = arr;
// for (int i = 0; i < 3; i++)
// {
//     printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
// }
// for (int i = 0; i < 3; i++)
// {
//     printf("포인터 ptr[%d] 의 값 : %d\n", i, ptr[i]);
// }

// ptr[0] = 100;
// ptr[1] = 200;
// ptr[2] = 300;
// for (int i = 0; i < 3; i++)
// {
//     printf("배열 arr[%d] 의 값 : %d\n", i, arr[i]);
//     // arr[i]는 *(arr+i) 와 같은것이다.
// }
// for (int i = 0; i < 3; i++)
// {
//     printf("포인터 ptr[%d] 의 값 : %d\n", i, ptr[i]);
// }
// // arr = arr배열의 첫번째 값의 주소와 동일 == &arr[0]

// Swap
//     int a = 10;
//     int b = 20;
//     //a와 b 의 값을 바꾼다.
//     printf("Swap 함수 전 => a : %d, b : %d\n", a,b);
//     swap_addr(&a,&b);
//     printf("Swap 함수 후 => a : %d, b : %d\n", a,b);

//     return 0;
// }

// void swap(int a, int b)
// {
//     int temp = a;
//     a=b;
//     b=temp;
//     printf("Swap 함수 내 => a : %d, b : %d\n", a,b);
// }
// void swap_addr(int *a, int *b)
// {
//     int temp = *a;
//     *a=*b;
//     *b=temp;
//     printf("(주소값 전달)Swap 함수 내 => a : %d, b : %d\n", *a,*b);
// }
// void changeArray(int *ptr)

// #include <stdio.h>
// #include <time.h>
//     //물고기가 6마리가 있어요 이들은 어항에 살고 있는데, 사막이에요  물이 다 증발하기 전에 부지런히 어항에 물을 줘서
//     // 물고기를 살려주세요

//     int level;
//     int arrayFish[6];
//     void initData();
//     void printfFishes();
//     int *cursor; // 1번 물고기한테 먹이를 줄지 2번 물고기 한테 먹이를 줄지 결정하는 변수
//     int main(void)
//     {
//         long startTime = 0;        //게임 시작 시간
//         long totalElapsedTime = 0; // 총 경과 시간
//         long prevElapsedTime = 0;  // 직전 경과 시간 (최근에 물을 준 시간 간격)

//         int num; //몇번 어항에 물을 줄것인지, 사용자 입력
//         initData();

//         cursor = arrayFish;

//         startTime = clock(); // 현재 시간을 milisecond(1000분의 1초) 단위로 반환
//         while (1)
//         {
//             printfFishes()
//                 getchar()
//         }
//         return 0;
//     }

//     void initData()
//     {
//         level = 1; // 게임 레벨 (1~5)
//         for (int i = 0; i < 6; i++)
//         {
//             arrayFish[i] = 100; //어항의 물 높이 (0~100)
//         }
//     }
//     void printfFishes()
//     {
//         printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1, 2, 3, 4, 5, 6);
//         for (int i = 0; i < 6; i++)
//         {
//             printf(" %4d ", arrayFish[i]);
//         }
//         printf("\n\n");
//     };

//다차원 배열
// #include <stdio.h>

// int main(void)
// {
//     // int i;
//     // int arr[5];
//     // int arr2[2][5];
//     // //ㅁㅁㅁㅁㅁ
//     // //ㅁㅁㅁㅁㅁ
//     // int arr3[4][2];
//     // //ㅁㅁ
//     // //ㅁㅁ
//     // //ㅁㅁ
//     // //ㅁㅁ

//     int arr[5] = {1, 2, 3, 4, 5};
//     int arr2[2][5] = {
//         {1, 2, 3, 4, 5},
//         {1, 2, 3, 4, 5}
//         };
//     int arr3[4][2]={
//         {1,2},
//         {1,2},
//         {1,2},
//         {1,2}
//     };
//     for (int i=0; i<4 ; i++)
//     {
//         for (int j=0; j<2; j++)
//         {
//             printf("2차원 배열 (%d, %d) 의 값 : %d\n",i ,j, arr3[i][j]);
//         }
//     }
//     return 0;
// }

//프로젝트
// #include <stdlib.h>
// #include <stdio.h>
// #include <time.h>
// // 10마리의 서로 다른 동물(각 카드 2장씩) 사용자로부터 2개의 입력값을 받아서 -> 같은 동물 찾으면 카드 뒤집기
// //  모든 동물 쌍을 찾으면 게임 종료
// //  총 실패 횟수 알려주기

// void initAnimalArray();
// int arrayAnimal[4][5];
// int checkAnimal[4][5]; //뒤집혔는지 여부 확인
// char *strAnimal[10];
// char *cPtr = "테스트";
// int getEmptyPosition();
// int conv_pos_x(int x);
// int conv_pos_x(int x);
// void printAnimals();
// void printQuestion();

// int main(void)
// {
//     srand(time(NULL));

//     initAnimalArray();
//     initAnimalName();
//     shuffleAnimal();

//     int failCount = 0; //실패 횟수를 저장

//     while (1)
//     {
//         int select1 = 0; //사용자가 선택한 처음 수
//         int select2 = 0; //사용자가 선택한 두번째 수

//         printAnimals();  // 동물위치 출력
//         printQuestion(); // 문제 출력 (카드 지도)
//         printf("뒤집을 카드를 2개 고르세요 : ");
//         scanf("%d %d", &select1, &select2);

//         if (select1 == select2)
//         {
//             continue;
//         }
//         //좌표에 해당하는 카드를 뒤집어 보고 같은지 안같은지 확인
//         int firstSelect_x = conv_pos_x(select1);
//         int firstSelect_y = conv_pos_y(select1);

//         int secondSelect_x = conv_pos_x(select2);
//         int secondSelect_y = conv_pos_y(select2);

//         if ((checkAnimal[firstSelect_x][firstSelect_y] == 0 && checkAnimal[secondSelect_x][secondSelect_y] == 0) &&
//             (arrayAnimal[firstSelect_x][firstSelect_y] == arrayAnimal[secondSelect_x][secondSelect_y]))
//         {
//             printf("\n\n빙고! : %s 발견 \n\n", strAnimal[firstSelect_x][firstSelect_y]);
//             checkAnimal[firstSelect_x][firstSelect_y] = 1;
//             checkAnimal[secondSelect_x][secondSelect_y] = 1;
//         }
//     }

//     return 0;
// }

// void initAnimalArray()
// {
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             arrayAnimal[i][j] = -1;
//         }
//     }
// }

// void initAnimalName()
// {
//     strAnimal[0] = "원숭이";
//     strAnimal[1] = "하마";
//     strAnimal[2] = "강아지";
//     strAnimal[3] = "고양이";
//     strAnimal[4] = "돼지";

//     strAnimal[5] = "코끼리";
//     strAnimal[6] = "기린";
//     strAnimal[7] = "낙타";
//     strAnimal[8] = "타조";
//     strAnimal[9] = "호랑이";
// }

// void shuffleAnimal()
// {
//     for (int i = 0; i < 10; i++)
//     {
//         for (int j = 0; j < 2; j++)
//         {
//             int pos = getEmptyPosition();
//             int x = conv_pos_x(pos);
//             int y = conv_pos_y(pos);

//             arrayAnimal[x][y] = i
//         }
//     }
// }

// //좌표에서 빈 공간 찾기
// int getEmptyPosition()
// {
//     while (1)
//     {
//         int randPos = rand() % 20; // 0~19 사이의 숫자 반환

//         int x = conv_pos_x(randPos);
//         int y = conv_pos_y(randPos);

//         if (arrayAnimal[x][y] == -1)
//         {
//             return randPos
//         }
//     }
//     return 0;
// }

// int conv_pos_x(int x)
// {
//     return (x / 5);
// }

// int conv_pos_y(int y)
// {
//     return (y % 5);
// }
// void printAnimals() // 동물 위치 출력
// {
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             printf("%8s", strAnimal[arrayAnimal[i][j]]);
//         }
//         printf("\n");
//     }
//     printf("\n==============================\n\n")
// }
// void printQuestion()
// {
//     printf("\n\n(문제)\n");
//     int seq = 0;
//     for (int i = 0; i < 4; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             if (checkAnimal[i][j] != 0)
//             {
//                 printf("%8s", strAnimal[arrayAnimal[i][j]]);
//             }
//             else
//             {
//                 printf("%d", seq);
//             }
//         }
//     }
// }

// 구조체 : 여러 관련 있는 변수들을 묶어서 하나로 묶는 역할

#include <stdio.h>
int main(void){
    printf("준성");
}