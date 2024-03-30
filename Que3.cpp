// Write a program to print the matrix in wave form.
// Input :
// 1 2 3
// 4 5 6
// 7 8 9
// Output : 7 4 1 2 5 8 9 6 3
#include<iostream>
using namespace std;
int main()
{
    int m;
    cout<<"Enter row of matri x :";
    cin>>m;
    int n;
    cout<<"Enter column of matrix : ";
    cin>>n;
    int a[m][n];
    cout<<"Enter the element of matrix "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Print in wave form "<<endl;
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=m-1;j>=0;j--){
                cout<<a[j][i]<<" ";
            }
        }
        else{
            for(int j=0;j<m;j++){
                cout<<a[j][i]<<" ";
            }
        }
        
    }
    return 0;
}