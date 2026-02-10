#define MAXSIZE 50 
typedef struct{
	ElemType data[MAXSIZE];
	int length,listsize;
}SqList;
bool Del_Same(SqList &L){
	if (L.length==0) return false;
	int i,j;//i存储第一个不相同的元素,j为工作指针
	for (i=0,j=1;j<L.length;j++){
		if(L.data[i]!=L.data[j])
			L.data[++i]=L.data[j];
		L.length=i+1;
		return true; 
	} 
} 
