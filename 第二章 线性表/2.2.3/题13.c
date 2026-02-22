int findMissingMin(int A[],int n){
	int i;
	for(i=0;i<n;i++){
		while(A[i]>=1&&A[i]<=n&&A[i]!=i+1){
			int temp=A[A[i]-1];
			A[A[i]-1]=A[i];
			A[i]=temp;
		}
	}
	for(i=0;i<n;i++){
		if(A[i]!=i+1) return i+1;
	}
	return n+1;
}//findMissingMin
