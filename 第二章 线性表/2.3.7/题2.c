bool DelMinElem(LNode *L){
	if(L->next==NULL) return false;
	LNode *p,*q,*r,*s;
	p=L->next;
	q=L;
	r=q;
	while(p!=NULL){
		if(r->next->data<=p->data){
			p=p->next;
			q=q->next;
		}
		else{
			r=q;
			p=p->next;
			q=q->next;
		}
	}
	s=r->next;
	r->next=s->next;
	free(s); 
	return true;
}//DelMinElem
