int listlen(LNode *head){
	int len=0;
	while(head->next!=NULL){
		len++;
		head=head->next;
	}
	return len;
}
LNode* fint_list(LNode *str1,LNode *str2){
	int m,n;
	LNode *p,*q;
	m=listlen(str1);
	n=listlen(str2);
	for(p=str1;m>n;m--){
		p=p->next;
	}
	for(q=str2;m<n;n--){
		q=q->next;
	}
	while(p->next!=NULL&&p->next!=q->next){
		p=p->next;
		q=q->next;
	}
	return p->next;
}
