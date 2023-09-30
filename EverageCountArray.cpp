#include<stdio.h>

//First way 
// int main(){
//     int a[100], n, x;
//     scanf("%d %d", &n, &x);
//     // scan array
//     for (int i=0; i<n; i++){
//         scanf("%d", &a[i]);
//     }
//     // compare average with elements of array and printf the frequency
//     for (int i=0 ; i<n; i++){
//         int dem = 0;
//         for (int j = 0; j<n ; j++){
//             if ((x+a[i])/2 == a[j])
//                 dem++;
//         }
//         printf("%d ", dem);
//     }
//     getch();
// }

// Second Way
int countArray(int a[] , int &n , int &x){

    // compare average with elements of array and printf the frequency
    int v[100];
    for (int i=0 ; i<n; i++){
        int dem = 0;
        for (int j = 0; j<n ; j++){
            if ((x+a[i])/2 == a[j])
                dem++;
        }
        v[i] = dem;
    }
    return v;
}
int main(){
    int a[] = {2,4,8,6,2};
    countArray(a , 5 , 2);
}