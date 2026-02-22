bool ListInsert(LinkList &L,ElemType e,int i){
	LNode *p=L;
	int j=0;
	while(j<i-1&&p!=NULL){
		p=p->next;
		j++;
	}
	if(p==NULL) return false;
	LNode *s=(LNode*)malloc(sizeof(LNode));
	s->data=e;s->next=p->next;
	p->next=s;
	return true;
}
bool ListInsert(LinkList &L,ElemType e,int i){
	if(i<1) return false;
	LNode *s=(LNode*)malloc(sizeof(LNode));
	if (s==NULL) return false;
	s->data=e;
	if(i==1){
		s->next=L;
		L=s;
		return true; 
	}
	LNode *p=L;
	int j=1;
	while(j<i&&p!=NULL){
		p=p->next;
		j++;
	}
	if(p==NULL){
		free(s);return false;
	}
	s->next=p->next;
	p->next=s;
	return true; 
}
//结点前插操作
LNode *s=(LNode*)malloc(sizeof(LNode));
s->data=e;
s->next=p->next;
p->next=s;
temp=s->data;
s->data=p->data;
p->data=temp; 
