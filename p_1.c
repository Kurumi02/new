/*���ýṹ��������ƶԺ�ѡ�˵�Ʊ��ͳ�Ƴ�������������ѡ��Li��Zhang��Wu ��
����10�˲μ�ͶƱ��ÿ������һ����Ʊ�ĺ�ѡ�˵����֣�Ҫ����������������ѡ�˸��Եĵ�Ʊ�����*/
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
