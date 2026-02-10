//2011年408统考真题,历届题目中最难的一道算法题
typedef struct{
	ElemType data[MAXSIZE];
	int length,listsize;
}SqList;
ElemType FindMedian_1_version1(SqList A,SqList B,int n){
	SqList C;
	C.listsize=2*n;
	int i=0,j=0,p=0;
	while (i<n&&j<n){
		if(A.data[i]<=B.data[j]) C.data[p++]=A.data[i++];
		else C.data[p++]=B.data[j++];
	}
	while (i<n) C.data[p++]=A.data[i++];
	while (j<n) C.data[p++]=B.data[j++];
	return C.data[n-1]; 
}//时间复杂度和空间复杂度都为O(n) 
ElemType FindMedian_1_version2(SqList A,SqList B,int n){
	ElemType last;
	int i=0,j=0,k=0;
	while (i<n&&j<n){
		if (A.data[i]<=B.data[j]){
			last=A.data[i++];
			k++;}
		else{
			last=B.data[j++];
			k++;}
		if (k==n) break;}
	while (i<n){
		last=A.data[i++];
		k++;
		if (k==n) break;}
	while (j<n){
		last=B.data[j++];
		k++;
		if (k==n) break;}
	return last;
}//O(n)时间复杂度下的最优解,空间复杂度为O(1)
int GetCount(SqList &nums,int n,int threshold){
	int l=0,r=n-1;
	while (l<=r){
		int mid=(l+r)/2;
		if (nums.data[mid]<=threshold)
			l=mid+1;
		else r=mid-1;
	}
	return r+1; 
}//查找数组中小于等于threshold的元素个数
ElemType FindMedian_2(SqList A,SqList B,int n){
	int l=min(A.data[0],B.data[0]),r=max(A.data[n-1],B.data[n-1]);
	while (l<=r){
		int mid=(l+r)/2;
		if(GetCount(A,n,mid)+GetCount(B,n,mid)<n) l=mid+1;
		else r=mid-1;
	}
	return l;
}//时间复杂度为O(log m log n),空间复杂度为O(1)
int Median(SqList A,SqList B,int n,int low,int high){
	if (low>=high) return INT_MAX;
	int k=(low+high)/2;
	if (k==n&&A.data[k-1]<=B.data[0]) 
		return A.data[k-1];
	else if (k<n&&B.data[n-k-1]<=A.data[k-1]&&A.data[k-1]<=B.data[n-k]) 
		return A.data[k-1];
	else if (A.data[k-1]>B.data[n-k]) 
		return Median(A,B,n,low,k-1);
	else return Median(A,B,n,k+1,high);
}
ElemType FindMedian_3(SqList A,SqList B,int n){
	int median=Median(A,B,n,0,n-1);
	if (median==INT_MAX) median=Median(B,A,n,0,n-1);
	return median;
}//时间复杂度为O(log n),空间复杂度为O(1)
ElemType FindMedian_4(SqList A,SqList B,int n){
	int pa=0,pb=0,ma,mb;
	while (n>1){
		ma=pa+(n+1)/2-1;
		mb=pb+(n+1)/2-1;
		if (A.data[ma]==B.data[mb]) return A.data[ma];
		else if (A.data[ma]<B.data[mb]) pa+=n/2;
		else pb+=n/2;
		n=(n+1)/2;
	}
	return min(A.data[pa],B.data[pb]);
}//时间复杂度为O(log n),空间复杂度为O(1),最优解 
