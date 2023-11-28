// Source Code
#include <stdio.h>
int main(){
int n,rem,rev=0;
scanf("%d",&n);
int t=n;
while(n>0)
{           rem=n%10;
	rev=rev*10+rem;
	n/=10;
}
if(t==rev)
{
	printf("palendrome");
}
else
{
	printf("no");
}
}