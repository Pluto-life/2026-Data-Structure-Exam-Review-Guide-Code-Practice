void Convert(ALGraph &G,int arcs[M][M]){
	for(i=0;i<n;i++){
		p=(G->v[i]).firstarc;
		while(p!=NULL){
			arcs[i][p->adjvex]=1;
			p=p->nextarc;
		}
	}
}//Convert
