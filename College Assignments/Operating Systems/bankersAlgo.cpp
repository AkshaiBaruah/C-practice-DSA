// Banker's Algorithm
#include<bits/stdc++.h>
using namespace std;
void printMatrix(vector<vector<int>> &mat){
    int n = mat.size();
    int m = mat[0].size();
    for(auto &v : mat){
        for(auto &v2 : v){
            cout<<v2<<" ";
        }
        cout<<endl;
    }
}
void safeSeq(int finish[] , int m , int SAFE_SEQ[] , int n){
    int flag = 1;
    // To check if sequence is safe or not
    for(int i = 0;i<n;i++){                      //if any process is not finished that means the given sequence is not safe
    	if(finish[i]==0){
    		flag = 0;
    		cout << "The given sequence is not safe";
    		break;
    	}
    }

    if(flag==1)
    {
    	cout << "Following is the SAFE Sequence" << endl;
    	for (int i = 0; i < n - 1; i++)
    		cout << " P" << SAFE_SEQ[i] << " ->";
    	cout << " P" << SAFE_SEQ[n - 1] <<endl;
    }
}
int main(){

    int n, m, i, j, k;
    //cout<<"Enter the number of processes\n";
    //cin>>n;                                                         
    //cout<<"Enter the number of resources\n";
    //cin>>m;   
    n = 5;                                                          // Number of processes
    m = 3;                                                          // Number of resources
    vector<vector<int>> alloc = { { 0, 1, 0 },                     // Allocation Matrix
					              { 2, 0, 0 }, 
					              { 3, 0, 2 }, 
					              { 2, 1, 1 }, 
					              { 0, 0, 2 } };            //can also use a for loop to take input 

    vector<vector<int>> max = { { 7, 5, 3 },                       // MAX Matrix
				                { 3, 2, 2 }, 
				                { 9, 0, 2 }, 
				                { 2, 2, 2 }, 
				                { 4, 3, 3 } };              // can also take a for loop to take the input 

    int avail[3] = { 3, 3, 2 };                                     // Available Resources

    int finish[n], SAFE_SEQ[n], ind = 0;
    for (k = 0; k < n; k++) {
    	finish[k] = 0;
    }
    vector< vector< int >> need(n , vector<int>( m , 0));
    // calculating the NEED matrix
    for (i = 0; i < n; i++) {
    	for (j = 0; j < m; j++)
    	    need[i][j] = max[i][j] - alloc[i][j];
    }
    
    int y = 0;
    for (k = 0; k < n; k++) {
    	for (i = 0; i < n; i++) {
    	    if (finish[i] == 0) {

    	    	int flag = 0;
    	    	for (j = 0; j < m; j++) {                //checking if need is greater than avail for the process i
    	    	    if (need[i][j] > avail[j]){
    	    	    	flag = 1;
    	    	    	break;
    	    	    }
    	    	}

    	    	if (flag == 0) {
    	    	    SAFE_SEQ[ind++] = i;                    //one process finished, added to safe sequence and resource freed : added to available
    	    	    for (j = 0; j < m; j++)
    	    		    avail[j] += alloc[i][j];
    	    	        finish[i] = 1;
    	    	}
    	    }
    	}
    }

    int flag = 1;
    X:
    cout<<"\nEnter your choice : \n1.Print Need matrix             2.Safe Sequence\n3.exit\n";
    int choice  =INT_MIN;
    cin>>choice;

    switch (choice)
    {
    case 1:
        cout<<"The need matrix is as follows : \n";
        printMatrix(need);
        goto X;
    case 2 : 
        safeSeq(finish , m , SAFE_SEQ , n);
        goto X;
    case 3 : 
        exit(0);
    default:
        break;
    }

	return 0;
}