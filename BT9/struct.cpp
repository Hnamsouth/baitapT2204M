#include<iostream>
#include<vector>

using namespace std;

struct hocsinh{
    int tuoi[10];
    string name[10];
    float chieu_cao[10];

    void nhapTT() {
        for(int i=0;i<3;i++){
            cin>>tuoi[i]>>name[i]>>chieu_cao[i];
        }
        
    }
}hs,hs2;
<<<<<<< Updated upstream
typedef struct ten{
    int a;
}snguoi1 ;
=======

typedef struct ten{
    // 
    int a;
}snguoi1 ;

>>>>>>> Stashed changes
class hsinh{
    public:
        void display (int t[10], string name[10],float cc[10],int n){
            for(int i=0;i<3;i++){
                cout<<t[i]<<endl<<name[i]<<endl<<cc[i]<<endl;
            }
        }
}iDP;
int main(){


    hs.nhapTT();
    // memcpy(&hs2,&hs,sizeof(hocsinh)); // hs2 =hs : sao chép các biến của struct
    // iDP.display(hs2.tuoi,hs2.name,hs2.chieu_cao,10);

    snguoi1 tenbien;
    tenbien.a=24;


    // cấp phát bộ nhớ động cho cấu trúc như các kld 
    hocsinh *slhs;
    slhs=(struct hocsinh*)malloc(3*sizeof(hocsinh));
    for(int i=0;i<3;i++){
        cin>>slhs->tuoi[i]>>slhs->name[i]>>slhs->chieu_cao[i];
    }
    for(int i=0;i<3;i++){
        cout<<slhs->tuoi[i]<<slhs->name[i]<<slhs->chieu_cao[i];
    }

    free(slhs);
    return 0;
}