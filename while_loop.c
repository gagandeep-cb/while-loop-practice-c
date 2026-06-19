// 1. Print 1 to 10
// 2. Print 10 to 1
// 3. Print even numbers
// 4. Print odd numbers
// 5. Sum of first n numbers
// 6. Factorial
// 7. Multiplication table

// 1. Print 1 to 10---------------------------------------
 #include <stdio.h>

int main(){
    int i=1;
    int n;
    printf("enter the num:");
    scanf("%d",&n);
    while (i>=n)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}

// 2.  Print 10 to 1------------------------------
#include <stdio.h>

int main(){
    int i=1;
    int n;
    printf("enter the num:");
    scanf("%d",&n);
    while (n>=i)
    {
        printf("%d\n", n);
        n--;
    }

    return 0;
}

//3. print even numbers-------------------------------------------
 #include <stdio.h>

int main()
{
    int i=0;
    int n;
    printf("enter the num:");
    scanf("%d", &n);
    while (i<=n)
    {
        if(i%2==0)
        {
        printf("%d\n",i);
        }
      i++;

    }

    return 0;
}

// 4. print even  revers number----------------------
#include <stdio.h>

int main()
{
    int i=0;
    int n;
    printf("enter the num:");
    scanf("%d", &n);
    while (n>i)
    {
        if(n%2==0)
        {
        printf("%d\n",n);
        }
      n--;

    }

    return 0;
}

// 5. print odd number-----------------------------------

#include <stdio.h>

int main()
{
    int i=1;
    int n;
    printf("enter the num:");
    scanf("%d", &n);
    while (i<=n)
    {
        if(i%2!=0)
        {
        printf("%d\n", i);
        }
      i++;

    }

    return 0;
}

// 6. print odd number in revers --------------------------------
 #include <stdio.h>

int main()
{
    int i=1;
    int n;
    printf("enter the num:");
    scanf("%d", &n);
    while (n>=i)
    {
        if(n%2!=0)
        {
        printf("%d\n", n);
        }
      n--;

    }

    return 0;
}

// 7. sum f n numbers----------------------------------

#include <stdio.h>

int main()
{
    int i = 1;
    int n, sum = 0;
    printf("enter the num:");
    scanf("%d", &n);
    while (i <= n)
    {
        sum += i;
        i++;
    }
    printf("%d", sum);
    return 0;
}

// 8. Factorial--------------------------------------------------------------

#include <stdio.h>

int main()
{
    int i = 1;
    int n, product = 1;
    printf("enter the num:");
    scanf("%d", &n);
    while (i <= n)
    {
        product*=i;
        i++;
    }
    printf(" factorial num:%d",product);
    return 0;
}

// 9. Multiplication table--------------------------------------------------

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
    
