#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#define sove_num 5

void sove_change(int sov[sove_num]);
int s;
int sov[sove_num];

int nu_encode()
{

	int n_o;
	int n_from,n_out;
	printf("the number that need to be encode->");	
	scanf("%d",&n_from);
	n_o=n_from;
    for(s=0;s<sove_num;s++)
    {
	   	n_o=n_o+sov[s];
    }
    sove_change(sov);
	n_out=n_o%10;
	printf("%d\n",n_out);
}

char ch_encode()
{
	char c_from,c_out;
	char c_o;
	char chsov[100],tmp;
	int t,count;
	getchar();
	printf("the letter that need to be encode(less than 80 letters)->\n");	
	for(count=0;count<100;count++)
	{
		scanf("%c",&tmp);
		if(tmp!='\n')
		{
			chsov[count]=tmp;
		}
		else
	    	break;
	}
	t=count;
	printf("\n********************************\n");
	for(count=0;count<t;count++)
	{
		if(chsov[count]!=' ')
		{
			c_from=chsov[count];
	        c_o=0;	
            for(s=0;s<sove_num;s++)
            {
	   	        c_o=c_o+sov[s];
            }
            sove_change(sov);
         	c_out=(c_from-'a'+c_o)%26+'a';
        	(char)c_out;
        	printf("%c",c_out);
		}
		else
		{
			printf(" ");
		}
		
	}
	printf("\n********************************\n");

	
	
}

void en_scanning(int search)
{
	switch(search)
	{
		case 1: nu_encode() ; break;
	    case 2: ch_encode(); break;
	}
	
}

int en_code()
{
	int sc;
	printf("which to encode?\nnum is 1,char is 2(no signal),quit is -1///    ");
	scanf("%d",&sc);
	while (sc!=-1)
	{
		en_scanning(sc);
		printf("which to encode?\nnum is 1,char is 2(no signal),quit is -1///    ");
	    scanf("%d",&sc);
	}
	
	return 0;
} 



