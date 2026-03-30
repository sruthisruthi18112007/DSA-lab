#include<stdio.h>
#define MAX 5

int queue[MAX];
int front=-1,rear=-1;

void enqueue()
{
	int item;
	if(rear==MAX-1)
	{
	printf("Queue Overflow!\n");
	return;	
	}
	printf("Enter elements to insert:");
	scanf("%d",&item);
	
	if(front==-1)
	  front=0;
	  queue[++rear]=item;
	  printf("Element inserted successfully.\n");
	  
	  void dequeue(){
	  	if(front==-1|| front>rear)
	  	{
	  		printf("Queue Underflow!\n");
	  		return;
		  }
		  printf("Deleted element:%d\n",queue[front++]);
	  }
	  void display()
	  {
	  	int i;
	  	if(front==-1||front>rear)
	  	{
	  		printf("Queue is empty.\n");
	  		return;
		  }
		 printf("Queue elements:\n");
		 for(i=front;i<=rear;i++)
		 printf("%d",queue[i]);
		 printf("\n"); 
	  }
}
int main()
   {
   	int choice;
   	do{
   		printf("\n---Queue Menu---\n");   		
		
   		
   		printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
   		printf("Enter your choice:");
   		scanf("%d",&choice);
   		
   		switch(choice){
   			case 1:
   			 enqueue();
			 break;
			case 2:
			 dequeue();
			 break;
			case 3:
			 display();
			 break;
			case 4:
			 printf("Exting program.\n");
			 break;
			default:
			 printf("Invalid choice!\n");   	
		   }
		   
	   }while(choice!=4);
	   return 0;
   }
