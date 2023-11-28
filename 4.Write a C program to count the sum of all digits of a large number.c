// Source Code
#include <stdio.h>
int main(){
long long int n;
int rem,rev=0;
scanf("%d",&n);

while(n>0)
{
	rem=n%10;
	rev+=rem;
	n/=10;
}
printf("%d",rev);
}