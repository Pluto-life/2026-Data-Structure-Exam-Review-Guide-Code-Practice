#define MAXSIZE 50 
typedef struct{
	ElemType data[MAXSIZE];
	int length,listsize;
}SqList;
bool DeleteMin(SqList &L,ElemType &value){
	if (L.length==0) return false;
	value=L.data[0];
	int pos=0;
	for (int i=1;i<L.length;i++){
		if (L.data[i]<value){
			value=L.data[i];
			pos=i;
		}
	}
	L.data[pos]=L.data[L.length-1];
	L.length--;
	return true;
}
