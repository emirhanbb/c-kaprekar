/*Kodlayan: Emirhan Bülbül 
Web site: www.emirhanbulbul.com  
C++ Programlama Örnekleri  
C++ Ýle Kaprekar Sayý Bulma Programý
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(int argc, char** argv) {
		int toplamb=0,toplamk=0,sonuc;
	int matris[]={1,2,3,4};
	int buyukmatris[]={1,2,3,4};
	int kucukmatris[]={1,2,3,4};
	cout<<"4 basamakli bir sayi girin: (Her rakamdan sonra enter'a basin:')\n";
	for(int a=0;a<4;a++){
	cin>>matris[a];	
	}
	
	

	//Buyukten kucuge
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(matris[i]>matris[j]){
				int temp=matris[i];
				matris[i]=matris[j];
				matris[j]=temp;
			}
			
		}
		
	}
	
	for(int c=0;c<4;c++){
	buyukmatris[c]=matris[c];
	}
	//Kucukten buyuge
	for(int r=0;r<4;r++){
		for(int g=0;g<4;g++){
			if(matris[r]<matris[g]){
					int temp=matris[r];
				matris[r]=matris[g];
				matris[g]=temp;
			}
			
		}
		
	}
	
for(int c=0;c<4;c++){
	kucukmatris[c]=matris[c];
	}	
	
	

for(int b=0;b<4;b++){
// Tek tek girilen rakamlarý tek bir sayý haline getiriyor.
	if(b==0){
toplamb=(toplamb+(buyukmatris[b]*1000));

	}
		if(b==1){
toplamb=(toplamb+(buyukmatris[b]*100));

	}
		if(b==2){
toplamb=(toplamb+(buyukmatris[b]*10));

	}
		if(b==3){
toplamb=(toplamb+(buyukmatris[b]*1));

	}
}


for(int t=0;t<4;t++){
// Tek tek girilen rakamlarý tek bir sayý haline getiriyor.
	if(t==0){
toplamk=(toplamk+(kucukmatris[t]*1000));

	}
		if(t==1){
toplamk=(toplamk+(kucukmatris[t]*100));

	}
		if(t==2){
toplamk=(toplamk+(kucukmatris[t]*10));

	}
		if(t==3){
toplamk=(toplamk+(kucukmatris[t]*1));

	}
}

sonuc=(toplamb-toplamk); //büyük sayýdan küçük sayý çýkýyor
cout<<toplamb<<"-"<<toplamk<<"="<<sonuc<<endl;
	int sayac=1; // 7 seferde tamamlanmasý için sayaç.
burasi: //goto etiketi

if(sonuc!=6174){ //6174'e eþit deðilse döndür.
	sayac++;
	if(sayac>7){
		cout<<"Kaprekar sayi degil.";
		return 0;
	}
	
	// girilen rakamlarý tek bir sayý yapmýþtýk þimdi tekrar parçalýyoruz.
matris[0]=sonuc/1000;
matris[1]=(sonuc/100)%10;
matris[2]=(sonuc/10)%10;
matris[3]=sonuc%10;

int toplamb=0,toplamk=0; //deðerleri sýfýrlýyoruz.
	//Buyukten kucuge
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			if(matris[i]>matris[j]){
				int temp=matris[i];
				matris[i]=matris[j];
				matris[j]=temp;
			}
			
		}
		
	}
	
	for(int c=0;c<4;c++){
	buyukmatris[c]=matris[c];
	}
	//Kucukten buyuge
	for(int r=0;r<4;r++){
		for(int g=0;g<4;g++){
			if(matris[r]<matris[g]){
					int temp=matris[r];
				matris[r]=matris[g];
				matris[g]=temp;
			}
			
		}
		
	}
	
for(int c=0;c<4;c++){
	kucukmatris[c]=matris[c];
	}	
	
	

for(int b=0;b<4;b++){

	if(b==0){
toplamb=(toplamb+(buyukmatris[b]*1000));

	}
		if(b==1){
toplamb=(toplamb+(buyukmatris[b]*100));

	}
		if(b==2){
toplamb=(toplamb+(buyukmatris[b]*10));

	}
		if(b==3){
toplamb=(toplamb+(buyukmatris[b]*1));

	}
}


for(int t=0;t<4;t++){

	if(t==0){
toplamk=(toplamk+(kucukmatris[t]*1000));

	}
		if(t==1){
toplamk=(toplamk+(kucukmatris[t]*100));

	}
		if(t==2){
toplamk=(toplamk+(kucukmatris[t]*10));

	}
		if(t==3){
toplamk=(toplamk+(kucukmatris[t]*1));

	}
}
sonuc=(toplamb-toplamk);
cout<<toplamb<<"-"<<toplamk<<"="<<sonuc<<endl;
goto burasi;

		
}
	return 0;

}

