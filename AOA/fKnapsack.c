/****************
 Alroy Pereira
 9631 SE Comps A
*****************/

#include<stdio.h>
void knapsack(int n, float weight[], float profit[], float capacity) {
   float sol[20], tp = 0;
   int i, j, u;
   u = capacity;

   for (i = 0; i < n; i++)
      sol[i] = 0.0;

   for (i = 0; i < n; i++) {
      if (weight[i] > u)
         break;
      else {
         sol[i] = 1.0;
         tp = tp + profit[i];
         u = u - weight[i];
      }
   }

   if (i < n)
      sol[i] = u / weight[i];

   tp = tp + (sol[i] * profit[i]);

   printf("\n The solution vector is : ");
   for (i = 0; i < n; i++)
      printf("%f\t", sol[i]);

   printf("\n\n The Maximum profit is :  %f\n", tp);

}

int main() {
   float weight[20], profit[20], capacity;
   int num, i, j;
   float ratio[20], temp;

   printf("\n Enter the no. of objects : ");
   scanf("%d", &num);

   printf("\n Enter the weight and profit of each object : \n\n");
   printf(" \t\tWeight\t\tProfit\n");
   for (i = 0; i < num; i++) {
      scanf("%f %f", &weight[i], &profit[i]);
   }

   printf("\n Enter the capacity of the knapsack : ");
   scanf("%f", &capacity);

   for (i = 0; i < num; i++) {
      ratio[i] = profit[i] / weight[i];
   }

   for (i = 0; i < num; i++)
    {
      for (j = i + 1; j < num; j++)
       {
         if (ratio[i] < ratio[j])
         {
            temp = ratio[j];
            ratio[j] = ratio[i];
            ratio[i] = temp;

            temp = weight[j];
            weight[j] = weight[i];
            weight[i] = temp;

            temp = profit[j];
            profit[j] = profit[i];
            profit[i] = temp;
         }
      }
   }

   knapsack(num, weight, profit, capacity);
   return(0);
}
/***********************************************************************
 Enter the no. of objects : 3
 Enter the weight and profit of each object : 
Weight   Profit
15 40
25 80
10 100
 Enter the capacity of the knapsack : 40
 The solution vector is : 1.000000      1.000000        0.333333
 The Maximum profit is :  193.333328
 ***********************************************************************/