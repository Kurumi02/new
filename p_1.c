/*利用结构体数组设计对候选人得票的统计程序。设有三个侯选人Li、Zhang与Wu ，
共有10人参加投票，每次输入一个得票的候选人的名字，要求最后输出这三个候选人各自的得票结果。*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	struct person
	{
		char name[22];
		int count;
	}FG[3]={"Li",0,"Zhang",0,"Wu",0};
	char N_name[22];
	int i,j;
	printf("Please input ten votes:\n",N_name);
	for(i=0;i<10;i++)
	{
		scanf("%s",N_name);
		for(j=0;j<3;j++)
		{
		if(strcmp(N_name,FG[j].name)==0)FG[j].count++;
		}
	}
	printf("\n");
	for(j=0;j<3;j++);
	printf("%s:%d\n",FG[0].name,FG[0].count);
	printf("%s:%d\n",FG[1].name,FG[1].count);
	printf("%s:%d\n",FG[2].name,FG[2].count);
	return 0;
}
