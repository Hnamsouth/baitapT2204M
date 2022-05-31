#include<iostream>
using namespace std;

void nhap2chuoi(char a[],char b[]){
    cin>>a>>b;
}
// B1:
void dodaichuoi(char a[],char b[]){
    if(strlen(a)>strlen(b)){
        cout<<"chuoi a co do lai lon hon";
    }else if(strlen(a)<strlen(b)){
        cout<<"chuoi b co do lai lon hon";
    }else{
        cout<<"2 chuoi bang nhau";
    }
}
// B2:
bool Cdungtruoc(char a[],char b[]){ // a[]=true  , b=false
    bool k;
    for(int i=0;i<strlen(a);i++){
        for(int j=0;j<strlen(b);j++){
            if(a[i]>b[j]){
                return false;
            }else if(a[i]==b[j]){
                continue;
            }
        }
    }
    return k;
}

//B3:
void nhap10(char a[100][100]){
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
}
void inmang10(char a[100][100],int n){
    for(int i=0;i<n;i++){
            cout<<a[i]<<endl;
    }
    
}
//B4:
void Bai4(char a[]){
    int pos, x;
    for(int i=0;i<strlen(a);i++){
        x = a[i];  // gan 1 bien x = ptu thu a[i]
		pos = i;    // gan 1 bien vi tri
		while(pos > 0 ){ // vd abcde ---vl0: abcde |vl1: bacde |vl2: cbade |vl3: dcbae |vl4: edcba
			a[pos] = a[pos-1];	
			pos--;
		}
		a[pos] = x;
    }
}
//B5:
int CmaxOfArray(char a[10][100]){
    int Cmax=strlen(a[0]);
    int k=0;
    for(int i=1;i<10;i++){
        if(strlen(a[i])>Cmax){
            k=i;
        }
    }
    return k;
}
//B6:
int bai6 (char a[10][100]){
    int n=1;
    int bd=0;
    int vtridau[10]={0};
    for(int i=1;i<4;i++){
        bool k=true;
        for(int j=0;j<strlen(a[vtridau[bd]]);j++){
            if(a[i][j]<a[vtridau[bd]][j]){
                vtridau[bd]=i;
                k=false;
                break;
            }else if(a[i][j]==a[vtridau[bd]][j]){
                continue;
            }
        }
        if(k){
            if(strcmp(a[vtridau[bd]],a[i])==0){
                n++;
                bd++;
                vtridau[bd]=i;
            }
        }
    }
    return n;
}
int vitridd(int vtridau[]){
    
}