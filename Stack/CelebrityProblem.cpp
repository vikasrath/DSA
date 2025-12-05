#include <iostream>
#include <vector>
#include <stack>
using namespace std;


int main() {

    vector<vector<int>> arr = {
        {0, 0, 0},
        {1, 0, 0},
        {1, 1, 0}
    };
    stack<int>st;
    int n = arr[0].size();
    for(int i=0; i<n; i++){
        st.push(i);
    }

    while (st.size()!=1)
    {
        int val1=st.top(); st.pop();
        int val2=st.top(); st.pop();
        
        if(arr[val1][val2]==1) st.push(val2);
        else if(arr[val2][val1]==1) st.push(val1);
        
    }
    int x=st.top();
    bool rowcheck=true;
    bool celeb=true;
    for(int i=0; i<n; i++){
        // verify row
        if(arr[x][i]!=0){
            rowcheck=false;
            break;
        }
    }
    if(rowcheck){
        for(int i=0; i<n; i++){
            // verify coloum
            if(arr[i][x]!=1 && x != i){
                celeb=false;
                break;
            }
        }
    }
    if(rowcheck && celeb) cout<<"celebrity is : "<<x;
    else {
        cout<<"no celebrity";
    }





// Brute force approach.......................for solving celebirity problem

//     int n = arr[0].size();

//     for (int i = 0; i < n; i++){
//         bool rowcheck=true;
//         bool celeb = true;
//         for (int j = 0; j < n; j++){ // verify row 
//             if(arr[i][j]!=0){
//                 rowcheck = false;
//                 break;
//             }
//         }
//         if(rowcheck){
//             for(int k=0; k<n; k++){ // verify coloum
//                 if(arr[k][i]!=1 && k != i){
//                     celeb=false;
//                     break;
//                 }
//             }
//         }

//         if(celeb && rowcheck){
//             cout<<"celeb is : "<<i;
//         }
//         cout << endl;
//     }
    
    return 0;
}

