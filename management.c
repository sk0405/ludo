#include<stdio.h>
#include<stdlib.h>
int i,j;
int main_exit;
int main()
{
	char pass[10],password[10]="my cap";
	int i=0;
	printf("\n\n\t Enter the password to login");
	scanf("%s",pass);
	
	if(pass[i]!=13&&pass[i]!=8)
	{
		printf("");
		pass[i]=getch();
		i++;
	}
	while(pass[i]!=13);
	pass[10]="\0";
	if(strcmp(pass,password)==0)
	{
		printf("\n\n Password match");
		for(i=0;i<=6;i++)
		{
			fordelay(1000);
			printf(".");
		}
		system("cls");
		menu();
	}
	else
	{
		printf("\n\n Wrong Password");
		print("Enter 1 to retry & 0 to exit");
		scanf("%d",&main_exit);
		if(main_exit==1)
		{
			system("cls");
			main();
		}
		else if(main_exit=0)
		{
			system("cls");
			close();
		}
		else
		{
			printf("\n Invalid");
			foredelay(1000);
			system("cls");
			goto login_try
		}
	}
	return 0;
}
