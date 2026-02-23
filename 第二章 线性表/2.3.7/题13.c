DNode* Locate(DNode *L,ElemType x){
	DNode *p=L->next;
	while(p&&p->data!=x){
		p=p->next;
	}
	if(!p) exit(0);
	p->freq++;
	DNode *q=p->prior;
	while(q!=L&&q->freq<p->freq){
		q=q->prior;
	}
	DNode *s=p->prior,t=p->next;
	s->next=t;
	if(t) t->prior=s;
	DNode *r=q->next;
	q->next=p; 
	p->prior=q;
	p->next=r;
	if(r) r->prior=p;
	return p;
} 
