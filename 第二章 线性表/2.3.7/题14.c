LNode* Converse(LNode *L,int n,int k){
	LNode *p=L,*q=p->next,*r;
	for(int i=1;i<n-k;i++){
		p=p->next;
		q=q->next;
	}
	r=q->next;
	if(r==NULL){
		q->next=L;
		p->next=NULL;
		return q;
	}
	while(r->next!=NULL){
		r=r->next;
	}
	r->next=L;
	p->next=NULL;
	return q;
}
