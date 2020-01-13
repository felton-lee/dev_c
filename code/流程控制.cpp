#include <stdio.h>

int main(){
	int a = 1;
	// if-else分支 
	if(a == 1){
		printf("a=%d\n",a);
	}else{
		printf("a=0");
	}
	// if-else if-else分支
	if(a == 2){
		printf("a=%d\n",a);
	}
	else if(a == 1){
		printf("else if 语句\n"); 
	}
	else{
		printf("else 语句\n"); 
	}
	// switch语句
	int b;
	printf("请输入年龄:\n");
	scanf("%d",&b);
	switch(b){
		case 1:
			printf("b的值是%d",b);
			break;
		case 2:
			printf("b的值是%d",b);
			break;
		default:
			printf("没有匹配的值"); 
	}
	// for 循环语句
	 
	return 0;
} 
