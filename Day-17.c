#include <stdio.h>

int main()
{

    // prime numnber
    int n;
    scanf("%d", &n);
    int prime = 0;

    for (int i = 2; i < n; i++)
    {

        if (n % i == 0)
        {

            prime++;
            break;
        }
    }

    if (prime == 0)
        printf("Prime number");
    else
        printf("Not a prime number");

   
   
   
   
   
   // Break and continue statement
for(int i = 1; i<=35; i++){
    
if(i%3==0)
continue;
printf("%d\n",i);

if(i==10)
break;

}



// Multiplication Table
int n;
scanf("%d", &n);
int table=0;

for(int i = 1; i<=10; i++){
 

printf("%d\n", n*i);
}

// Factorial
int n;
scanf("%d",&n);
int fact=1;
for(int i =1; i<=n;i++){
    fact = fact*i;
}
printf("Facto is %d", fact);


   
   
   
   
   
   
   
   
   
        return 0;
}
