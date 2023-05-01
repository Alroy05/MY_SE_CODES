// #include<stdio.h>  
  
// int main()  
// {  
// 	int i, no_of_processes ,quant,at[10], bt[10],tempbt[10],wt[10]={0},tat[10]={0},sum_tat=0,sum_wt=0;  
// 	int avg_wt, avg_tat;  
	
// 	printf("\n Enter the total number of process in the system : ");  
// 	scanf("%d", &no_of_processes);   

// 	// Using for loop to enter the details of the process like Arrival time and the Burst Time  
// 	for(i=1; i <=no_of_processes ; i++)  
// 	{  
// 		printf("\n Enter the Arrival and Burst time of the Process[%d]\n", i);  
// 		printf(" Arrival time : ");  // Accept arrival time  
// 		scanf("%d", &at[i]);  
// 		printf(" Burst time : "); // Accept the Burst time  
// 		scanf("%d", &bt[i]);
//         tempbt[i]=bt[i];  
// 	}  

//     printf("TABLE\n");
//     for(int i=1; i<=no_of_processes; i++)
//     {
//         printf("process%d\t",i);
//         printf("%d\t",bt[i]);
//         printf("%d\t",at[i]);
//         printf("\n");
//     } 
	
//     while(1)
//     {
//         int check = 0;
//         for(int i=1;i<=no_of_processes;i++)
//         {
//             if(tempbt[i]!=0)
//             {
//                 check = 1;
//             }
//         }
//         if(check == 0)
//            break;
//         for (int i = 1; i <= no_of_processes; i++)
//         {
//            if (tempbt[i] == 0)
//            {
//                 continue;
//            }
//            else
//            {
//                 tempbt[i] = tempbt[i] - 1;
//                 for (int j = 1; j <= no_of_processes; j++)
//                 {
//                     if (j != i && tempbt[j] != 0)
//                     {
//                         wt[j] = wt[j] + quant;
//                     }
//                 }
//            }
//         }
//     }

//     printf("\nWaiting time:\n");
//     for(int i=1;i<=no_of_processes;i++)
//     {
//         wt[i] = wt[i]-at[i]; 
//         printf("\t%d",wt[i]);
//     }

//     printf("\nTurn around time:\n");
//     for(int i=1;i<=no_of_processes;i++)
//     {
//         tat[i] = wt[i] + bt[i];
//         sum_tat = sum_tat + tat[i];
//         sum_wt = sum_wt + wt[i];
//         printf("\t%d",tat[i]);
//     }
    
//     avg_tat = sum_tat / no_of_processes;
//     avg_wt = sum_wt / no_of_processes;
    
//     printf("\nAverage TAT: %d",avg_tat);
//     printf("\nAverage Wt: %d",avg_wt);
// }