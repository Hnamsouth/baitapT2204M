#include <iostream>
using namespace std;
int main(){

	int n;
	cout<<"Nhap vao so nguyen co 3 chu so: ";
	cin>>n;
	// 456/100 4 56 10 5 6
	// cout<<n%100;
	// cout<<endl<<n/10;
    //use loop (while)
	int a;
    int bd=100;
	while(bd>0){
		int a=n/bd;
		if (a == 1){cout<<"một ";
		}else if (a == 2){cout<<"two ";
		}else if (a == 3){cout<<"three ";
		}else if (a == 4){cout<<"four ";
		}else if (a == 5){cout<<"five ";
		}else if (a == 6){cout<<"six ";
		}else if (a == 7){cout<<"seven ";
		}else if (a == 8){cout<<"eight ";
		}else if (a == 9){cout<<"nine";
		}
		n%=bd;
        bd/=10;
	}
    // use loop (for)
    for(int i=100;i>0;i/=10){
        int a=n/i;
        if (a == 1){cout<<"một ";
		}else if (a == 2){cout<<"two ";
		}else if (a == 3){cout<<"three ";
		}else if (a == 4){cout<<"four ";
		}else if (a == 5){cout<<"five ";
		}else if (a == 6){cout<<"six ";
		}else if (a == 7){cout<<"seven ";
		}else if (a == 8){cout<<"eight ";
		}else if (a == 9){cout<<"nine";
		}
        n%=i;
    }
    return 0;
}
