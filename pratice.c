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
	printf("������%d���˵���Ϣ", N);
	for (i = 0; i < N; i++) {
		printf("�������%d��ͬѧ����Ϣ��\n", i + 1);
		printf("ѧ�ţ�");
		scanf_s("%s", Stu[i].xuehao, 10);
		printf("\n������");
		scanf_s("%s", Stu[i].name,10);
		printf("\n��ѧʱ�䣨�����գ���");
		scanf_s("%d%d%d", &Stu[i].date.year, &Stu[i].date.month, &Stu[i].date.day);
		printf("\n�ɼ���");
		scanf_s("%d", &Stu[i].score);
	}
	printf("��¼���%dλͬѧ����Ϣ���£�\n", N);
	for (i = 0; i < N; i++) {
		printf("ѧ�ţ�%s ������ %s ��ѧʱ�䣺%d-%d-%d �ɼ��� %d", Stu[i].xuehao, Stu[i].name, Stu[i].date.year, Stu[i].date.month, Stu[i].date.day, Stu[i].score);
		printf("\n");
	}
	getch();
}