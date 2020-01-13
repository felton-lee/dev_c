#include <stdio.h>
#include <stdbool.h>
int main(){
	short int a1 = 18;                    // -2**15~2**15-1
	int a2 = 1;                           // -2**31~2**32-1
	long int a3 = 2;                      // -2**31~2**32-1
	long long int a4 = 4000;              // -2**63~2**63-1
	float b1 = 3.14;                      // -2**31~2**32-1
	double b2 = 3.14;                     // -2**63~2**63-1
	long double b3 = 3.14;                // -2**127~2**127-1
	bool m = 0;                           // -2**7~2**7-1
	char c = 'A';                         // -2**7~2**7-1
	// 字符串的定义:两种:字符集数组,字符集指针
	// 字符集数组
	char s1[] = "liyang"; 
	// 字符集指针
	char *s2 = "felton_lee"; 
	printf("short int------字节:%d\n",sizeof(a1));
	printf("int------------字节:%d\n",sizeof(a2));
	printf("long int-------字节:%d\n",sizeof(a3));
	printf("long long int--字节:%d\n",sizeof(a4));
	printf("float----------字节:%d\n",sizeof(b1));
    printf("double---------字节:%d\n",sizeof(b2));
    printf("long double----字节:%d\n",sizeof(b3));
	printf("bool-----------字节:%d\n",sizeof(m));
	printf("char-----------字节:%d\n",sizeof(c));
	printf("字符集数组-----字节:%d\n",sizeof(s1));
	
	// 关于字符集指针怎么取值？？？ 
	
	return 0; 
} 
