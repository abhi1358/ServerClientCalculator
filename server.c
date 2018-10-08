#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc, char *argv[]) {
	int n1=0,n2=0,result,i;
	int s1=strlen(argv[1]);
	int s2=strlen(argv[2]);
	for(i=0;i<s1;++i) {
		n1=n1*10+(argv[1][i]-'0');
	}
	for(i=0;i<s2;++i) {
		n2=n2*10+(argv[2][i]-'0');
	}
	switch(argv[3][0]) {
		case '+': result = n1 + n2;
				break;
		case '-': result = n1 - n2;
				break;
		case '*': result = n1 * n2;
				break;
		case '/': result = n1 / n2;
				break;
	}
	char res[1000];
	sprintf(res,"%d",result);
	//printf("%d\n",res);
	char* arg[]={"./client",res,NULL};
	printf("Hello , This is Server.Computing the result.\n");
	execv(arg[0],arg);
	return 0;
}
