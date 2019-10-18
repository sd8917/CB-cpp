#include<iostream>
using namespace std;

void subsequences(char *in, char *out,int i, int j){
    //Base Case
    if(in[i]=='\0'){
        out[j] = '\0';
        cout<<out<<", ";
        return;
    }

    //Rec Case
    //1.Include the Current Char
    out[j]=in[i];

    subsequences(in,out,i+1,j+1);
    //2.Exclude the Current Char
    subsequences(in,out,i+1,j);

}
int main(){
    char in[100];
    cin>>in;

    char out[100];

    subsequences(in,out,0,0);

    return 0;
}
