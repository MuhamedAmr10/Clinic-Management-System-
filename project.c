#include <stdio.h>
#include "std_types.h"
#include <stdlib.h>
typedef struct 
{
	u8 reserve :1 ;
	char name[20];
	u16 id;
	char gendre[20];
	u8 age;
}inf;
typedef struct node_t node ;
struct node_t
{
	inf data ;
	node *tail;
};
node * head =NULL_POINTER;

void view_reservation(u32 * ptr);
void reserve(u16 id);
u8 check_reserve(u16 id);
void searchpath(u16 id);
u8 check_id(u16 id);
void addnode(inf x);
node* createnode(inf x);
void cancel_slot(u16 id);
void view_patient(u16 id);

u16 main(void)
{
	u32 *ptr =NULL_POINTER;
	ptr =(u32*)calloc(5,sizeof(u16));
	inf data;
	u16 password,x;
	u8 choice=-1,i;
	 while(1)
	{
		
	printf("Welcome..\nfor admin mode entre        1\nfor user mode entre         2\n\n\n");
	printf("please entre your choice : ");
	scanf("%hu",&choice);
	if(choice==1)//for admin mode
	{
		printf("\n\nWelcome to the admin mode\n");
		printf("please entre the password : ");
		scanf("%u",&password);
		
		if(password==1234)
		{ 
			u8 choice1=-1 ;
			while((1)&&(choice1!=0))
			{
			printf("\n\nWelcome to main list.. \nfor adding new patient entre               1\nfor editing patient record entre           2\nfor reserving a slot with the doctor entre 3\nfor canceling reservation entre            4\nfor existing the program entre             0\n\n\n");
			printf("please entre your choice : ");
			scanf("%hu",&choice1);
			if(choice1==1)//adding
			{
				u8 res;
	            printf("please entre patient name :");
	            scanf("%s",&data.name);
	            printf("please entre patient age :");
	            scanf("%hu",&data.age);
				printf("please entre patient gender :");
	            scanf("%s",&data.gendre);
	            printf("please entre patient ID :");
	            scanf("%u",&data.id);
	            res=check_id(data.id);
	            if(res!=0)
	            {
                 addnode(data);
	            }
				else
				{
					printf("\n\nsorry the ID you entred is already exist\n\n\n");
				}
			}
			else if(choice1==2)//editing
			{
				printf("please entre patient ID :");
				scanf("%u",&x);
				searchpath(x);
			}
	else if(choice1==3)//reserve
    {      
	
	u8 choice2,res,i,counter=0;
	printf("WELCOME ..\n");
	printf("please entre patient ID : ");
	scanf("%u",&x);
	u8 check=check_reserve(x);
	if(head==NULL_POINTER)
	{
		printf("\n\nThe list is empty !\n\n\n");
	}
	else if(check==1)
	{
		printf("\n\nthe slots per day is :\nslot 1 from 2 to 2.30\nslot 2 from 2.30 to 3\nslot 3 from 3 to 3.30\nslot 4 from 4 to 4.30\nslot 5 from 4.30 to 5\n\n\n");
		printf("The slots available are :\n");
		for(i=1;i<6;i++)
		{
			if(ptr[i-1]!=0)
			{
				counter++;
				continue;
			}
			else
			{
				printf("slot %hu for recerving please entre %hu\n",i,i);
			}
			
		}
		if(counter==5)
		{
			printf("\nThere are no available slots ,please check later .\n\n");
		}
		else
		{
		printf("\nPlease entre your choice : ");
	    scanf("%hu",&choice2);
        switch(choice2)
				{
					case 1: 
							{
					        ptr[0]=x;
					        printf("\n\nthe slot reserved succfully\n\n\n");
							reserve(x);
							break;
							}
					case 2: 
					{
							ptr[1]=x;
					        printf("\n\nthe slot reserved succfully\n\n\n");
							reserve(x);
							break;
					}
					case 3: 
					{
							ptr[2]=x;
					        printf("\n\nthe slot reserved succfully\n\n\n");
							reserve(x);
							break;
					}
					case 4: 
					{
							ptr[3]=x;
					        printf("\n\nthe slot reserved succfully\n\n\n");
							reserve(x);
							break;
					}
					case 5: 
					{
							ptr[4]=x;
					        printf("\n\nthe slot reserved succfully\n\n\n");
							reserve(x);
							break;
					}
					default :printf("\n\nIncorrect choice\n\n\n");
					         break;
				}
		}
	}
	else if(check==0)
	{
		printf("\n\nSorry you have already reserved a slot for this patient\n\n\n");
	}
	else 
	{
		printf("\n\nIncorrect ID\n\n\n");
	}
}//end of reserve
else if(choice1==4)//cancel slot
{
	u8 res,i,check;
	printf("Please entre your ID : ");
	scanf("%u",&x);
	res =check_id(x);
	check =check_reserve(x);
	if(head==NULL_POINTER)
	{
		printf("\n\nthe list is empty\n\n\n");
	}
	else if(res==0)
	{
		if(check==0)
		{
		for(i=0;i<5;i++)
		{
			if(ptr[i]==x)
			{
				ptr[i]=0;
				cancel_slot(x);
				break;
			}
		}
		printf("\n\nThe solt is cancled successfully\n\n\n");
		}
		else if(check==1)
		{
			printf("\n\nThis patient hasn't recerved a slot yet !\n\n\n");
		}
	}
	else
		printf("\n\nIncorrect ID\n\n\n");
}//end of cancel
else if(choice1==0)
{
	printf("\n\nYou are welcome anytime\n\n\n");
	break;
}
else
{
	printf("\n\nIncorrect choice\n\n");
	continue;
}
			}//while
			
			
		  }//password
		else
		{
		for(i=0;i<2;i++)
		{
			printf("\n\nIncorrect password ,please try again\n\n\n");
			printf("please entre the password : ");
			scanf("%u",&password);
			if(password==1234)
			{
				u8 choice1=-1 ;
			while((1)&&(choice1!=0))
			{
			printf("\n\nfor adding new patient entre               1\nfor editing patient record entre           2\nfor reserving a slot with the doctor entre 3\nfor canceling reservation entre            4\nfor existing the program entre             0\n\n\n");
			printf("please entre your choice : ");
			scanf("%hu",&choice1);
			if(choice1==1)//adding
			{
				u8 res;
	            printf("please entre patient name :");
	            scanf("%s",&data.name);
	            printf("please entre patient age :");
	            scanf("%hu",&data.age);
	            printf("please entre patient gendre :");
	            scanf("%s",&data.gendre);
	            printf("please entre patient ID :");
	            scanf("%u",&data.id);
	            res=check_id(data.id);
	            if(res!=0)
	            {
                 addnode(data);
	            }
				else
				{
					printf("\n\nsorry the ID you entred is already exist\n\n\n");
				}
			}
			else if(choice1==2)//editing
			{
				printf("please entre patient ID :");
				scanf("%u",&x);
				searchpath(x);
			}
	else if(choice1==3)//reserve
    {      
	u8 choice2,res,i,counter=0;
	printf("WELCOME ..\n");
	printf("please entre patient ID : ");
	scanf("%u",&x);
	u8 check=check_reserve(x);
	if(head==NULL_POINTER)
	{
		printf("\n\nThe list is empty !\n\n\n");
	}
	else if(check==1)
	{
		printf("\n\nthe slots per day is :\nslot 1 from 2 to 2.30\nslot 2 from 2.30 to 3\nslot 3 from 3 to 3.30\nslot 4 from 4 to 4.30\nslot 5 from 4.30 to 5\n\n\n");
		printf("The slots available are :\n");
		for(i=1;i<6;i++)
		{
			if(ptr[i-1]!=0)
			{
				counter++;
				continue;
			}
			else
			{
				printf("slot %hu for recerving please entre %hu\n",i,i);
			}
			
		}
		
		if(counter==5)
		{
			printf("\nthere are no available slots ,please check later .\n\n");
		}
		else
		{
		printf("\nplease entre your choice : ");
	    scanf("%hu",&choice2);
        switch(choice2)
				{
					case 1: 
					        ptr[0]=x;
					        printf("\n\nthe slot reserved succfully\n\n\n");
							reserve(x);
							break;
					case 2: ptr[1]=x;
					        printf("\n\nthe slot reserved succfully\n\n\n");
							reserve(x);
							break;
					case 3: ptr[2]=x;
					        printf("\n\nthe slot reserved succfully\n\n\n");
							reserve(x);
							break;
					case 4: ptr[3]=x;
					        printf("\n\nthe slot reserved succfully\n\n\n");
							reserve(x);
							break;
					case 5: ptr[4]=x;
					        printf("\n\nthe slot reserved succfully\n\n\n");
							reserve(x);
							break;
					default :printf("\n\nIncorrect choice\n\n\n");
					         break;
				}
		}
	}
	else if(check==0)
	{
		printf("\n\nsorry you have already reserved a slot for this patient\n\n\n");
	}
	else 
	{
		printf("\n\nIncorrect ID\n\n\n");
	}
}//end of reserve
else if(choice1==4)//cancel slot
{
	u8 res,i,check;
	printf("Please entre your ID : ");
	scanf("%u",&x);
	res =check_id(x);
	check =check_reserve(x);
	if(head==NULL_POINTER)
	{
		printf("\n\nthe list is empty\n\n\n");
	}
	else if(res==0)
	{
		if(check==0)
		{
		for(i=0;i<5;i++)
		{
			if(ptr[i]=x)
			{
				ptr[i]=0;
				cancel_slot(x);
				break;
			}
		}
		printf("\n\nThe solt is cancled successfully\n\n\n");
		}
		else if(check==1)
		{
			printf("\n\nThis patient hasn't recerved a slot yet !\n\n\n");
		}
	}
	else
		printf("\n\nIncorrect ID\n\n\n");
}//end of cancel
else if(choice1==0)
{
	printf("\n\nYou are welcome anytime\n\n\n");
}
			}
			}
			else if(i==1)
			{
				printf("\n\nTHERE ARE NO FURTHER ATTEMPTS\n");
				printf("THANK YOU \n\n\n");
				break;
			}
			continue;
		}
		}
	}//end of admin
	else if (choice==2)//user
	{
	u8 choice3=-1,res;
	while(choice3!=0)
	{
		printf("\n\nWelcome to user mode..\n");
		printf("for vewing patient record entre        1\n");
		printf("for vewing today's reservations entre  2\n");
		printf("for existing from this mode entre      0\n\n\n");
		printf("please entre your choice :");
		scanf("%hu",&choice3);
		if(choice3==1)
    {
		printf("please entre your ID :");
		scanf("%u",&x);
		res=check_id(x);
		if(res==0)
		{
			view_patient(x);
		}
		else if(res==2)
		{
			printf("\n\nthe list is empty");
		}
		else if(res==1)
		{
			printf("\n\nIncorrect ID\n\n\n");
		}
	}
		else if(choice3==2)//reservation
		{
			view_reservation(ptr);
		}
		else if(choice3==0)
		{
			printf("\n\nYou are welcome anytime\n\n\n");
		}
		else 
			printf("\n\nIncorrect choice\n\n\n");
	}
	}
	else 
		printf("\n\nIncorrect choice\n\n\n");
	}
return 0;
}

