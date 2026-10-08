


#include<stdio.h>

int main(){
    char a[10000];
    int count = 0, num = 0;

    scanf("%s", a);

    for(int i=0; a[i]!='\0'; i++){

        if(a[i]=='$' &&
           (a[i+1]>='0' && a[i+1]<='9') &&
           (a[i+2]>='0' && a[i+2]<='9')){

            num=(a[i+1]-'0')*10+(a[i+2]-'0');

            int k=0;

            // 强制检查 num 个数据
            for(int j=i+3; j<i+3+num; j++){

                if((a[j]>='0' && a[j]<='9') ||
                   (a[j]>='a' && a[j]<='f') ||
                   (a[j]>='A' && a[j]<='F')){

                    k++;
                }
            }

            // k == num 说明 num 个字符全部合法
            // 并且第 num 个数据后面必须紧跟 #
            if(k==num && a[i+3+num]=='#'){
                count++;
            }
        }
    }

    printf("%d",count);

    return 0;
}
