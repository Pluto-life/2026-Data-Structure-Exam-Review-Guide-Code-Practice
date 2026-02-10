#define MAXSIZE 50 
typedef struct{
	ElemType data[MAXSIZE];
	int length,listsize;
}SqList;
void del_x_1(SqList &L,ElemType x){//好人入列法 
	int k=0;
	for (int i=0;i<L.length;i++){
		if (L.data[i]!=x){
			L.data[k]=L.data[i];
			k++;}
	}
	L.length=k;
}
void del_x_2_version1(SqList &L,ElemType x){//找位挪坑法 
	int k=0;
	for(int i=0;i<L.length;i++){
		if(L.data[i]==x) k++;
		else L.data[i-k]=L.data[i];}
	L.length-=k;
}
void del_x_2_version2(SqList &L,ElemType x){
	int k=0,i=0;
	while(i<L.length){
		if (L.data[i]==x) k++;
		else L.data[i-k]=L.data[i];
		i++;}
	L.length-=k;
}
