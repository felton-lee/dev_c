#include <stdio.h>
#include <string.h>

/*
单链表实现: 
Book是结构体指针. 
Book来充当单链表的一个节点,name是数据域,next是指针域. 
*/
struct Book{
	char name[10];
	float price;
	struct Book *next; 
}; 

//填充数据域数据
void write_msg(struct Book *book){
	printf("请输入书名:\n");
	scanf("%s",&book->name);
	printf("请输入价格:\n");
	scanf("%f",&book->price);
} 

/*
创建节点:
lib的作用是指向结构体指针的指针,获取值必须是两层解引用. 
create_node实质是修改lib指向问题,传参就是lib的地址. 
*/
void create_node(struct Book **lib){
	//临时指针
	struct Book *temp; 
	//创建结构体的指针域并申请内存
	struct Book *book;
	book = (struct Book *)malloc(sizeof(struct Book));
	//利用指针域修改数据域
	write_msg(book); 
	//判断是空的单链表还是有数据的单链表
	if(*lib != NULL){
		temp = *lib;
		*lib = book;
		book->next = temp;
	} 
	else{
		*lib = book;
		book->next = NULL; // 表示节点结束 
	}
} 

/*
查看录入信息:
直接用指针域去访问数据域,一层解引用获取属于该节点的指针即可 
*/
void print_msg(struct Book *lib){
	struct Book *book;
	book = lib;
	printf("录入的信息是:\n");
	printf("书的名字是:%s\n",book->name);
	printf("书的价格是:%.2f\n",book->price);
	//book = book->next;	 
} 

//释放内存 
void free_book(struct Book *lib){
	free(lib);
	//lib = lib->next;
} 

int main(){
	//定义头指针,初始为指向NULL,表示该链表没有数据. 
	struct Book *lib = NULL; 
	//创建单个节点 
	create_node(&lib);
	//查看录入信息
	print_msg(lib);
	//释放内存
	free_book(lib);
	
	return 0; 
	 
}
