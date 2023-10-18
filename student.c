#include<stdio.h>
#include<stdlib.h>
#define max1 10
char name[max1];
int n;
float sub[max1];
float max=0,min=100,mean=0;
void accept()
{
	int i;
    printf("Enter Name: ");
    scanf("%s",name);
    printf("Enter number of Subjects: ");
    scanf("%d",&n);
    printf("Enter Marks out of 100: ");
    for(i=0;i<n;i++)
    	scanf("%f",&sub[i]);
}
void Calculate()
{
  	int i;
    for(i=0;i<n;i++)
    {
        if(sub[i]>max)
          	max=sub[i];
        if(sub[i]<min)
           	min=sub[i];
        mean += sub[i];
    }
    mean /= n;
}
void display()
{
	int i;
	printf("\nStudent name: %s",name);
	printf("\nStudent Marks:");
	for(i=0;i<n;i++)
	{
		if(sub[i]>40)
			printf("\nMarks[%d]: %0.2f \t PASS",i+1,sub[i]);
		else
			printf("\nMarks[%d]: %0.2f \t FAIL",i+1,sub[i]);
	}
	printf("\nMaximum Marks: %0.2f",max);
	printf("\nMinimum Marks: %0.2f",min);
	printf("\nAverage Marks: %0.2f",mean);
}
void main()
{
	int ch,flag=1;
	while(flag)
	{
		printf("\nEnter 1 to Enter details of the Student and 2 to Exit: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				accept();
				Calculate();
				display();
				break;
			case 2:
				flag=0;
				break;
			default:
				printf("Invalid Choice...");
		}
	}
}