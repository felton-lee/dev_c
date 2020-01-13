#include <stdio.h>

int main(){
	// 常量用const修饰,将变量变成常量,a是只读不可写入 
	const int a = 1;
	printf("a的值是%d",a);
	// a = 2;  [Error] assignment of read-only variable 'a'
	return 0; 
} 
