#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>   
#include <ctype.h> 
#include <stdio.h>    
#include <sys/wait.h>
#include <time.h>

unsigned long long fib(unsigned long long x) { //recursive
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fib(x-1)+fib(x-2));
   }
}

unsigned long long fib_i(unsigned long long num) { //iterative
   unsigned long long x = 0, y = 1, z = 0;
   for (unsigned long long i = 0; i < num; i++) {
      printf("%llu", x);
      printf(" ");
      z = x + y;
      x = y;
      y = z;
   }
   return 0;
}

int main() {

pid_t child_a, child_b;
child_a = fork();

if (child_a == 0) { //Child 1
  unsigned long long x; unsigned long long i=0;
  double clock_t; 
  double start_t; 
  double end_t; 
  double total_t;
  printf("Enter the number of terms of series : ");
  scanf("%llu", &x);
  printf("Fibonnaci series (Recursive) :\n");
     start_t = clock();
     while(i < x) {
    printf(" %llu", fib(i));
    i++; 
  }
   end_t = clock();
   printf("\n");
   total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;  
   printf("Run time for Recursive (secs): ");
   printf("%f", total_t);
      } else {
        waitpid(child_a, NULL, 0);
        child_b = fork();
        
if (child_b == 0) { //Child 2
  double clock_t; 
  double start_t; 
  double end_t; 
  double total_t;
  unsigned long long i=0;
  unsigned long long num;
  printf("\n\nEnter the number of terms of series : ");
  scanf("%llu", &num);
  printf("Fibonacci series (Iterative) :\n");
  printf(" "); 
  start_t = clock();
  fib_i(num);
  end_t = clock();
  printf("\n");
  total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
  printf("Run time for Iterative (secs): ");
  printf("%f", total_t);
      } else { //Parent
        waitpid(child_a, NULL, 0);
        waitpid(child_b, NULL, 0);   
    }
}  
   printf("\n");
   getchar();
   return 0;
}