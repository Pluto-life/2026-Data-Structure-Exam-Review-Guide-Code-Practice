void Inverser(Queue &Q,Stack &S){
	ElemType x;
	while(!QueueEmpty(Q)){
		DeQueue(Q,x);
		Push(S,x);
	}
	while(!StackEmpty(S)){
		Pop(S,x);
		EnQueue(Q,x);
	}
}
