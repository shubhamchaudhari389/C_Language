#include<stdio.h>
int main()
{
    int AT[10],BT[10],WT[10],TT[10],n;
    int burst=0,cmpl_T;
    float Avg_WT,Avg_TT,Total=0;
    printf("Enter number of the process\n");
    scanf("%d",&n);
    printf(" Burst time of the process\n");
    printf("BT\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&BT[i]);
    }

     printf(" Arival time of the process\n");
    printf("AT\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&AT[i]);
    }
    
    // Logic for calculating Waiting time
    for(int i=0;i<n;i++)
    {
        if(i==0)
            WT[i]=AT[i];
          else
            WT[i]=burst-AT[i];
             burst+=BT[i];
              
      
    }
    Avg_WT=Total/n;
     

     
   
    // printing of outputs
    
    printf("Process ,Waiting_time ,TurnA_time\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t\t%d\t\t%d\n",i+1,WT[i],TT[i]);
    }
    printf("Average waiting time is : %f\n",Avg_WT);
    printf("Average turn around time is : %f\n",Avg_TT);
    return 0;
} 