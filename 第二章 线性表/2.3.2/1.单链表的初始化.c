bool InitList(LinkList &L){
	L=(LinkNode)malloc(sizeof(LNode));
	L->next=NULL;
	return true;
}
bool InitList(LinkList &L){
	L=NULL;
	return true;
}
