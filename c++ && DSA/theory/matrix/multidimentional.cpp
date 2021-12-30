#include<iostream>
#include<vector>
using namespace std;


int main(){
    int m , n;
    cin>>m>>n;
    int a[m][n];
    for(int i = 0 ; i < m ; i++){            //row loop
        for(int j = 0 ; j<n ; j ++)          //column loop,
        cin>>a[i][j];
    }

    int **arr1 = new int*[m];                //double pointer..assigned it an array of pointers(in heap) and each pointer points to an array.. this is not cache friendly
    for(int i = 0 ; i<m ; i++){
        arr1[i] = new int[n];                //arr[i] is a pointer here.
        for(int j = 0 ; j <n ; j++){
            cin>>arr1[i][j];
        }
    }

    int *arr2[m];                            //array of pointers(in stack)..each pointer will hold address of another array in heap
    for(int i =0 ; i<m ; i++){
        arr2[i] = new int[n];
        for(int j = 0 ; j<n ; j++){
            cin>>arr2[i][j];
        }
    }
    vector<int> arr3[m];                      //array of vectors..every element is a vector..and there are m vectors
    for(int i = 0; i <m ; i++){
        for(int j = 0 ; j<n ; j++){
            int elem;
            cin>>elem;
            arr3[i].push_back(elem);
        }
    }
    vector<vector<int>> arr4(m);              //vector of vectors..it will grow automatically but we can also pre-allocate the size
    for(int i =0  ; i<m ; i++){
        for(int j = 0 ; j <n ; j++){
            arr4[i].push_back(i);
        }
    }


    return 0;
}