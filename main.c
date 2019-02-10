#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#define sove_num 5     /*第一处可变更点*/
#define ext 10         /*第二处可变更点*/
int sov[sove_num]={0},s;
int so_ch;
void sove_change(int sov[sove_num]);
int sove_code();
int en_code();

int main()
{
	int sort;
	for(s=0;s<sove_num;s++)
	{
		printf("enter the key-code(enter to seprate):\n");
	    scanf("%d",&sov[s]);
	}
	
	printf("which kind do you need? 1 is encode, 2 is sovecode\n");
	scanf("%d",&sort);
	switch(sort)
	{
		case 1:en_code();break;
		case 2:sove_code();break;
	}
	
	getchar();
	getchar();
	return 0;
	
} 

void sove_change(int sov[sove_num])
{
	sov[0]++;
	for(so_ch=0;so_ch<sove_num;so_ch++)
	{
		if(sov[so_ch]==ext)
		{
			sov[so_ch]=0;
			if(so_ch+1!=sove_num)
			{
				sov[so_ch+1]++;
			}
			else
			{
				printf("this key-code has extended!change it and resend!");
				exit(-1);
			}
			
		}
	}
}
