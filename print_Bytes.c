void main(){
    int a=400;
    char* p=(char*)&a;

    for(int i=0;i< sizeof(int);i++){
        printf("%u---> %d \n",p,*p);
        p++;
    }