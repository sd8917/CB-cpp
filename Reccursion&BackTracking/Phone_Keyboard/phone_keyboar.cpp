#include<iostream>

using namespace std;

char keyboard[][10] = {"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void printKeypadString(char *in, char *out ,int i,int j){
    //Base Case
    if(in[j] == '\0'){
        out[j] = '\0';
        cout<<"out"<<endl;
        return;
    }

    //Rec Case
    int digit = in[i]-'0';

    if(digit ==1 || digit ==0){
        printKeypadString(in,out,i+1,j);
    }

    for(int k=0; k<=keyboard[digit][k]!='\0'; k++){
        out[j] = keyboard[digit][k];
        printKeypadString(in,out,i+1,j+1);
    }

}

int main(){
    char in[100];
    char out[100];
    cin>>in;

    printKeypadString(in,out,0,0);
    return 0;

}
