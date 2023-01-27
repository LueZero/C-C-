#include <iostream>

int main()
{
  int a = 15;
  int b = 2;
  int c = 39;
  int d = 180;
  int e = 67;

  // 取址 &
  printf("變數 b 的值：%d\n", b);
  printf("變數 b 的記憶體位址：%p\n", &b); //%p為印出地址的16進位表示法

  // 取值 *
  printf("變數 b 的記憶體位址：%p\n", *&b); //從這個地址中取出變數b的值

  // 指標變數（Pointer variable）

  return 0;
}