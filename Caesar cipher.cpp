#include<stdio.h>
#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
int main(){
	char cipher[100];
	int num,mod;
	bool loop=true; 
	cout<<"此程式為凱薩密碼加解密\n"; 
	while(loop){
		cout<<"加密請輸入1"<<endl;
		cout<<"解密請輸入2"<<endl;
		cout<<"暴力破解輸入3"<<endl;
		cout<<"退出請輸入4"<<endl;
		
		cin>>num;
		switch(num){
			case 1:
				cout<<"輸入文字=>";
				cin>>cipher;
				cout<<"輸入偏移量=>";
				cin>>mod;
				for(int i=0;i<strlen(cipher);i++){
					if(cipher[i]>='A'and cipher[i]<='Z')
					{
						cipher[i]=((cipher[i]-'A')+mod)%26+'A';
					}
					else if(cipher[i]>='a'and cipher[i]<='z')
					{
						cipher[i]=((cipher[i]-'a')+mod)%26+'a';
					}
				
			}
				cout<<cipher;
				cout<<endl;
				break;
			case 2:
				cout<<"輸入密文=>";
				cin>>cipher;
				cout<<"輸入偏移量=>";
				cin>>mod;
				for(int i=0;i<strlen(cipher);i++){
					if(cipher[i]>='A'and cipher[i]<='Z')
					{
						cipher[i]=((cipher[i]-'A')+(26-mod))%26+'A';
					}
					else if(cipher[i]>='a'and cipher[i]<='z')
					{
						cipher[i]=((cipher[i]-'a')+(26-mod))%26+'a';
					} 
			}
				cout<<cipher;
				cout<<endl;
				break;
			
			case 3:
				cout<<"輸入密文=>";
				cin>>cipher;
				mod=0;
				while(mod<26){
					for(int i=0;i<strlen(cipher);i++){
						if(cipher[i]>='A'and cipher[i]<='Z')
						{
							cipher[i]=((cipher[i]-'A')+(26-mod))%26+'A';
						}
						else if(cipher[i]>='a'and cipher[i]<='z')
						{
							cipher[i]=((cipher[i]-'a')+(26-mod))%26+'a';
						} 
					}
					cout<<cipher<<"-----"<<mod+1;
					cout<<endl;
					mod++;
			}
				break;
				case 4:
				loop=false;
				break;
			default:
				cout<<"輸入錯誤";
				break;
		}
	}
	return 0;
}
