#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
	int x;
	struct node *next;
	struct node *prior;
}A;

A *creatlink(void);
void sc(A *P);
A *fr(A *p);

int main(){
	
	A *head;
	
	head=creatlink();
	
	fflush(stdin);

	head=fr(head);

	
	
	sc(head);
	
	return 0;
}

A *creatlink(void){
	A *head,*p,*q;
	int x,i;
	
	scanf("%d",&x);
	
	p=head=(A*)malloc(sizeof(A));
	p->next=NULL;
	p->prior=NULL;
	
	for(i=1;i<=x;i++){
		q=(A*)malloc(sizeof(A));
		q->x=i;
		q->next=p->next;
		p->next=q;
		q->prior=p;
		p=q;
		
	}
	
	return head;
}

A *fr(A *head){
	A *p;
	int x,i;
	
	p=head;
	
	scanf("%d",&x);
	if(x<=0){
		printf("ERROR!");
		exit(1);
	}
	
	for(i=0;i!=x;i++){
		p=p->next;
	}
	
	p->prior->next=p->next;
	p->next->prior=p->prior;
	free(p);
	
	return head;
}

void sc(A *head){
	
	A *p;
	
	p=head;
	
	if(p->next==NULL&&p->prior==NULL){
		printf("NULL\n");
		exit(1);
	}
	
	while((p=p->next)!=NULL){
		printf("%5d",p->x);
	}
	
	printf("\n");
	
    return;
}
