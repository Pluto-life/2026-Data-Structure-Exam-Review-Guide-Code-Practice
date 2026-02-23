int Search_k(LinkList list,int k){
	LNode *p=list->next,*q=list->next;
	int count=0;
	while(p!=NULL){
		if(count<k) count++;
		else q=q->next;
		p=p->next;
	}
	if(count<k) return 0;
	else{
		printf("%d",q->data);
		return 1;
	}
} 
