#define MAXSIZE 50 
typedef struct{
	ElemType data[MAXSIZE];
	int length,listsize;
}SqList;
void Reverse(SqList &L){
	ElemType temp;
	for(int i=0;i<L.length/2;i++){
		temp=L.data[i]
		L.data[i]=L.data[L.length-1-i];
		L.data[L.length-1-i]=temp;
	}
}
