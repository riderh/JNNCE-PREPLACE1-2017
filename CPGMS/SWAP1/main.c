
#include<stdio.h>
int main()
{
int M=0,N=0;
printf("ENTER VALUES FOR M AND N\n");
scanf("%d %d",&M,&N);
printf("BEFORE SWAPING M=%d and N=%d\n",M,N);
M=M+N;
N=M-N;
M=M-N;
printf("AFTER SWAPING M=%d and N=%d\n",M,N);
return 0;
}
