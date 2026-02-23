bool DelAllx(LNode *L,ElemType x){
	if(L->next==NULL) return false;
	LNode *p,*q,*r;
	p=L->next;
	q=L;
	for(;p!=NULL;p=p->next){
		if(p->data!=x){
			q=p;
		}
		else{
			q->next=p->next;
			r=p;
			p=q;
			free(r);
		}
	}
	return true;
}//DelAllx
bool DelAllx(LNode *L,ElemType x){
	if(L->next==NULL) return false;
	LNode *p,*q,*r;
	p=L->next;
	q=L;
	while(p!=NULL){
		if(p->data!=x){
			p=p->next;
			q=q->next;
		}
		else{
			q->next=p->next;
			r=p;
			p=p->next;
			free(r);
		}
	}
	return true;
}//DelAllx
bool DelAllx(LNode *L,ElemType x){
	LNode *r,*p,*q;
	r=L;
	p=L->next;
	while(p!=NULL){
		if(p->data!=x){
			r->next=p;
			r=p;
			p=p->next;
		}
		else{
			q=p;
			p=p->next;
			free(q);
		}
	}
	r->next=NULL;
}//DelAllx
