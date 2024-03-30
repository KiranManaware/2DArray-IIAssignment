#include<iostream>
using namespace std;
void generateMatrix(int c){
    int n=c;
        int matrix[n][n];
        int minr=0,minc=0;
        int maxr=n-1,maxc=n-1;
        int tne=n*n;
        int count=0;
        int a=1;
        while(count<tne){
            //Right
            for(int j=minc;j<=maxc && count<tne;j++){
                matrix[minr][j] = a++;
                count++;
            }
            minr++;
           
            //Down
            for(int i=minr;i<=maxr && count<tne;i++){
                matrix[i][maxc] = a++;
                count++;
            }
            maxc--;
         
            // Left
            for(int j=maxc;j>=minc && count<tne;j--){
               matrix[maxr][j]=a++;
                count++;
            }
            maxr--;
     
            // Up
            for(int i=maxr;i>=minr && count<tne;i--){
                matrix[i][minc] =a++;
                count++;
            }
            minc++;
        }
        cout<<"Generated matrix "<<endl;
        for(int i= 0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
        

}
int main(){
    int n;
    cout<<"Enter n : ";
    cin>>n;
    generateMatrix(n); 
    return 0;
}