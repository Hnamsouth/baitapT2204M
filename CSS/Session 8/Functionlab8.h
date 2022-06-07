#include<iostream>
using namespace std;

void nhap2chuoi(char a[],char b[]){
    cout<<"nhap chuoi a: ";
    cin>>a;
    cout<<endl<<"nhap chuoi b: ";
    cin>>b;
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
int Cdungtruoc(char a[],char b[]){ // a[]=true  , b=false
    int k;
    if(strcmp(a,b)==0){
        k=2;
        return k;
    }
    for(int i=0;i<100;i++){
        for(int j=0;j<100;j++){
            if(a[j]>b[j]){
                k=1;
                break;
            }else if(a[j]==b[j]){
                continue;
            }else if(a[j]<b[j]){    
                k=0;
                break;
            }
        }
    }
    return k;
}

//B3:
void nhap10(char a[100][100]){
    for(int i=0;i<10;i++){
        cout<<"nhap mang "<<i+1<<": ";
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
void arraymax(char j[100][100],int vtri[10],int k,int bd){
    k=0;bd=0;
    vtri[k]=0;
    int Cmax=strlen(j[0]);
    for(int i=1;i<10;i++){
        if(strlen(j[i])>Cmax){
            Cmax=strlen(j[i]);
            vtri[k]=i;
        }else if(strlen(j[i])==Cmax){
            k++,bd++;
            vtri[k]=i;
        }
    }
    if(bd==9){
        cout<<"trong mang khong co chuoi co do dai lon nhat ";
    }else if(bd>0){
        cout<<"trong mang co "<<bd+1<<" chuoi co do dai lon nhat la:";
        for(int i=0;i<=bd;i++){cout<<vtri[i]+1<<" ";}
    }
    else{
        cout<<"chuoi thu "<<vtri[0]+1<<" trong mang la Chuoi co do dai lon nhat";
    }
}

//B6:
void ArrayFirst(char a[100][100],int vtridau[10],int n,int bd){
    n=1,bd=0;
    vtridau[bd]=0;
    for(int i=1;i<10;i++){
        bool k=true;
        for(int j=0;j<strlen(a[vtridau[bd]]);j++){
            if(a[i][j]<a[vtridau[bd]][j]){
                n=1,bd=0;
                vtridau[bd]=i;
                k=false;
                break;
            }else if(a[i][j]==a[vtridau[bd]][j]){
                continue;
            }if(a[i][j]>a[vtridau[bd]][j]){
                break;
            }
        }
        if(k){
            if(strcmp(a[vtridau[bd]],a[i])==0){
                n++,bd++;
                vtridau[bd]=i;
            }
        }
    }
    if(n==10){
        cout<<"ko co chuoi nao dung dau ";
    }else if(n>1){
        cout<<"co "<<n<<" chuoi dung dau theo day alphabet la cac chuoi: ";
        for(int i=0;i<n;i++){
            cout<<vtridau[i]+1<<" ";
        }
    }else{
        cout<<"chuoi thu "<<vtridau[n-1]+1<<" la chuoi dung dau theo day alphabet ";
    }
    
}

