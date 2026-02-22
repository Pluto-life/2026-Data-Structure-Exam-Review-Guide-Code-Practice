int Length(LinkList L){
	int len=0;
	LNode *p=L;
	while(p->next!=NULL){
		p=p->next;
		len++; 
	}
	return len;
}
