#include<stdio.h>
#include<stdlib.h>
#define pf printf
#define sf scanf
int main(int argc,char* argv[]) {
	
	//int n1,n2;
	if(argc>1) {
		pf("This is Client with the result...\n");
		pf("The result is: %s\n",argv[1]);
	}
	char op,n1[4],n2[4];
	pf("enter the operation\n");
	scanf("%s %c %s",n1,&op,n2);
	char *arg[]={"./server",n1,n2,&op,NULL};
	execv(arg[0],arg);
	//exit(0);
	return 0;
}
