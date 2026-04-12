#include<iostream>
#include<limits.h>
using namespace std;

// Find the smallest number in an array
int smallestNumber(int arr[],int n){
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(min > arr[i])
        {
            min = arr[i];
        }
    }
    return min;
    
}
// Find the largest number in an array
int largestNumber(int arr[] , int n){
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;

}
int main(){
    // int arr[] = {2, 5, 1, 3, 0};
    // int n = 5;
    // int smallestNO = smallestNumber(arr,n);
    // cout<<"smallestNumber "<<smallestNO<<endl;
    int arr[] = {2, 5, 1, 3, 0};
    int n = 5;
int maxi = largestNumber(arr,n);
cout<<"largestNumber"<<maxi;
    
}
