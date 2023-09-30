#include<stdio.h>
// In this Session we will about how to use Array

//  Bài 1 : Vẽ ma trận xoắn ốc sử dụng mảng 2 chiều 
// int main (){
//     int a, i, j;
    
// }



//  Bài 2 : Tạo một ma trận hình vuông với mảng hai chiều rồi xoay nó
// int main(){     
// }    


// Bài Bonus : Tính số chữ số 0 tận cùng của 1 giai thừa
// Cách 1 : trâu bò và bị giới hạn gia thừa tính được 
// int factorial(int a){
//     int b =1;
//     for (int i=1 ; i<=a ; i++)
//         b *=  i;
//     return b;
// }

// int main(){
    
//     int n;
//     scanf("%d",&n);
//     printf("factorial of n is : %d\n", factorial(n));
//     int count = 0;
//     int z = factorial(n);
//     while (z % 10 ==0 ){
//         count ++;
//         z /= 10;
//     }
//     printf ("there are %d in the end of n factorial\n", count);
//     printf ("the number before the last 0 is : %d\n", z%10 );
//     return 0;
// }   




// Cách 2 :  thay vì phải tính giai thừa rồi tính chia hết cho 10 ta chỉ cần tính bậc của 5 trong n giai thừa

// int main(){
//     int n;
//     scanf("%d",&n);
//     int count = 0;
//     if (n>=5){
//         for(int i = 5 ; i <= n ; i+=5){
//             int k = i;
//             while (k%5==0){
//             count ++;
//             k/= 5;
//             }
//         }
//         printf("%d",count);
//     }  
//     else
//         printf("%d",count);
// }



