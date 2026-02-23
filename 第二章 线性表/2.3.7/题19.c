void func(LNode *h,int n){
	LNode *p=h,*r;
	q=(int*)malloc(sizeof(int)*(n+1));
	for(int i=0;i<n;i++){
		*(q+i)=0;
	}
	while(p->next!=NULL){
		m=p->next->data>0?p->next-data:-p->next->data;
		if(*(q+m)==0){
			*(q+m)=1;
			p=p->next;
		}
		else{
			r=p->next;
			p->next=r->next;
			free(r); 
		}
	}
	free(q);
}
