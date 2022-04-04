#include <stdio.h>

int sum(int x[],int y){ 
    int j=0,s=0;
    while(j<y){
        s+=x[j];j++;
    }
    return s;
}
int main(){

    int t[50];t[0]=0;
    int i=0,pos,small,max,n,j=0,k=0;
    printf("Enter the no. of processes: ");
    scanf("%d",&n);
    int bt[n];int xt[n];int at[n];int wt[n];int tat[n];int pt[n];
    while(i<n){
        printf("\nArrival Time of P%d: ",i+1);
        scanf("%d",&at[i]);
        printf("Burst Time of P%d: ",i+1);
        scanf("%d",&bt[i]);
        printf("Priority of P%d: ",i+1);
        scanf("%d",&pt[i]);

        xt[i]=bt[i];
        bt[i]=0;
        i++;
    }
    max = at[0];
    for (i = 1; i < n; i++){
        if (at[i] > max){
            max = at[i];
        }
    }
    while(j>=0){ 
        i=0;
        while(i<n){
            if(at[i]==j){
                bt[i]=xt[i];
            }
            i++;
        }
        if((j>max) && (sum(bt,n)==0))
            break;
        i=0;
        while(i<n){ 
            if(bt[i]!=0){
                small=pt[i];pos=i;
            }
            i++;
        }
        i=0;
        while(i<n){
            if((small>pt[i])&&(bt[i]!=0)){
                pos=i;
            }
            i++;
        }
        j++;
        bt[pos]-=1;
        if(bt[pos]==0){
            tat[pos]=j-at[pos];
        }
    }
    i=0;

    while(i<n){
        wt[i]=tat[i]-xt[i];
        i++;
    }

    float AWT,ATAT;
    AWT=((float)sum(wt,n))/(float)n;
    ATAT=((float)sum(tat,n))/(float)n;

    printf("\n Process  Arrivaltime  BurstTime  Priority  WaitingTime  TurnAroundTime");
    
    i=0;
    while(i<n){
        printf("\n P%d        %d             %d          %d           %d         %d ",i+1,at[i],xt[i],pt[i],wt[i],tat[i]);
        i++;
    }

    printf("\nAverage Waiting Time(AWT) = %f",AWT);
    printf("\nAverage Turn Around Time(ATAT) = %f",ATAT);

    return 0;
}