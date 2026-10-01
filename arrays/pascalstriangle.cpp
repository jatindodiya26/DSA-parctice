


// #include<iostream>
// using namespace std;

// int main()

// int m, n ;
// cout<<"enter the value of m rows and n columns";
// cin>>m>>n;

// int arr[m][n];

// for (int i=0; i<m; i++){
//     for(int j=0; j<n; j++){

// cin>>arr[i][j];

//     }

// }
// int pascal[m][n];

// for (int i=0; i<m; i++){
//     for(int j=0; j<n; j++){

// pascal [i][j]= pascal[i-1][j] +  pascal[i-1][j-1];

//    }

// }

// for (int i=0; i<m; i++)
//     for(int j=0; j<n; j++)

#include<iostream>
#include<vector>
using namespace std;


vector<vector<int> > pascalTriangle(int n){

    vector<vector<int> > pascal(n);

    for (int i=0; i<n; i++){


        int ith_vector=pascal[i];

        ith_vector.resize(i+1);

    for(int j=0; j<i+1; j++){

                 if(j==0||j==i){

                    pascal[i][j]=1;
        
                 }
            else{

             pascal [i][j]= pascal[i-1][j] +  pascal[i-1]

             


            }

    }

}
}

int main(){


int n;
cout<<"enter the value of n";
cin>>n;

vector<vector<int> >  ans;
ans = pascalTriangle(n);

for (int i=0; i<ans.size(); i++){
    for(int j=0; j<ans[i].size(); j++){

cout<<ans[i][j]<<endl;

    }
cout<<endl;

}



return 0;


}



























