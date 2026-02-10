#define MAXSIZE 50 
typedef struct{
	ElemType data[MAXSIZE];
	int length,listsize;
}SqList;
void samekey(SqList A,SqList B,SqList C){
	n=A.length;
	int i=0,j=0,k=0;
	while (i<n&&j<n&&k<n){
		ElemType x=A.data[i],y=B.data[j],z=C.data[k];
		if(x==y&&y==z){
			i++;j++;k++;
			printf("%d",x);}
		else if(x<y) i++;
		else if(y<z) j++;
		else k++;
	}
}
