typedef struct{
	int numVertices,numEdges;
	char VerticesList[MAXV];
	int Edge[MAXV][MAXV];
}MGraph;
int printVertices(MGraph G){
	int Indegree[G.numVertices],Outdegree[G.numVertices],i,j,k=0;
	for(i=0;i<G.numVertices;i++){
		Indegree[i]=Outdegree[i]=0;
	}
	for(i=0;i<G.numVertices;i++){
		for(j=0;j<G.numVertices;j++){
			if(G.Edge[i][j]!=0) Outdegree[i]++;
		}
		for(j=0;j<G.numVertices;j++){
			if(G.Edge[j][i]!=0) Indegree[i]++;
		}
	}
	for(i=0;i<G.numVertices;i++){
		if(Outdegree[i]>Indegree[i]){
			k++;
			printf("%c\n",VerticesList[i]);
		}
	}
	return k;
}
