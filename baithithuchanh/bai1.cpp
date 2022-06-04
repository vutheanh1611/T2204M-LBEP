#include<iostream>
using namespace std;
int main()
{
  //khai báo bien n và yêu cau nguoi dùng nhap vào tu bàn phím
  //a là don vi
  int n;
  printf("\nNhap vào s0 n: ");
  scanf("%d", &n);
  int a = n % 10;
  //b là ch?c
  int b = (n / 10) % 10;
  //c là hàng tram
  int c = n / 100;
  //di?u ki?n s? có hai ch? s?
  if(n<100 || n > 999){
    cout<<"Nh?p vào s? có hai ch? s?!! ";
  }
  else{
    switch(c){
      case 1: cout<<"M?t tram ";break;
      case 2: cout<<"Hai tram ";break;
      case 3: cout<<"Ba tram ";break;
      case 4: cout<<"B?n tram ";break;
      case 5: cout<<"Nam tram ";break;
      case 6: cout<<"Sáu tram ";break;
      case 7: cout<<"B?y tram ";break;
      case 8: cout<<"Tám tram ";break;
      case 9: cout<<"Chín tram ";break;
    }
    // in ra ch? "l?" n?u hàng ch?c b?ng không
    if(b % 10 == 0 && a != 0){
      printf("l? ");
    }
    //in ra hàng ch?c
    switch(b){
      case 1: cout<<"mu?i ";break;
      case 2: cout<<"hai muoi ";break;
      case 3: cout<<"ba muoi ";break;
      case 4: cout<<"b?n muoi ";break;
      case 5: cout<<"nam muoi ";break;
      case 6: cout<<"sáu muoi ";break;
      case 7: cout<<"b?y muoi ";break;
      case 8: cout<<"tám muoi ";break;
      case 9: cout<<"chín muoi ";break;
    }
    //in ra hàn don v?
    switch(a){
      case 1: cout<<"m?t ";break;
      case 2: cout<<"hai ";break;
      case 3: cout<<"ba ";break;
      case 4: cout<<"b?n ";break;
      case 5: cout<<"lam ";break;
      case 6: cout<<"sáu ";break;
      case 7: cout<<"b?y ";break;
      case 8: cout<<"tám ";break;
      case 9: cout<<"chín ";break;
    }
  }
