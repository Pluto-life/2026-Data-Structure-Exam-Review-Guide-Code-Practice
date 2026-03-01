typedef struct{
	int numVertices,numEdges;
	char VerticesList[MAXV];
	int Edge[MAXV][MAXV];
}MGraph;
int IsExistEL(MGraph G){
	int Degree[MAXV],degree=0,i,j,times=0;
	for(i=0;i<G.numVertices;i++){
		for(j=0;j<G.numVertices;j++)
			if(G.Edge[i][j]!=0) degree++;
	}
	for(i=0;i<G.numVertices;i++){
		if(Degree[i]%2==1) times++;
	}
	if(times==0||times=2) return 1;
	else return 0;
}
