#include <stdio.h>

// 以后出现的NAME的标识符全部替换为后面的值 
#define NAME "lee"
#define PI 3.14 

int main(){
	printf("名字是%s\n",NAME);
	printf("pi的值是%.2f",PI);
	return 0;
} 
