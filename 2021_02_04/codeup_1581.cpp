//codeup_1581 : (함수 작성+포인터) swap 함수 만들기 (Call by Reference)

#include <stdio.h>
// 이 부분에 들어가야 될 코드를 작성하여 제출
void myswap(int* a, int* b){
  if(*a > * b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
  }
}

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    myswap(&a, &b);
    printf("%d %d", a, b);
}