bool DelSameElem_1(LNode *L){
	if(L->next==NULL) return false;
	LNode *p=L->next,*q=L->next->next;
	while(q!=NULL){
		if(p->data!=q->data){
			p=p->next;
			q=q->next;
		}
		else{
			p->next=q->next;
			free(q);
			q=p->next;
		}
	}
	return true;
} 
bool DelSameElem_2(LNode *L){
	if(L->next==NULL) return false;
	LNode *p=L->next,*q=L->next->next,*r;
	L->next=NULL;
	r=L;
	while(q!=NULL){
		if(p->data!=q->data){
			r->next=p;
			r=p;
			p=q;
			q=q->next;
		}
		else{
			free(p);
			p=q;
			q=q->next;
		}
	}
	r->next=p;
	p->next=NULL;
	return true;
}
