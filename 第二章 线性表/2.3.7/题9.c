LNode* GetCommon(LNode *A,LNode *B){
	LNode *pa=A->next,*pb=B->next,*ra=A,*rb=B,*s;
	while(pa&&pb){
		if(pa->data<pb->data){
			s=pa;
			ra->next=pa->next;
			pa=pa->next;
			free(s);
		}
		else if(pb->data<pa->data){
			s=pb;
			rb->next=pb->next;
			pb=pb->next;
			free(s);
		}
		else{
			ra=pa;
			pa=pa->next;
			s=pb;
			rb->next=pb->next;
			pb=pb->next;
			free(s);
		}
	}
	while(pa){
		s=pa;
		ra->next=pa->next;
		pa=ra->next;
		free(s);
	}
	while(pb){
		s=pb;
		rb->next=pb->next;
		pb=rb->next;
		free(s);
	}
	ra->next=NULL;
	free(B);
	return A;
}
