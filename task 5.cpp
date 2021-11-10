#include<stdio.h>
#include<string.h>

void revers (){
	char x[30];
	printf("please enter your sentnse : ");
	scanf("%s", &x);
	for (int i=strlen(x) ; i>=0; i--){
		printf("%c",x[i]);}
}
int main (){
	 
	revers ();
	return 0;
}
