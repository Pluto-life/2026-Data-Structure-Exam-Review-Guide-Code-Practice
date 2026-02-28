typedef struct node{
	ElemType data;
	struct node *fch,*nsib;
}*Tree; 
int Leaves(Tree t){
	if(t==NULL) return 0;
	if(t->fch==NULL) return 1+Leaves(t->nsib);
	else return Leaves(t->fch)+Leaves(t->nsib); 
}//Leaves
