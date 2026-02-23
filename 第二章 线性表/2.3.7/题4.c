bool DelElem(LNode *L,ElemType a,ElemType b){//设a<=b 
	if(L->next==NULL) return false;
	LNode *p=L->next,*q=L,*s;
	while(p!=NULL){
		if(p->data>=a&&p->data<=b){
			s=p;
			q->next=p->next;
			p=p->next;
			free(s); 
		}
		else{
			p=p->next;
			q=q->next;
		}	
	}
	return true;
} 
