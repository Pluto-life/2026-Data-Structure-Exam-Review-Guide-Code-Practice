bool ListDelete(LinkList &L,int i,ElemType &e){
	LNode *p=L;
	int j=0;
	while(p->next!=NULL&&j<i-1){
		p=p->next;
		j++;
	}
	if(p->next==NULL||j>i-1) return false;
	LNode *q=p->next;
	e=q->data;
	p->next=q->next;
	free(q);
	return true;
}
bool ListDelete(LinkList &L,int i,ElemType &e){
	if(i==1){
		LNode *q=L;
		L=L->next;
		e=q->data;
		free(q); 
		return true; 
	}
	LNode *p=L;
	int j=1;
	while(p->next!=NULL&&j<i-1){
		p=p->next;
		j++;
	}
	if(p->next==NULL||j>i-1) return false;
	LNode *q=p->next;
	e=q->data;
	p->next=q->next;
	free(q);
	return true;
}
//删除结点*p
LNode *s=p->next;
p->data=s->data;
p->next=s->next;
free(s); 
