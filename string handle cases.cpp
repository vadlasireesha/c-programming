#include<stdio.h>
int main()
{
	char s1[10],s2[10];
	printf("/n1. string length");
	printf("/n2. string copy");
	printf("/n3. string compare");
	printf("/n4. string reverse");
	printf("/n5. string concatination");
	printf("/n6. string uppercase");
	printf("/n7. string lowercase");
	printf("select any option");
	scanf("%d",& choice);
	switch(choice);
	{
	case 1:
	printf("enter the string");
	scanf("%[^/n]",s1);
	printf("length of given string:%d",strlen(s1));
	break;
	}
	case 2;
	{
		printf("enter a  string");
		scanf("%[^/n]",s1);
		strcpy(s2,s1);
		printf("copied string is %s",s2);
		break;
	}
	case 3;
	{
		printf("enter a string s1:");
		scanf("%[^\n]",s1);
		printf("enter a string s2:");
		scanf("%[^\n]",s2);
		printf("comparing two strings:%d",strcmp(s1,s2);)
		break;
	}
		case 4;
		{
			printf("enter a string s1:");
			scanf("%[^\n]",s1);
			printf("reverse of a string is :%s",strrev(s1));
			break;
		}
		case 5;
		{
			printf('enter a string s2:');
			scanf("%[^\n]",s2);
			printf("concondenation of a string is:%d",strcat(s1,s2));
			break;
		}
case 6;
{
printf("enter a string s1:");
			scanf("%[^/n]",s1);	
			printf("lower case of strings:%s",strlow(s2));
			break;
		}
		case 7;
		{
			printf('enter a string s2:');
			scanf("%[^\n]",s2);
		printf("upper case of given string is:%s",strupr(s1));
		break;
	}
	default;
	{
		printf("invalid option");
		
	}
		
		
}





