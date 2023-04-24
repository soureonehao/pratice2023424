#include<stdio.h>
#define N 3
struct shijan {
	int year, month, day;
};
struct daan {
	char xuehao[10];
	char name[10];
	struct shijan  date;
	int score;
}Stu[N];
void main() {
	int i;
	printf("请输入%d个人的信息", N);
	for (i = 0; i < N; i++) {
		printf("请输入第%d个同学的信息：\n", i + 1);
		printf("学号：");
		scanf_s("%s", Stu[i].xuehao, 10);
		printf("\n姓名：");
		scanf_s("%s", Stu[i].name,10);
		printf("\n入学时间（年月日）：");
		scanf_s("%d%d%d", &Stu[i].date.year, &Stu[i].date.month, &Stu[i].date.day);
		printf("\n成绩：");
		scanf_s("%d", &Stu[i].score);
	}
	printf("您录入的%d位同学的信息如下：\n", N);
	for (i = 0; i < N; i++) {
		printf("学号：%s 姓名： %s 入学时间：%d-%d-%d 成绩： %d", Stu[i].xuehao, Stu[i].name, Stu[i].date.year, Stu[i].date.month, Stu[i].date.day, Stu[i].score);
		printf("\n");
	}
	getch();
}