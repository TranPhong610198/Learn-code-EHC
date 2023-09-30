#include<stdio.h>
#include<math.h>
#include<string.h>

int main (){
    int Marks[100], numberofstudent , sum = 0 ;
    char gender;
    scanf("%d", &numberofstudent);
    for (int i=0; i< numberofstudent; i++ ){
        scanf("%d", &Marks[i]) ;
    }
    getchar();
    scanf(" %c", &gender) ;
    if (gender == 'b')
    {
        for (int i = 0; i < numberofstudent; i+=2)
        {
            sum = sum + Marks[i];
        }   
    }
    if (gender == 'g')
    {
        for (int i = 1; i < numberofstudent; i+=2)
        {
            sum = sum + Marks[i];
        }
    }
    printf ("%d", sum);   
}