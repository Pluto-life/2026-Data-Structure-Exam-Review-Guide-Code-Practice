#define MAXSIZE 50 
typedef struct{
	ElemType data[MAXSIZE];
	int length,listsize;
}SqList;
bool MergeList(SqList &La,SqList &Lb,SqList &Lc){
	if (La.length+Lb.length>MAXSIZE) return false;
	if (La.length==0) Lc=Lb;
	if (Lb.length==0) Lc=La;
	int i,j,k=0;
	for (i=0,j=0;i<La.length&&j<Lb.length;){
		if(La.data[i]<=Lb.data[j])
			Lc.data[k++]=La.data[i++];
		else Lc.data[k++]=Lb.data[j++];
	}
	while (i<La.length)
		Lc.data[k++]=La.data[i];
	while (j<Lb.length)
		Lc.data[k++]=Lb.data[j];
	Lc.length=k; 
	return true;
} 
