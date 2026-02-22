#define MAXSIZE 50 
typedef struct{
	ElemType data[MAXSIZE];
	int length,listsize;
}SqList;
int Majority(SqList &L,int n){
	int i,c,count=1;
	c=L.data[0];
	for(i=1;i<n;i++){
		if (L.data[i]==c) count++;
		else{
			if(count>0) count--;
			else{
				c=L.data[i];
				count=1;
			}
		}
	}
	if(count>0){
		for (i=count=0;i<n;i++){
			if(L.data[i]==c) count++;
		}
	}
	if(count>n/2) return c;
	else return -1; 
}//Majority
