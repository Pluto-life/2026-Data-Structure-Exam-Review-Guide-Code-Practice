#define MAXSIZE 50 
typedef struct{
    ElemType data[MAXSIZE];
    int length,listsize;
}SqList;
bool del_s_t(SqList &L,ElemType s,ElemType t){
    if (L.length==0||s>=t) return false;
    int i,k=0;
    for (i=0;i<L.length;i++){
        if(s<=L.data[i]&&L.data[i]<=t){
            k++；}
    else{
        L.data[i-k]=L.data[i];}
    }
    L.length-=k;
    return true;
}
