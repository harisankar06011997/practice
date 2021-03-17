#include<stdio.h>
void main(){
char a[]={1,0,0,0,0,0,0,0};
char temp;
int count;
FILE *f;
f=fopen("NMLS.txt","w");
int i,j;
char msblsb[255];
msblsb[254]=0;
for(j=0;j<=7;j++)
    {
        printf("%d",a[j]);
        fprintf(f,"%d",a[j]);
    }
    printf("\n");
    fprintf(f,"\n");

for(i=253;i>=0;i--)
{
    temp=a[1]^a[2]^a[3]^a[7];
    for(j=7;j>=1;j--)
    {
        a[j]=a[j-1];
    }
    a[0]=temp;
    msblsb[i]=a[7];
    for(j=0;j<=7;j++)
    {
        printf("%d",a[j]);
        fprintf(f,"%d",a[j]);
    }
    printf("\n");
    fprintf(f,"\n");

}
printf("\n\n");
fprintf(f,"\n\n");
for(i=0;i<255;i++)
{
    printf("%d",msblsb[i]);
   fprintf(f,"%d",msblsb[i]);
    if((i+1)%100==0){
        printf("\n");
        fprintf(f,"\n");
    }

}
 printf("\n\n");
fprintf(f,"\n\n");
for(i=0;i<255;i++)
{
    printf("%d",msblsb[(i+255-109)%255]);
   fprintf(f,"%d",msblsb[(i+255-109)%255]);
    if((i+1)%100==0){
        printf("\n");
        fprintf(f,"\n");
    }

}
printf("\n\n");
fprintf(f,"\n\n");

for(i=0;i<255;i++)
{
    printf("%d",msblsb[i]^msblsb[(i+255-109)%255]);
   fprintf(f,"%d",msblsb[i]^msblsb[(i+255-109)%255]);
    if((i+1)%100==0){
        printf("\n");
        fprintf(f,"\n");
    }

}
 printf("\n\n");
fprintf(f,"\n\n");


for(i=0;i<255;i++)
{
    if(msblsb[i]^msblsb[(i+255-109)%255]==0&&
       msblsb[i+1]^msblsb[(i+1+255-109)%255]==0&&
       msblsb[i+2]^msblsb[(i+2+255-109)%255]==0&&
       msblsb[i+3]^msblsb[(i+3+255-109)%255]==0&&
       msblsb[i+4]^msblsb[(i+4+255-109)%255]==0&&
       msblsb[i+5]^msblsb[(i+5+255-109)%255]==0&&
       msblsb[i+6]^msblsb[(i+6+255-109)%255]==0&&
       msblsb[i+7]^msblsb[(i+7+255-109)%255]==1)

            break;
}
int flag=i;
printf("%d\n",flag);
printf("from above line which starts from 0index  at flag th index take 7 next bits detect it in series of 255\n");
fprintf(f,"%d\n",flag);
 for(j=flag;j<=flag+7;j++)
    {
        printf("%d",msblsb[j]);
        fprintf(f,"%d",msblsb[j]);
    }
    printf("\n\n");
fprintf(f,"\n\n");

char b[]={1,1,0,0,1,1,0,1};
    printf("11001001\n");
fprintf(f,"11001001\n");
count=1;
while(!(b[0]==1&&b[1]==0&&b[2]==0&&b[3]==1&&b[4]==1&&b[5]==0&&b[6]==1&&b[7]==1))
{
    count++;
    temp=b[1]^b[2]^b[3]^b[7];
    for(j=7;j>=1;j--)
    {
        b[j]=b[j-1];
    }
    b[0]=temp;
    for(j=0;j<=7;j++)
    {
        printf("%d",b[j]);
        fprintf(f,"%d",b[j]);
    }
  printf("\n");
fprintf(f,"\n");
}
 printf("\n%d\n",count);
fprintf(f,"\n%d\n",count);
}


