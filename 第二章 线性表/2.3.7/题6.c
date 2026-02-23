bool DisCreat_1(LNode *L,int n,LNode *L1,LNode *L2){
	LNode *p=L->next,*q,*r;
	r=L1;
	L1->next=NULL;
	L2->next=NULL;
	for(int i=1;i<=2*n;i++){
		q=p;
		p=p->next;
		if(i%2==1){
			r->next=q;
			q->next=NULL;
			r=q;
		}
		else{
			q->next=L2->next;
			L2->next=q;
		}
	}
	L->next=NULL;
	return  true;
}
LNode* DisCreat_2(LNode *A){
	LNode *B=(LinkList)malloc(sizeof(LNode));
	B->next=NULL;
	LNode *p=A->next,*q,*ra=A;
	while(p!=NULL){
		ra->next=p;
		ra=p;
		p=p->next;
		if(p!=NULL){
			q=p->next;
			p->next=B->next;
			B->next=p;
			p=q;
		} 
	}
	ra->next=NULL;
	return B;
} 
