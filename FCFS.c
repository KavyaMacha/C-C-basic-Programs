#include<stdio.h>
int main()
{
	int processors;
	printf("Enter Number of processors : "); 
	scanf("%d",&processors);
	int burstTime[processors];
	for(int i=0;i<processors;i++)
	{
		printf("Enter Burst Time of Process - %d : ",i); 
		scanf("%d",&burstTime[i]);
	}
	int completionTime[processors];
	int end=0;
	printf("Gant Chart :\n");
	for(int i=0;i<processors;i++)
	{
		completionTime[i]=end+burstTime[i];
		printf("P%d\t %d-%d\n",i,end,completionTime[i]);
		end=completionTime[i];
	}
	printf("The Turn-Around-Time for process P3 is : ");
	//TAT = completionTime - arrival Time
	int TAT=completionTime[3]-0; //0 is the arrival time
	printf("%dsec\n",TAT);
	int waiting=0;
	for(int i=0;i<processors;i++)
	{
		waiting+=completionTime[i]-burstTime[i];
	}
	printf("Average Waiting Time is : %dsec",waiting/processors);


}
