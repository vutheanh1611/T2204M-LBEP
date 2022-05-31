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
    int bd=0,slcc;;
    for(int j=p-1;j>=0;j--){
        if(n[j]&1==1||n[j]&1==-1){
            slcc=n[j];
            break;
        }else{
            bd++;
        }
    }
    cout<< bd<<endl;
    if(bd==p){
        cout<<"trong mang khong co so le"<<endl;
    }else {
        cout<<"so le cuoi cung cua mang la" <<endl<< slcc;
    }
    return 0;
}
