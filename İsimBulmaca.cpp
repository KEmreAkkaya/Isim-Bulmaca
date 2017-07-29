#include <iostream>
#include <cstring>
#include <string>


using namespace std;


int main() {
	char c;
	int i = 0;
	
	string x;
	string z;
	y:
	cout << "Bulunacak kelimeyi giriniz:";
	cin >> x;
	
	int haksayisi = x.length();
	for (int i = 0; i < 30; i++)
	{
		cout << "\n";
		
	}

char *y = new char[x.length() + 1];
char *h = new char[x.length() + 1];

strcpy(y, x.c_str());

for ( i = 0; i < x.length(); i++)
{
	h[i] = '-';
	cout << h[i];
}
while (haksayisi != 0)
{
	cout << "\nBir karakter giriniz::(Eger cumleyi dogru tahmin ettiyseniz 1 e basin)";
	
	cin >> c;
	if (c == 1){ goto x; }
	for (int i = 0; i < x.length(); i++)
	{

		if (c == y[i])
		{
			h[i] = y[i];

			
		}
		

	}

	for (int i = 0; i < x.length(); i++)
	{

		cout << h[i];

	}



	if (!strncmp(h, y, x.length()))
	{
		cout << "\nTumunu bildiniz.Tebrikler.";
		haksayisi = -1;
		break;
	}

	
	--haksayisi;
	  cout << "\nKalan hak sayisi=" << haksayisi << endl;
  x:
	  if (c == '1')
	  {
		  cout << "Dogru cümleyi girin:";
		  cin >> z;
		 
			  if (x==z)
			  { 
				  cout << "Dogru bildiniz .Cevap " <<x<<" 'dir."<< endl;
				  haksayisi = -1;
				  break;
				  
			  }
		  
	  }
	if (haksayisi == -1){ break; }
	if (haksayisi ==0){
		cout << "Kaybettiniz...Dogru cumle '"<<x<<"' olacakti...\n";
		break;
	}
}
delete[] y;
cout << "\nBu noktadasin" << endl;
cout << "Yeniden oynamak icin 2 ye basip entera tıklayin ";
cin >> c;
if (c == '2')
goto y;


	system("pause");
	return 0;
}
