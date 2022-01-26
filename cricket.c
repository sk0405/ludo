#include"declaration.h"
#include"welcome.h"
#include"menu.h"
#include"newscoresheet.h"

int main()
{
	int a,key;
	char b;
	File*fnew;
	char lastinput;
	while(TRUE)
	{
		welcome();
		system("cls");
		menu();
		ch=gtch();
		char ch;
		switch(ch)
		{
			case 1: fileopen(ch); break;
			case 2: fileopen(ch);
			         getch();break;
			case 3: system("cls");
			exit(0);
		}
	}
}
