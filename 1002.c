#include <stdio.h>
#include <stdlib.h>

int main()
{
    char array[100]={0};
    scanf("%s",array);
    //printf("%d",strlen(array));
    int sum=0;
    for(int i=0;i<=(strlen(array)-1);i++){
           // printf("%d\n",(int)array[i]);
        sum+=((int)array[i]-48);//ascii
    }
    //printf("%d\n",sum);
    int j=0;
    while(sum/((int)pow(10,j)))j++;//eg j=2 23 j=3 123 3 2 1
    int get_n_digits(int sum, int n);
    for(int i=j;i>=2;i--){
        switch(get_n_digits(sum,i)){
        case 1:printf("yi ");break;
        case 2:printf("er ");break;
        case 3:printf("san ");break;
        case 4:printf("si ");break;
        case 5:printf("wu ");break;
        case 6:printf("liu ");break;
        case 7:printf("qi ");break;
        case 8:printf("ba ");break;
        case 9:printf("jiu ");break;
        default:printf("ling ");break;
        }
    }
    switch(sum%10){
        case 1:printf("yi");break;
        case 2:printf("er");break;
        case 3:printf("san");break;
        case 4:printf("si");break;
        case 5:printf("wu");break;
        case 6:printf("liu");break;
        case 7:printf("qi");break;
        case 8:printf("ba");break;
        case 9:printf("jiu");break;
        default:printf("ling");break;
    }
return 0;


}
int get_n_digits(int sum, int n){ //3 2 1
int res=0;
for(int i=1;i<=n;i++){
    res=sum%10;
    sum/=10;
}
return res;
}
