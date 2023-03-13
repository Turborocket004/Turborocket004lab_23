#include<iostream>
using namespace std;

int main(int argc,char *argv[]){
    int sum = 0;
    if(argc <= 1){
    cout << "Please input numbers to find average.\n";
    return 0;
    }
    for(int i =0;i < argc;i++){
        int ans = atoi(argv[i]);
        sum += ans;
        }
        
    double result = (double)sum/(argc-1);
    cout << "---------------------------------\n";
    cout << "Average of " << argc-1 <<" numbers = " << result <<"\n";
    cout << "---------------------------------";
    return 0;
    
    }
