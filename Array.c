#include <stdio.h>
int main()
{
int num[3];
int temp;
int i,n;
for(i=0;i<3;i++)
{
printf("Enter an integer:");
scanf("%d",&num[i]);
}
printf("Your numbers were: ");
for(n=0;n<3;n++)
{
printf("%d \t",num[n]);
}
printf("\n");
return 0;
}

