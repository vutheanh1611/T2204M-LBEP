#include <iostream>
using namespace std;
int main(){
	 int n[1000];
    int p;
    cout<< " nhap so luong phan tu trong mang: "<<endl;
    cin >>p;
    for(int i=0;i<p;i++){
        cin>>n[i];               
    }
    int i=0,snn,bd=0;
    while(i<p){
        if(n[i]<snn && n[i] >0){
            snn=n[i];
            bd++;
        }
        if(snn>0){
            bd++;
        }
        i++;
    }
    if(bd==0){
        cout<<"mang khong co so duong"<<endl;
    }else{
        cout<< " so nho nhat la : "<<snn<<endl;
    }
    
    return 0;
}

