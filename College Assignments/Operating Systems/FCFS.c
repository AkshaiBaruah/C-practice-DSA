#include <stdio.h>

int waitingTime(int process[], int n, int burstTime[], int waitTime[])
{

    waitTime[0] = 0;

    for (int i = 1; i < n; i++)
        waitTime[i] = burstTime[i - 1] + waitTime[i - 1];
    return 0;
}

int TAT(int process[], int n, int burstTime[], int waitTime[], int tat[])
{
    int i;
    for (i = 0; i < n; i++)
        tat[i] = burstTime[i] + waitTime[i];
    return 0;
}

int avgTime(int process[], int n, int burstTime[])
{
    int waitTime[n], tat[n], total_wt = 0, total_tat = 0;

    int i;

    waitingTime(process, n, burstTime, waitTime);
    TAT(process, n, burstTime, waitTime, tat);

    printf("Processes     BurstTime     WaitingTime   \tTAT \n");

    for (i = 0; i < n; i++)
    {
        total_wt = total_wt + waitTime[i];
        total_tat = total_tat + tat[i];
        printf(" %d\t\t  %d\t\t %d \t\t%d\n", i + 1, burstTime[i], waitTime[i], tat[i]);
    }
    printf("Average waiting time = %f\n", (float)total_wt /n);
    printf("Average turn around time = %f\n", (float)total_tat /n);
    return 0;
}

int main()
{
    printf("Enter the number or processes: ");
    int N;
    scanf("%d", &N);
    int process[N];
    int burst_time[N];
    printf("Enter the process details: \n");
    for (int i = 0; i < N; i++)
    {
        process[i] = i + 1;
        printf("Burst time for P[%d]: ", i + 1);
        scanf("%d", &burst_time[i]);
    }

    avgTime(process, N, burst_time);
    return 0;
}