node* createnode(inf x)
{
	node* newnode=(node*)malloc(sizeof(node));
	newnode->data=x;
	newnode->tail=NULL_POINTER;
	return newnode;
}

void addnode(inf x)
{ 
	node* newnode =createnode(x);
	if(head==NULL_POINTER)//empty list
	{
		head=newnode;
		(newnode->data).reserve=0;
	}
	else
	{
		node *temp=head;
		while(temp->tail!=NULL_POINTER)
		{
			temp=temp->tail;
		}
		temp->tail=newnode;
		(newnode->data).reserve=0;
	}
	printf("\n\nthe patient is added successfully\n\n\n");
}
u8 check_id(u16 id)
{
	u8 i=1;
	node* temp =head ;
	if(head==NULL_POINTER)
	{
		i=2;
	}
	else
	{
	while(temp!=NULL_POINTER)
	{
		if((temp->data).id==id)
		{
			i=0;
			break;
		}
		else
		temp=temp->tail;
	}
	}
	return i;
}
void searchpath(u16 id)
{
	u8 choice=-1,res;
	node* temp =head ;
	res=check_id(id);
	if(2==res)
	{
		printf("\n\n\nthe list is already empty !\n\n\n");
	}
	else if(1==res)
	{
	  printf("\n\nIncorrect ID\n\n\n");
	}
	else if(0==res)
	{
	while(temp!=NULL_POINTER)
	{
		if(((temp->data).id==id)&&(choice!=5))
		{
			printf("\n\nthe patient name is     : %s\n",(temp->data).name);
			printf("the patient age is      : %hu\n",(temp->data).age);
			printf("the patient gender is   : %s\n",(temp->data).gendre);
			printf("the patient ID is       : %u\n",(temp->data).id);
			printf("\n\nfor editing the name entre     1\nfor editing the age entre      2\nfor editing the gendre entre   3\nfor editing the id entre       4\nto return to main list entre   5\n\n\n");
			printf("please entre your choice : ");
			scanf("%hu",&choice);
			switch(choice)
			{
				case 1 : printf("please entre the new name :");
				         scanf("%s",&((temp->data).name));
						 printf("\n\nedited successfully\n\n\n");
						 break;
				case 2 : printf("please entre the new age :");
				         scanf("%hu",&((temp->data).age));
						 printf("\n\nedited successfully\n\n\n");
						 break;
				case 3 : printf("please entre the new gendre :");
				         scanf("%s",&((temp->data).gendre));
						 printf("\n\nedited successfully\n\n\n");
						 break;
				case 4 : printf("please entre the new ID :");
				         scanf("%u",&((temp->data).id));
						 printf("\n\nedited successfully\n\n\n");
						 break;
				case 5 : break;
				default : printf("\n\nIncorrect choice\n\n\n");
				          break;
			}
		}
		else
		{
		temp=temp->tail;
		}
	 }//while
	}//elseif
}
u8 check_reserve(u16 id)
{
	u8 check=-1,res;
	node*temp=head;
	res=check_id(id);
	if(res==0)
	{
		while(temp!=NULL_POINTER)
		{
			if((temp->data).id==id)
			{
				if((temp->data).reserve==0)
				{
					check=1;
					break;
				}
				else if((temp->data).reserve==1)
				{
					check=0;
					break;
				}
			}
			else 
				temp=temp->tail;
		}
	}
	return check;	
}
void reserve(u16 id)
{
	node * temp=head;
	while(temp!=NULL_POINTER)
	{
		if((temp->data).id==id)
		{
			(temp->data).reserve=1;
			break;
		}
		else
			temp=temp->tail;
	}
}
void cancel_slot(u16 id)
{
	node * temp=head;
	while(temp!=NULL_POINTER)
	{
		if((temp->data).id==id)
		{
			(temp->data).reserve=0;
			break;
		}
		else
			temp=temp->tail;
	}
}
void view_patient(u16 id)
{
node *temp=head;
while(temp!=NULL_POINTER)	
{
	if((temp->data).id==id)
	{
			printf("\n\nthe patient name is     : %s\n",(temp->data).name);
			printf("the patient age is      : %hu\n",(temp->data).age);
			printf("the patient gender is   : %s\n",(temp->data).gendre);
			printf("the patient ID is       : %u\n\n\n",(temp->data).id);
			break;
	}
	else
	{
		temp=temp->tail;
	}
}
}
void view_reservation(u32 * ptr)
{
	u32 *temp=ptr;
	u8 i;
	printf("the Today's reservation is : \n");
	for(i=1;i<6;i++)
	{
		if(temp[i-1]!=0)
		{
			//printf("slot %hu is reserved by patient whose ID is : %u\n",i,temp[i-1]);
			printf("slot %hu is reserved by a patient \n",i);
		}
		else
		{
			continue;
		}
	}
	
}