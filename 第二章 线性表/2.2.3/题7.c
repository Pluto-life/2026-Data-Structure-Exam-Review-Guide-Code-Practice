#define MAXSIZE 50 
typedef struct{
	ElemType data[MAXSIZE];
	int length,listsize;
}SqList;
void Reverse(ElemType A[],int left,int right,int arraySize){
	if (left>=right||right>=arraySize) return;
	ElemType temp;
	while (left<right){
        temp=A[left];
        A[left]=A[right];
        A[right]=temp;
        left++;right--;
    }
}
void Exchange(ElemType A[],int m,int n,int arraySize){
	Reverse(A,0,m+n-1,arraySize);
	Reverse(A,0,n-1,arraySize);
	Reverse(A,n,m+n-1,arraySize);
}
