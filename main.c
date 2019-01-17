#include <stdio.h>

int main(){
    int code;
    int index=0;
    char arr[1024];
    printf("minganzifuxitong\n");
    while(1){
        printf("1---tianjia\n");
        printf("2---shanchuzuihou\n");
        printf("3---xianshisuoyou\n");
        printf("4---tihuan\n");
        printf("5---tuichu\n");
        printf("gongnengbianhao\n");
        scanf("%d",&code);
        if(code==1){
            char x;
            char i;
            printf("tianjia\n");
            scanf("%c",&x);
            scanf("%c",&x);
            arr[index]=x;
            index++;
            printf("jixu\n");
            scanf("%c",&i);
            scanf("%c",&i);
        }

        if(code==2){
            char x;
            if(index>0){
                index--;
                printf("chenggongjixu\n");
                scanf("%c",&x);
                scanf("%c",&x);
            }else{
                printf("shibaijixu\n");
                scanf("%c",&x);
                scanf("%c",&x);
            }
        }
                if(code==3){
            char x;
            if(index>0){
                for(int i=0;index>i;i++){
                printf("di %d yi %c\n",i+1,arr[i]);    
                }
            }else{
                printf("wu\n");
            }
            printf("jixu\n");
            scanf("%c",&x);
            scanf("%c",&x);
            }
        if(code==4){
            char x;
            char str[200];
            int i=0;
            printf("shuruyingwen\n");
            scanf("%s",str);
            for(;str[i]!='\0';i++){
                char a=str[i];
                int j=0;
                int flag=0;
                for(;index>j;j++){
                    if(a==arr[j]){
                    flag=1;
                }
            }
            if(flag!=0){
                str[i]='*';
            }
        }
        printf("%s\n",str);
        printf("jixu\n");
        scanf("%c",&x);
        scanf("%c",&x);
    }
        if(code==5){
            printf("tuichu\n");
            break;
        }
    }
    return 0;

}