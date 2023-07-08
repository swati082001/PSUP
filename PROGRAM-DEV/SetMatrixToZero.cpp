#include <bits/stdc++.h>
using namespace std;

int main() 
{
	// m - row and n = column
	int m;
	int n;
	cin>> m >> n;
	int matrix[m][n];
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin >> matrix[i][j];
		}
	}
	for(int i=0;i<m;i++){
         
            for(int j=0;j<n;j++){
               
                if(matrix[i][j]==0){
                    
                    for(int k=0;k<m;k++){
                        if(matrix[k][j]!=0)
                            matrix[k][j]=-1;
                    }
                    
                    for(int k=0;k<n;k++){
                        if(matrix[i][k]!=0)
                            matrix[i][k]=-1;
                    }
                }
            }
        }
	
	for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==-1){
                    matrix[i][j]=0;
                }
            }
        }
	
	 for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
    
	
 
