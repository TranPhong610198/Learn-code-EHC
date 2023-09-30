#include<stdio.h>

// Nhập n rồi tính số cặp số có tổng chia hết 7 
// int main(){
//     int n, d1,d2,d3,d4,d5,d6,d0,k;
//     scanf("%d",&n);
//         d1=(n-1)/7+1;
//         d2=(n-2)/7+1;
//         d3=(n-3)/7+1;
//         d4=(n-4)/7+1;
//         d5=(n-5)/7+1;
//         d6=(n-6)/7+1;
//         d0=(n-7)/7+1;
//         k=d1*d6+d3*d4+d2*d5+d0/2;
//     printf("%d",k);
//     return 0;
// }


// tích mười số nhaaoj từ bàn phím 
// int main (){
//     int answer = 1;
//     for(int i=0;i<9;i++){
//         int a;
//         scanf("%d",&a);
//         answer = answer *a;
//     }
//     printf("%d",answer);
//     return 0;
// }

// Game đoán số
// int main(){
//     int a;
//     printf("Input your number");
//     scanf("%d",&a);

//     if (a == 1 + rand() )

// }


// từ n --> m có bao nhiêu cặp số có tổng chia hết cho 7

int main(){
    int m,n,d1,d2,d3,d4,d5,d6,d0,k;
    scanf("%d%d",&m,&n);
    if (m%7==1){
        d1=(n-m)/7+1;
        d2=(n-m-1)/7+1;
        d3=(n-m-2)/7+1;
        d4=(n-m-3)/7+1;
        d5=(n-m-4)/7+1;
        d6=(n-m-5)/7+1;
        d0=(n-m-6)/7+1;
        k=d1*d6+d3*d4+d2*d5+d0/2;
        printf("%d",k);
    }
    if (m%7==2){
        d1=(n-m+6)/7+1;
        d2=(n-m)/7+1;
        d3=(n-m-1)/7+1;
        d4=(n-m-2)/7+1;
        d5=(n-m-3)/7+1;
        d6=(n-m-4)/7+1;
        d0=(n-m-5)/7+1;
        k=d1*d6+d3*d4+d2*d5+d0/2;
        printf("%d",k);
    }
    if (m%7==3){
        d1=(n-m+6)/7+1;
        d2=(n-m+5)/7+1;
        d3=(n-m)/7+1;
        d4=(n-m-1)/7+1;
        d5=(n-m-2)/7+1;
        d6=(n-m-3)/7+1;
        d0=(n-m-4)/7+1;
        k=d1*d6+d3*d4+d2*d5+d0/2;
        printf("%d",k);
    }
    if (m%7==4){
        d1=(n-m+6)/7+1;
        d2=(n-m+5)/7+1;
        d3=(n-m+4)/7+1;
        d4=(n-m)/7+1;
        d5=(n-m-1)/7+1;
        d6=(n-m-2)/7+1;
        d0=(n-m-3)/7+1;
        k=d1*d6+d3*d4+d2*d5+d0/2;
        printf("%d",k);
    }
    if (m%7==5){
        d1=(n-m+6)/7+1;
        d2=(n-m+5)/7+1;
        d3=(n-m+4)/7+1;
        d4=(n-m+3)/7+1;
        d5=(n-m)/7+1;
        d6=(n-m-1)/7+1;
        d0=(n-m-2)/7+1;
        k=d1*d6+d3*d4+d2*d5+d0/2;
        printf("%d",k);
    }
    if (m%7==6){
        d1=(n-m+6)/7+1;
        d2=(n-m+5)/7+1;
        d3=(n-m+4)/7+1;
        d4=(n-m+3)/7+1;
        d5=(n-m+2)/7+1;
        d6=(n-m)/7+1;
        d0=(n-m-1)/7+1;
        k=d1*d6+d3*d4+d2*d5+d0/2;
        printf("%d",k);
    }
    if (m%7==0){
        d1=(n-m-1)/7+1;
        d2=(n-m-2)/7+1;
        d3=(n-m-3)/7+1;
        d4=(n-m-4)/7+1;
        d5=(n-m-5)/7+1;
        d6=(n-m-6)/7+1;
        d0=(n-m)/7+1;
        k=d1*d6+d3*d4+d2*d5+d0/2;
        printf("%d",k);
    }

}
