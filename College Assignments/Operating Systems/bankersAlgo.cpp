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


int main(){
    //making the matrices 

    
    int n, m, i, j, k;
    //cout<<"Enter the number of processes\n";
    //cin>>n;                                                         
    //cout<<"Enter the number of resources\n";
    //cin>>m;   
    n = 5;                                                          // Number of processes
    m = 3;                                                          // Number of resources
    vector<vector<int>> alloc ( m , vector<int> (n , 0));
/*    vector<vector<int>> alloc = { { 0, 1, 0 }, // P0                // Allocation Matrix
					              { 2, 0, 0 }, // P1
					              { 3, 0, 2 }, // P2
					              { 2, 1, 1 }, // P3
					              { 0, 0, 2 } }; // P4          can also use a for loop to take input */
    for(auto &v : alloc){
        for(auto &vi : v){
            cin>>vi;
        }
    }
    vector<vector<int>> max (m , vector<int> (n , 0));
/*    vector<vector<int>> max = { { 7, 5, 3 }, // P0 // MAX Matrix
				                { 3, 2, 2 }, // P1
				                { 9, 0, 2 }, // P2
				                { 2, 2, 2 }, // P3
				                { 4, 3, 3 } }; // P4            can also take a for loop to take the input */

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
    cout<<"The need matrix is as follows : \n";              //Printing the NEED MATRIX
    printMatrix(need);
    return 0;
}