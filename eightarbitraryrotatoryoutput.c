#include<stdio.h>
void main(){
char a[]={1,0,0,0,0,0,0,0};
char temp;
int count;
FILE *f;
f=fopen("NMLSwithlength8.txt","w");
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
    printf("%d",msblsb[(i+255-247)%255]);
   fprintf(f,"%d",msblsb[(i+255-247)%255]);
    if((i+1)%100==0){
        printf("\n");
        fprintf(f,"\n");
    }

}
printf("\n\n");
fprintf(f,"\n\n");

for(i=0;i<255;i++)
{
    printf("%d",msblsb[i]^msblsb[(i+255-247)%255]);
   fprintf(f,"%d",msblsb[i]^msblsb[(i+255-247)%255]);
    if((i+1)%100==0){
        printf("\n");
        fprintf(f,"\n");
    }

}
 printf("\n\n");
fprintf(f,"\n\n");


for(i=0;i<255;i++)
{
    if(msblsb[i]^msblsb[(i+255-247)%255]==0&&
       msblsb[i+1]^msblsb[(i+1+255-247)%255]==0&&
       msblsb[i+2]^msblsb[(i+2+255-247)%255]==0&&
       msblsb[i+3]^msblsb[(i+3+255-247)%255]==0&&
       msblsb[i+4]^msblsb[(i+4+255-247)%255]==0&&
       msblsb[i+5]^msblsb[(i+5+255-247)%255]==0&&
       msblsb[i+6]^msblsb[(i+6+255-247)%255]==0&&
       msblsb[i+7]^msblsb[(i+7+255-247)%255]==1)

            break;
}
int flag=i;
printf("%d\n",flag);
printf("from above line which starts from 0index  at flag th index take 7 next bits detect it in series of 255\n");
fprintf(f,"%d\n",flag);
 for(j=flag;j<=flag+7;j++)
    {
        printf("%d",msblsb[j%255]);
        fprintf(f,"%d",msblsb[j%255]);
    }
    printf("\n\n");
fprintf(f,"\n\n");
char temp2=!(msblsb[(flag+1)%255]^msblsb[(flag+2)%255]^msblsb[(flag+3)%255]^msblsb[(flag+7)%255]);
char b[]={temp2,msblsb[flag%255],msblsb[(flag+1)%255],msblsb[(flag+2)%255],msblsb[(flag+3)%255],msblsb[(flag+4)%255],
            msblsb[(flag+5)%255],msblsb[(flag+6)%255]};
    for(j=0;j<=7;j++)
    {
        printf("%d",b[j]);
        fprintf(f,"%d",b[j]);
    }
  printf("\n");
fprintf(f,"\n");

count=1;
while(!(b[0]==msblsb[flag%255]&&b[1]==msblsb[(flag+1)%255]&&b[2]==msblsb[(flag+2)%255]&&b[3]==msblsb[(flag+3)%255]
        &&b[4]==msblsb[(flag+4)%255]&&b[5]==msblsb[(flag+5)%255]&&b[6]==msblsb[(flag+60)%255]&&b[7]==msblsb[(flag+7)%255]))
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



