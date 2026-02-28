#include<vector>
#include <iostream>
#include <algorithm>
using namespace std;

void transposeOfMatrix(vector<vector<int>> & arr )
{
   int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        // j = i se start karna zaroori hai taki elements double swap na ho jayein
        {
            swap(arr[i][j],arr[j][i]);
        }
       
    }
    
}
void printArray(vector<vector<int>> & arr){
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    vector<vector<int>> arr = {
        {1,2,3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout<<"Original Matrix:" << endl;
    printArray(arr);

    transposeOfMatrix(arr);

    cout << "\nTransposed Matrix:" << endl;
    printArray(arr);
    return 0;
}