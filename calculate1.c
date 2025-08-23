#include<stdio.h>
int main(){
	int n=1,sum1,sum2;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(m=1;m<=i;m++){
			sum1+=m;}
		sum2+=sum1;}
	prinf("%d",sum2);
	return 0;
}

