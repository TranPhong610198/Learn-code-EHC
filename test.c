#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


// Bitwise Hackerrank
// void calculate_the_maximum(int n, int k) {
//   //Write your code here.
//     int maxAnd = 0;
//     int maxOr = 0;
//     int maxXor = 0;
//     for (int i = 1; i < n; i++){
//       for (int j = i+1; j <= n; j++){
//           if (((i&j) > maxAnd) && ((i&j) < k)){
//               maxAnd = (i&j);
//           }
//           if (((i|j) > maxOr) &&( (i|j) < k)){
//               maxOr = (i|j);
//           }
//           if (( (i^j) > maxXor ) && ((i^j) < k)){
//               maxXor = (i^j);
//           }  
//       }
//     }
//     printf("%d\n%d\n%d\n",maxAnd,maxOr,maxXor);
// }

// int main() {
//     int n, k;
  
//     scanf("%d %d", &n, &k);
//     calculate_the_maximum(n, k);
//     // printf("%d", 2&3);
 
//     return 0;
// }

// int main(){
//     int a;
//     scanf("%d",&a);
//     char* input[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
//     if (a>9){
//         printf("Greater than 9");
//     }
//     else {
//         printf("%s",input[a]);
//     }
        
    
//     return 0;
// }


//  cách 2 giải bài chuyển số



// #include <assert.h>
// #include <limits.h>
// #include <math.h>
// #include <stdbool.h>
// #include <stddef.h>
// #include <stdint.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// char* readline();



// int main()
// {
//     char* n_endptr;
//     char* n_str = readline();
//     int n = strtol(n_str, &n_endptr, 10);

//     if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }

//     // Write Your Code Here
    
//     int a;
//     scanf("%d",&a);
//     char* input[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
//     if (a>9){
//         printf("Greater than 9");
//     }
//     else {
//         printf("%s",input[a]);
//     }
        
    
//     return 0;
// }

// char* readline() {
//     size_t alloc_length = 1024;
//     size_t data_length = 0;
//     char* data = malloc(alloc_length);

//     while (true) {
//         char* cursor = data + data_length;
//         char* line = fgets(cursor, alloc_length - data_length, stdin);

//         if (!line) { break; }

//         data_length += strlen(cursor);

//         if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

//         size_t new_length = alloc_length << 1;
//         data = realloc(data, new_length);

//         if (!data) { break; }

//         alloc_length = new_length;
//     }

//     if (data[data_length - 1] == '\n') {
//         data[data_length - 1] = '\0';
//     }

//     data = realloc(data, data_length);

//     return data;
// }

// int main(){
//     int age;
//     printf("Please enter your age : ");
//     scanf("%d", &age);

//     if(age <0)
//         printf("Invalid age ! Age cannot be negative");
//     else if (age >= 0 && age <18)
//         printf("You are a minor.");
//     else if (age >= && age <65)
//         printf("You are an adult.");
//     else
//         printf("You are senior citizen");
//     printf("\n");
//     return (0);
// }

// int main(){
// float sum = 0 ;
// //	int i=0;
// 	for (int i=0 ; i<50; i++){
// 		float = (1/i) + (1/i+1);
// 	}	 
// 	printf("Ket qua la : %.2f", sum);
	
	
// 	system("pause");
// 	return 0;
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     for(int i =0; i<10; i++){
//         printf("%d x %d = %d\n",n, i, n*i );
//     }
// }

//disparate While loop and Do While loop
// int main(){
    // int i=10;
    // in while loop these commands below is not printf anything 
    // while(i<10){
    //     printf("HelloWorld");
    //     i ++;
    // }

    // in do-while though have same condition but its still run least one times. So you can see the difference between them .
    // do
    // {
    //     printf("HelloWorld\n");
    //     i++;
    // } while (i<10);
    
// }


int main(){
    int n ;
    scanf("%d",&n);
    for (int i = 1; i<n ; i++){
        for (int j= 0; j<(n-i)/2;j++){
            printf(" ");
        }
        for (int j=0; j<i; j++){
            printf("*");
        }
        for (int j= 0; j<((n-i)/2);j++){
            printf(" ");
        }
        printf("\n");
    }
}