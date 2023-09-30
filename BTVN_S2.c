#include<stdio.h>

// Bài 1 : Vẽ Hình Tam Giác, n = 4
// int main(){
//     int n,i,j;
//     scanf("%d",&n);
//     for( i=1; i<=n; i++ ){
//         for (j=0; j<=i; j++) printf ("*");
//         printf("\n");
//     }
// return 0;
// }



// Bài 2 : Vẽ Hình Xoắn Ốc, n = 9



// Bài 3 : Vẽ Hình Gương, n = 6
// chia làm hai nửa  ??? - thử xem 
    // int main(){
    //     int n;
    //     scanf("%d",&n);
    //     int k=n/2;
    //     int z=1;
    //     for (int i=0 ; i<k ; i++){
    //         for (int j=0 ; j<i ; j++)
    //             printf("   ");
    //         for (int j=0 ; j<k-i ; j++)
    //             printf("%3d", z++);
    //         printf("\n");
    //     }
    //     for (int i=0 ; i<k ; i++){
    //         for (int j=1 ; j<k ; j++)
    //             printf("   ");
    //         for (int j=0 ; j<=i ; j++)
    //             printf("%3d", --z); 
    //         printf("\n");
    //     }
    // }



// Bài 4 : Vẽ Tam Giác Pascal, n= 5
//     // This function will calculate factorial (giai thừa) 
// int factorial(int a){
//     int b;
//     int factorial_end = 1;
//       for (b=1 ; b<=a ; b++){
//         factorial_end *= b;
//     }
//     return factorial_end;
// }
//     // In the math we have a method to calculate of phần tử thứ k của dòng n trong tam giác Pascal - phần này tiếng anh hơi kém nên ch comment hết đc (^_^)
//     // You can check it in the link : https://vuontoanblog.blogspot.com/2012/09/pascal-triangle.html
// int main(){
//     int n,k;
//     scanf("%d",&n);
//     for (int i=0 ; i <= n ; i++){
//         for (int j=0 ; j<=n-i ; j++) // this for-loop will print the space before the value of phần tử thứ k, it will help command so beatiful (đẹp vcl)
//             printf(" ");
//         for (int f=0 ; f<=i ; f++) // this for-loop will print the value of các phần tử
//             printf(" %d",factorial(i)/(   ( factorial(i-f) * factorial(f) )   ));
//         printf("\n");
//     }
// }



// Bonus : Vẽ Hình Thoi
// int main(){
//     int n;
//     scanf("%d",&n);
//     for (int i=1 ; i<=n ; i++){
//         for (int j=0 ; j< n-i ; j++)
//             printf(" ");
//         for (int j=0 ; j< i ; j++)
//             printf(" *");
//     printf("\n");
//     }
//     for (int i=1 ; i <= n-1 ; i++){
//         for (int j=0 ; j <i ; j++)
//               printf(" ");
//         for (int j=0 ; j<n-i ; j++)
//             printf(" *");
//     printf("\n");
//     }     

// }



