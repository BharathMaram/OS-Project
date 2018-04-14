#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,n,a[20],frame[10],f,k,avail,count=0;
printf("\n Enter Number of pages(0-9): \n");
scanf("%d",&n);
if(n<=9)
{
printf(" \n Enter Page Numbers: \n");
for(i=1;i<=n;i++)
scanf("%d",&a[i]);
printf(" \n Enter Number of Frames(1-7):");
scanf("%d",&f);
	if(f<=7)
	{
	for(i=0;i<f;i++)
    frame[i]=-1;
    j=0;
    printf("Ref_String \t    Frames \n");
for(i=1;i<=n;i++)
{
    printf("%d \t \t",a[i]);
    avail=0;
    for(k=0;k<f;k++)
		if(frame[k]==a[i])  avail=1;
if(avail==0)
{
    frame[j]=a[i];
    j=(j+1)%f;
    count++;
    for(k=0;k<f;k++)
    	printf("%d \t",frame[k]);
}
printf(" \n");
}
printf("PageFault Is %d",count);
return 0;	
	}
	else
	{
		printf("Invalid Page Frames");
	}
}
else
{
	printf("SORRY::::[You Entered Invalid page numbers]");
}

}
