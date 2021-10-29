#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//结构体可以让C语言创建新的类型出来

//创建一个学生
struct stu
{
	char name[20];//成员
	int age;
	double score;
};

//创建一个书的类型
struct book
{
	char name[20];
	float price;
	char id[30];
};



int main()
{
	struct stu s = { "张三",20,85.5 };//结构体的创建和初始化
	printf("1:%s %d %lf\n", s.name,s.age,s.score);//结构体变量  .成员变量



	struct stu* ps = &s; //放到指针变量也能使用
	printf("2:%s %d %lf\n",  (*ps).name, (*ps).age, (*ps).score);



	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);  // ->箭头操作符  左边一定是结构体的指针  ->成员名
	return 0;
}