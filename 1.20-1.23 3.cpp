#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int x;
	struct node *next;
}A;

A *creatlink(void);
void sc(A *P);

int main(){
	
	A *head;
	
	head=creatlink();
	
	sc(head);
	
	return 0;
}

A *creatlink(void){
	A *head,*p,*q;
	int x,i;
	
	scanf("%d",&x);
	
	p=head=(A*)malloc(sizeof(A));
	p->next=head;
	
	for(i=1;i<=x;i++){
		q=(A*)malloc(sizeof(A));
		p->next=q;
		q->x=i;
		q->next=head;
		p=q;
	}
	
	return head;
}



void sc(A *head){
	
	A *p;
	
	p=head;
	
	if(p->next==head){
		printf("NULL\n");
		exit(1);
	}
	
	while((p=p->next)!=head){
		printf("%5d",p->x);
	}
	
    return;
}
