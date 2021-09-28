#include<stdio.h>
int main()
{
	int y,m,d,y1,y2,p;
	int a[12]={31,28,31,30,31,30,31,31,30,31,30,31},i,sum=0;
	printf("Enter the year,month and date");
	scanf("%d %d %d",&y,&m,&d);
	y1=y-1;
	y2=y1/4-y1/100+y1/400; // leap years
	p=365*y1+y2;
	p=p%7;
	
	//part 1 completed
	
	if(y%4==0)
		if(y%100==0)
			if(y%400==0)
				a[1]=29;
			else
				;
		else
			a[1]=29;
	else 
		;
		
	for(i=0;m-2>=i;i++)
	{
		sum=sum+a[i];
	}
	sum=sum+(d-1);
	sum=sum%7;
	
	// part 2 completed
	
	p=p+sum;
	p=p%7;
	
    if(p==0)                    
     	printf("Monday");
	if(p==1)
		printf("Tuesday");
	if(p==2)
		printf("Wednesday");
	if(p==3)
		printf("Thursday");
	if(p==4)
		printf("Friday");
	if(p==5)
		printf("Saturday");		
	if(p==6)
	   	printf("sunday");
	
}
