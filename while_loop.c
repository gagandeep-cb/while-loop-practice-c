// Print 1 to 10
// Print 10 to 1
// Print even numbers
// Print odd numbers
// Sum of first n numbers
// Factorial
// Multiplication table

// Print 1 to 10---------------------------------------
// #include <stdio.h>

// int main(){
//     int i=1;
//     int n;
//     printf("enter the num:");
//     scanf("%d",&n);
//     while (i>=n)
//     {
//         printf("%d\n", i);
//         i++;
//     }

//     return 0;
// }

// // Print 10 to 1------------------------------
// #include <stdio.h>

// int main(){
//     int i=1;
//     int n;
//     printf("enter the num:");
//     scanf("%d",&n);
//     while (n>=i)
//     {
//         printf("%d\n", n);
//         n--;
//     }

//     return 0;
// }

// print even numbers-------------------------------------------
//  #include <stdio.h>

// int main()
// {
//     int i=0;
//     int n;
//     printf("enter the num:");
//     scanf("%d", &n);
//     while (i<=n)
//     {
//         if(i%2==0)
//         {
//         printf("%d\n",i);
//         }
//       i++;

//     }

//     return 0;
// }

// print even  revers number----------------------
// #include <stdio.h>

// int main()
// {
//     int i=0;
//     int n;
//     printf("enter the num:");
//     scanf("%d", &n);
//     while (n>i)
//     {
//         if(n%2==0)
//         {
//         printf("%d\n",n);
//         }
//       n--;

//     }

//     return 0;
// }

// print odd number-----------------------------------

// #include <stdio.h>

// int main()
// {
//     int i=1;
//     int n;
//     printf("enter the num:");
//     scanf("%d", &n);
//     while (i<=n)
//     {
//         if(i%2!=0)
//         {
//         printf("%d\n", i);
//         }
//       i++;

//     }

//     return 0;
// }

// print odd number in revers --------------------------------
//  #include <stdio.h>

// int main()
// {
//     int i=1;
//     int n;
//     printf("enter the num:");
//     scanf("%d", &n);
//     while (n>=i)
//     {
//         if(n%2!=0)
//         {
//         printf("%d\n", n);
//         }
//       n--;

//     }

//     return 0;
// }

// sum f n numbers----------------------------------

// #include <stdio.h>

// int main()
// {
//     int i = 1;
//     int n, sum = 0;
//     printf("enter the num:");
//     scanf("%d", &n);
//     while (i <= n)
//     {
//         sum += i;
//         i++;
//     }
//     printf("%d", sum);
//     return 0;
// }

//Factorial--------------------------------------------------------------

// #include <stdio.h>

// int main()
// {
//     int i = 1;
//     int n, product = 1;
//     printf("enter the num:");
//     scanf("%d", &n);
//     while (i <= n)
//     {
//         product*=i;
//         i++;
//     }
//     printf(" factorial num:%d",product);
//     return 0;
// }

// Multiplication table--------------------------------------------------

#include <stdio.h>

int main()
{
    int count = 1;
    int num,sum=0;
    printf("enter the num:");
    scanf("%d", &num);
    while (count<=10)
    {
     sum=num*count;
     printf("%d x %d = %d\n", num, count,sum);
     count++  ; 
    }
    return 0 ;
}
//======================================
// Reverse a number
//=====================================

#include <stdio.h>

int main()
{
    int num;
    int digit, reveres = 0;
    printf("enter the num: ");
    scanf("%d", &num);
    while (num > 0)
    {
        digit = num % 10;
        reveres = reveres * 10 + digit;
        num = num / 10;
    }
    printf("%d", reveres);
    return 0;
}
//=========================================
// Check palindrome number
//==========================================

#include <stdio.h>

int main()
{
    int num1, num2;
    int rem = 0;
    printf("Enter the num:");
    scanf("%d", &num1);
    num2 = num1;
    while (num1 > 0)
    {
        rem = num1 % 10 + rem * 10;
        num1 = num1 / 10;
    }
    printf("rem= %d\n", rem);
    if (rem == num2)
    {
        printf(" palindrome\n");
    }
    else
    {
        printf("not palindrome\n");
    }
    return 0;
}

// ==================================
// Sum of digits
// =====================================

#include <stdio.h>

int main()
{
    int num, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
// =======================================
// Count digits
// =======================================
#include <stdio.h>

int main()
{
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0)
    {
        num = num / 10;
        count++; //  count++ means: count = count + 1; It increases the value by  1.  This is called increment operator.
    }

    printf("Total digits = %d\n", count);

    return 0;
}