#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter the num of rows :";
    cin >> n;

    int space=(n-1)*2;

    
    for(int i=0; i<n; i++){

        if(i==0){
            //space
            for(int sp=1; sp<=n-1; sp++){
                cout<<" ";
            }
            cout<<"*";

            // spaces
            for(int sp=1; sp<=n*2; sp++){
                cout<<" ";
            }
            cout<<"*"<<endl;

        }else if(i==n-1){
            // spaces
            for(int str=1; str<= ((n*4)-2)/2; str++){
                cout<<"*";
            }
            cout<<"  ";
            for(int str=1; str<= ((n*4)-2)/2; str++){
                cout<<"*";
            }

        }else{

            //spaces
            for(int sp=1; sp<=n-i-1; sp++){
                cout<<" ";
            }
            cout<<"*";
            for(int sp=1; sp<=(i*2)-1; sp++){
                cout<<" ";
            }
            cout<<"*";
            for(int sp=1; sp<=space; sp++){
                cout<<" ";
            }
            cout<<"*";
            for(int sp=1; sp<=(i*2)-1; sp++){
                cout<<" ";
            }
            cout<<"*"<<endl;
            space-=2;
        }

    }

    return 0;
}