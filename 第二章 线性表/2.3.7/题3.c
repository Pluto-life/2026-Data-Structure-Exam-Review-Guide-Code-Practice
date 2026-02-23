bool Reverse_1(LNode *L){
	if(L->next==NULL) return false;
	LNode *p,*q;
	p=L->next;
	L->next=NULL;
	q=p->next;
	while(q!=NULL){
		p->next=L->next;
		L->next=p;
		p=q;
		q=q->next;
	}
	p->next=L->next;
	L->next=p;
	return true;
}
bool Reverse_2(LNode *L){
	if(L->next==NULL) return false;
	if(L->next->next==NULL) return true;
	LNode *p,*q,*r;
	p=L->next;
	q=p->next;
	r=q->next;
	p->next=NULL;
	while(r!=NULL){
		q->next=p;
		p=q;
		q=r;
		r=r->next;
	}
	q->next=p;
	L->next=q;
	return true;
} 
