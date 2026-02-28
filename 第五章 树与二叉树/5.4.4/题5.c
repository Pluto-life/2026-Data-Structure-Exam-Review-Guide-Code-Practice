typedef struct node{
	ElemType data;
	struct node *fch,*nsib;
}*Tree; 
int Height(Tree t){
	if(t=NULL) return 0;
	int hc,hs;
	hc=Height(t->fch);
	hs=Height(t->nsib);
	if(hc+1>hs) return hc+1;
	else return hs;
}//Height
