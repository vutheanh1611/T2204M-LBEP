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
    int x,k=0;
    cout<<"nhap so x"<<endl;
    cin>>x;
    for(int i=0;i<p;i++){
        if(n[i]==x){
            k++;
        }
    }
    if(k==0){
        cout<<"x khong trong mang"<<endl;
    }else{
        cout<<"x  co trong mang"<<endl;
    }
    return 0;
}
