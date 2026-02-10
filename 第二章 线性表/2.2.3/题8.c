#define MAXSIZE 50 
typedef struct{
	ElemType data[MAXSIZE];
	int length,listsize;
}SqList;
void LocateElem(SqList &L,ElemType x){
	int n=L.length;
	if (n<=0){
		L.data[0]=x;
		L.length++;
		return;
	}
	int low=0,high=n-1,mid;
	while(low<=high){
		mid=(low+high)/2;
		if(L.data[mid]==x){
			if (mid!=n-1){
				ElemType t=L.data[mid];
				L.data[mid]=L.data[mid+1];
				L.data[mid+1]=t;
			}return;
		}
		else if(L.data[mid]<x) low=mid+1;
		else high=mid-1;
	}
	int i;
	for(i=n-1;i>high;i--)
		L.data[i+1]=L.data[i];
	L.data[i+1]=x;
	L.length++;
}
