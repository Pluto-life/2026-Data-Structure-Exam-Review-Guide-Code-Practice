LinkList List_HeadInsert(LinkList &L){
	LNode *s;
	int x;
	L=(LNode*)malloc(sizeof(LNode));
	L->next=NULL;
	scanf("%d",&x);
	while(x!=9999){
		s=(LNode*)malloc(sizeof(LNode));
		s->data=x;
		s->next=L->next;
		L->next=s;
		scanf("%d",&x);
	}
	return L;
}
LinkList List_HeadInsert(LinkList &L){
	LNode *s;
	int x;
	L=NULL;
	scanf("%d",&x);
	while(x!=9999){
		s=(LNode*)malloc(sizeof(LNode));
		s->data=x;
		s->next=L;
		L=s;
		scanf("%d",&x);
	}
	return L;
}
