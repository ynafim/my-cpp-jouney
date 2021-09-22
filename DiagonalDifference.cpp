#include <iostream>
using namespace std;

int main(){

int n;
cin >>n;

int diagonal_1=0;
int diagonal_2=0;


int arr[n][n];
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
         // Condition for principal diagonal
            if (i == j)
                diagonal_1 += arr[i][j];

            // Condition for secondary diagonal
            if ((i + j) == (n - 1))
                diagonal_2 += arr[i][j];

    }

}
int dif=diagonal_1-diagonal_2;
if(dif<0){
    dif *= -1;
}
cout<<dif<<endl;
return 0;
}
