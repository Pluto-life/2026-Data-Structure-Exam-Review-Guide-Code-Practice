int PairSum(LinkList L){
	LNode *fast=L->next,*slow=L;
	while(fast!=NULL&fast->next!=NULL){
		fast=fast->next->next;
		slow=slow->next;
	}
	LNode *newhead=NULL,*p=slow->next,*tmp;
	while(p!=NULL){
		tmp=p->next;
		p->next=newhead;
		newhead=p;
		p=tmp;
	}
	int mx=0;
	p=L;
	LNode *q=newhead;
	while(q!=NULL){
		if((p->data+q->data)>mx){
			mx=p->data+q->data; 
		}
		p=p->next;
		q=q->next;
	}
	return mx;
}
