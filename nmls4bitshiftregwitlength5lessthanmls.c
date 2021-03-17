#include<stdio.h>
void main(){
char a[]={1,0,0,0};
char temp;
int i,j;
char msblsb[15];
msblsb[14]=0;
for(j=0;j<=3;j++)
    {
        printf("%d",a[j]);
    }
    printf("\n");
for(i=13;i>=0;i--)
{
    temp=a[2]^a[3];
    for(j=3;j>=1;j--)
    {
        a[j]=a[j-1];
    }
    a[0]=temp;
    msblsb[i]=a[3];
    for(j=0;j<=3;j++)
    {
        printf("%d",a[j]);
    }
    printf("\n");
}
for(i=0;i<15;i++)
{
    printf("%d",msblsb[i]);
}
 printf("\n");


for(i=0;i<15;i++)
{
    if(msblsb[i]^msblsb[(i+10)%15]==0&&
       msblsb[i+1]^msblsb[(i+1+10)%15]==0&&
       msblsb[i+2]^msblsb[(i+2+10)%15]==0&&
       msblsb[i+3]^msblsb[(i+3+10)%15]==1)
            break;
}
int flag=i;
printf("%d\n",flag);
printf("from above line which starts from 0index  at 7th index take 4 next bits detect it in series of 15");
}
