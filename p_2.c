/*��д��������ѧ�������ġ���ѧ��Ӣ��ɼ����ݣ����ýṹ�������ţ�
��Ӣ��ɼ���������������������������ݱ������ļ�student.dat�С��������������£�*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define N 3    
struct Stu
{
	float Chinese;
	float Math;
	float English;
}s[N];

void sort()
{
	struct Stu temp;
	int i,j;
		for(i=0;i<N-1;i++)
		{
			for(j=0;j<N-1-i;j++)
			{
				if(s[j].English>s[j+1].English)
				{
					temp=s[j];
					s[j]=s[j+1];
					s[j+1]=temp;
				}
				else if(s[j].English==s[j+1].English&&s[j].Math>s[j+1].Math)
				{
					temp=s[j];
					s[j]=s[j+1];
					s[j+1]=temp;
				}
				else if((s[j].English==s[j+1].English)&&(s[j].Math==s[j+1].Math)&&(s[j].Chinese>s[j+1].Chinese))
				{
					temp=s[j];
					s[j]=s[j+1];
					s[j+1]=temp;
				}
			}
		}
}

void print()
{
	int i;
	printf("�����ĸ���ɼ�Ϊ��\n");
	for(i=0;i<N;i++)
	printf("���ģ�%.2f ��ѧ��%.2f Ӣ�%.2f\n",s[i].Chinese,s[i].Math,s[i].English);
}

void writr_to_file()
{
	int i;
	FILE * fp;
	if((fp=fopen("C:\Users\asus\Desktop\\student.dat.txt","w"))==NULL)
	{
		printf("can not open file student.dat.txt");
		exit(0);
	}
	for(i=0;i<N;i++)
	{
		fprintf(fp,"���ģ�%.2f ��ѧ��%.2f Ӣ�%.2f\n",s[i].Chinese,s[i].Math,s[i].English);
	}
	fclose(fp); 
} 

int main()
{ 
	int i;
	printf("����  ��ѧ  Ӣ�\n");
	for(i=0;i<N;i++)
	 scanf("%f %f %f",&s[i].Chinese,&s[i].Math,&s[i].English);
	sort();
	print();
	writr_to_file();
	return 0;
}
