#include<iostream>
using namespace std;
int main()
{
  //khai b�o bien n v� y�u cau nguoi d�ng nhap v�o tu b�n ph�m
  //a l� don vi
  int n;
  printf("\nNhap v�o s0 n: ");
  scanf("%d", &n);
  int a = n % 10;
  //b l� ch?c
  int b = (n / 10) % 10;
  //c l� h�ng tram
  int c = n / 100;
  //di?u ki?n s? c� hai ch? s?
  if(n<100 || n > 999){
    cout<<"Nh?p v�o s? c� hai ch? s?!! ";
  }
  else{
    switch(c){
      case 1: cout<<"M?t tram ";break;
      case 2: cout<<"Hai tram ";break;
      case 3: cout<<"Ba tram ";break;
      case 4: cout<<"B?n tram ";break;
      case 5: cout<<"Nam tram ";break;
      case 6: cout<<"S�u tram ";break;
      case 7: cout<<"B?y tram ";break;
      case 8: cout<<"T�m tram ";break;
      case 9: cout<<"Ch�n tram ";break;
    }
    // in ra ch? "l?" n?u h�ng ch?c b?ng kh�ng
    if(b % 10 == 0 && a != 0){
      printf("l? ");
    }
    //in ra h�ng ch?c
    switch(b){
      case 1: cout<<"mu?i ";break;
      case 2: cout<<"hai muoi ";break;
      case 3: cout<<"ba muoi ";break;
      case 4: cout<<"b?n muoi ";break;
      case 5: cout<<"nam muoi ";break;
      case 6: cout<<"s�u muoi ";break;
      case 7: cout<<"b?y muoi ";break;
      case 8: cout<<"t�m muoi ";break;
      case 9: cout<<"ch�n muoi ";break;
    }
    //in ra h�n don v?
    switch(a){
      case 1: cout<<"m?t ";break;
      case 2: cout<<"hai ";break;
      case 3: cout<<"ba ";break;
      case 4: cout<<"b?n ";break;
      case 5: cout<<"lam ";break;
      case 6: cout<<"s�u ";break;
      case 7: cout<<"b?y ";break;
      case 8: cout<<"t�m ";break;
      case 9: cout<<"ch�n ";break;
    }
  }
