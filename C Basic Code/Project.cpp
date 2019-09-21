#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#define size 5
void pass_change(char password[20]);
//can make be by turbo
void menu();
void forgotpass(char name[20],char password[20]);
void payment(char name[20]);
int main()
{
	char password[20],c,rep[20],crush[20],crush1[20]="Imagination";
	///////////////////////////////////////
	FILE *fp;
	fp=fopen("password.txt","w");
	fprintf(fp,"Qwerty789!@#");
	fclose(fp);
	////////////////////////////////////////
	int freq=0,ch,i=0,quit=0;
	////////////////////////////////////////
	
	fp=fopen("password.txt","r");
	while(c=fgetc(fp)!=EOF)
	{
		password[i]=c;
		i++;
	}
	fclose(fp);
	////////////////////////////////////////
	char name[20],pass[20],password1[20]="Qwerty789!@#";
	printf("\n\n\n\n\t\t\t\t\t\t\t\t  SECURE PAYMENT GATEWAY\n\n");
	 	printf("\t\t\t\t\t\t\t\t\t Username\n\n\n\n");
	            	gets(name);
	do
	{
	printf("\t\t\t\t\t\t\t\t 1) Login Page\n\n");
	printf("\t\t\t\t\t\t\t\t 2) Change Password\n\n");
	printf("\t\t\t\t\t\t\t\t 3) Quit\n\n");
	printf("Enter your choice\n\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
	do
	{
	printf("\t\t\t\t\t\t\t\t\t Password\n\n\n\n");
	gets(pass);
	if(strcmp(password1,pass)==0)
	{
		payment(name);
		break;
	}
	else
	{
		if(freq==0)
		printf("\t\t\t\t\t\t\t\t\t Enter Password\n\n");
		else
		printf("\t\t\t\t\t\t\t\t\t Wrong Password!\n");
		freq++;
	}
	}while(freq!=3);
	if(freq==3)
	{
		forgotpass(name,password1);
	}
			break;
		case 2: pass_change(password);
			break;
			case 3: quit=1;
			break;
		default: printf("Get your eyesight checked\n\n\n");
		main();
	}
}while(quit!=1);
	return 0;
}
void payment(char name[20])
{
	int ch,quit=0;
	printf("\n\n\n\t\t\t\t\t\t\tWelcome %s to the Payment Gateway\n",name);
	printf("\n\n\n");
	menu();
	printf("\t\t\t\t\t\t\t\t\t Enter your choice\n");
	scanf("%d",&ch);
	do
	{
	switch(ch)
	{
		case 1:	printf("\t\t\t\t\t\t\t\t\t Finger Print Scanner\n");
			break;
		case 2:printf("\t\t\t\t\t\t\t\t\t Voice Recognition\n");
		 	break;
		case 3:printf("\t\t\t\t\t\t\t\t\t CAPTCHA\n");
		/*char code[size],ch,otp[size];
		int n=0;
		randomize();
		while(n<size)
		{
			ch=char(random(127));
			if(ch>='a'&&ch<='z'||ch>='0'&&ch<='9'||ch>='A'&&ch<='Z')
			{
				code[n++]=ch;
			}
		}
		code[n]='\0';
		printf("CAPTCHA CODE GENERATED\n");
		printf("%s",code);
		printf("Enter Captcha to verify\n\n");
		scanf("%s",&otp);
		if(strcmp(code,otp)==0)
		{
			printf("Code is verified\n");
		}
		else
		printf("Code is not verified\n");
			break;*/
		case 4: printf("\t\t\t\t\t\\t\t\t Quit\n");
		quit=1;
		break;	
	}
}while(quit!=1);
}
void forgotpass(char name[20],char password[20])
{
	char rep[20],crush[20];
	printf("Forgot Password\n");
	printf("Not %s??\n\n",name);
	printf("Want to try the security Question????\nIf Yes give me a Hell Yeah\n");
	scanf("%s",&rep);
	if(strcmpi(rep,"Hellyeah")==0)
	{
		printf("Whats the name of your crush\n\n");
		scanf("%s",&crush);
		if(strcmpi(crush,"imagination")==0)
		{
			printf("Your password is %s\t",password);
			main();
		}
		else
		{
			printf("Wrong Answer! Now goodbye!\n");
		}
	}
	else
	{
		printf("Nice to meet you! Click cross before you leave\n");
	}
}
void menu()
{
	printf("\t\t\t\t\t\t\t\t\t Option Menu\n\n");
	printf("\t\t\t\t\t\t\t\t\t 1) Finger Print Scanner\n");
	printf("\t\t\t\t\t\t\t\t\t 2) Voice Recognition\n");
	printf("\t\t\t\t\t\t\t\t\t 3) CAPTCHA\n");
	printf("\t\t\t\t\t\t\t\t\t 4) Quit\n");
}
void pass_change(char password[20])
{
	char pass1[20],c[20],c1[20];
	printf("Lets Change Password\n\n");
	FILE *fp;
	printf("Enter new password\n");
	scanf("%s",&c);
	printf("Confirm new password\n");
	scanf("%s",&c1);
	if(strcmp(c,c1)==0)
	{
		fp=fopen("Password.txt","a");
		fprintf(fp,c);
		fclose(fp);	
		printf("Password Successfully changed\n\n");
	}
	else
	{
		printf("Passwords Dont Match\n\n");
	}
	main();
}

