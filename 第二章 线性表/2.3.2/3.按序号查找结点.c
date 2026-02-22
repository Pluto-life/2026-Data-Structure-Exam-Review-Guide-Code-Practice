LNode* GetElem(LinkList L,int i){
	LNode *p=L;
	int j=0;
	if(i<0||i>Length(L)-1) return NULL;
	while(p!=NULL&&j!=i){
		p=p->next;
		j++;
	}
	return p;
}
