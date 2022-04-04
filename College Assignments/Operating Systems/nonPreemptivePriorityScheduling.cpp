#include <stdio.h>

int sum(int x[],int y){ 
    int j=0,s=0;
    while(j<y){
        s+=x[j];j++;
    }

    return s;
}

int min(int x[],int y){

    int j=0;int m;int p;
    while(j<y){ 
        if(x[j]!=0){
            m=x[j];p=j;break;
        }
        j++;
    }
    j=0;
    while(j<y){
        if((m>x[j])&&(x[j]!=0)){
            m=x[j];p=j;
        }
        j++;
    }
    return p;
}

int main(){
    int t[100];t[0]=0;
    int i=0,n,j=0,k=0,pos;

    printf("Enter the no. of processes: ");
    scanf("%d",&n);

    int bt[n];int xt[n];int at[n];int wt[n];int tat[n];int pt[n];int yt[n];
    while(i<n){
        printf("\nArrival Time of P%d: ",i+1);
        scanf("%d",&at[i]);
        printf("Burst Time of P%d: ",i+1);
        scanf("%d",&bt[i]);
        printf("Priority of P%d: ",i+1);
        scanf("%d",&pt[i]);
        xt[i]=bt[i];
        yt[i]=pt[i];
        pt[i]=0;
        tat[i]=0;
        i++;
    }
    while(j<n*n){ 
        if(sum(bt,n)==0){ 
            break;
        }
        i=0;
        while(i<n){
            if((t[k]>=at[i])&&(tat[i]==0)){
                pt[i]=yt[i];
            }
            i++;
        }
        pos=(min(pt,n));
        t[k+1]=t[k]+bt[pos];
        tat[pos]=t[k+1]-at[pos];
        bt[pos]=0;
        pt[pos]=0;
        j++;k++;printf(".");
    }

    i=0;

    while(i<n){
        wt[i]=tat[i]-xt[i];
        i++;
    }

    float AWT,ATAT;
    AWT=((float)sum(wt,n))/(float)n;
    ATAT=((float)sum(tat,n))/(float)n;

    printf("\n Process  ArrivalTime  BurstTime  Priority  WaitingTime  TurnAroundTime");
    i=0;
    
    while(i<n){
        printf("\n P%d           %d          %d             %d          %d           %d ",i+1,at[i],xt[i],yt[i],wt[i],tat[i]);
        i++;
    }

    printf("\nAverage Waiting Time(AWT) = %f",AWT);
    printf("\nAverage Turn Around Time(ATAT) = %f",ATAT);

    return 0;
}