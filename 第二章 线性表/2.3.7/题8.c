LNode* GetCommon(LNode *A,LNode *B){
	LNode *C=(LinkList)malloc(sizeof(LNode));
	LNode *r=C,*s;
	LNode *p=A->next,*q=B->next;
	while(p!=NULL&&q!=NULL){
		if(p->data<q->data){
			p=p->next; 
		}
		else if(p->data>q->data){
			q=q->next;
		}
		else{
			s=(LinkList)malloc(sizeof(LNode));
			s->data=p->data;
			r->next=s;
			r=s;
			p=p->next;
			q=q->next; 
		}
	}
	r->next=NULL;
	return C;
} 
