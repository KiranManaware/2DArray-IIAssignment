// Write a program to rotate the matrix by 90 degrees anti-clockwise.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9
// Output 1:
// 3 6 9
// 2 5 8
// 1 4 7
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size : ";
    cin>>n;
   
    int a[n][n];
    cout<<"Enter the element of the array "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    //Transpose
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
    for(int k=0;k<n;k++){
        int i=0;
        int j=n-1;
        while(i<=j){
            int temp=a[i][k];
            a[i][k]=a[j][k];
            a[j][k]=temp;
            j--;
            i++;
        }
    }


    cout<<"Rotate the matrix by 90 degrees anti-clockwise. "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}