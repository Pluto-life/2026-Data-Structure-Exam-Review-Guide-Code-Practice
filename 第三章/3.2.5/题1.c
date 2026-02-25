#define MaxSize 50
typedef struct{
	ElemType data[MaxSize];
	int front,rear,tag;	
}SqQueue;
bool EnQueue(SqQueue &Q,ElemType x){
	if(tag==1) return false;
	Q.data[Q.rear]=x;
	Q.rear=(Q.rear+1)%MaxSize;
	if(Q.rear==Q.front) Q.tag=1;
	return true;

}//EnQueue
bool DeQueue(SqQueue &Q,ElemType &x){
	if(tag==0) return false;
	x=Q.data[Q.front];
	Q.front=(Q.front+1)%MaxSize;
	if(Q.rear==Q.front) Q.tag=0;
	return true;
}//DeQueue 
