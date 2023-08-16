
#include <iostream>
using namespace std;
string pattern;



void checker(int size, int counter,int type);
void Generate(int size,int type);


// type 0 -> Normal
// type 1-> Python

int main(int argc, char** argv)
{

	string ishelp = argv[1];
	int dec{ ishelp.compare("-h") and ishelp.compare("-help") and ishelp.compare("--h") and ishelp.compare("-yardim")};

	if (!dec) {

		cout << "\nPatternGenerator uygulamasi bellek tasmalarini gozlemleyebilmek icin patternler uretir.\nKullanim sekli:\nPatternGenerator.exe -py [sayi]\nPatternGenerator.exe [sayi]\n";
		exit(0);
	}


	
	if(argc == 3){
		int type;
		int size = atoi(argv[2]);
		
		if (size < 9) {
			cout << "Yetersiz uzunluk!";
			exit(1);
		}
	
		string format = argv[1];

		int decision{ format.compare("-py") };
		if (!decision) {
		 type = 1;
		}
		else {
			cout << "Yanlis giris!";
			exit(1);
		}

		Generate(size, type);

	}

	if (argc == 2) {
		int size = atoi(argv[1]);

		if (size < 9) {
			cout << "Yetersiz uzunluk!";
			exit(1);
		}

		int type = 0;
		Generate(size, type);
	}


//	int size = 500;
	
	


}






void Generate(int size,int type) {



	char bigA = 'A';
	char smallA = 'a';
	char strnum[5];
	int num = 0;





	while (bigA <= 'Z') {

		while (smallA <= 'z') {

			while (num <= 9) {

				checker(size, pattern.length(),type);

				_itoa(num, strnum, 10);
				pattern += bigA;
				checker(size, pattern.length(),type);
				pattern += smallA;
				checker(size, pattern.length(),type);
				pattern += strnum;
				checker(size, pattern.length(),type);
				num++;



			}

			smallA++;
			num = 0;


		}
		bigA++;
		smallA = 'a';
		num = 0;

	}







}






















void checker(int size, int counter,int type) {

	if (counter == size) {

		int divide;
		int x = 0;
		string piece;
		int inc;
		if (pattern.length() > 200) {
			divide = 85;
		}
		else {
			divide = (pattern.length() / (pattern.length() * 0.1)); // bu aralik icin yani 0 dan 10'a kadar daha sonra 10 dan 20 ye kadar 10 20 30 diye artiyor
		}

		inc = divide;											// bu uzunluk icin 0 dan 10'a kadar char yazdirilacak 10 tane alt alta olacak gibi
		
		if (type == 1) {
			cout << "buf = \"\" " << ::endl;
		}
		
		for (int j = 0; j < pattern.length(); j = j + inc) {


			if (inc == 0) {
				exit(0);                       // burada bitirmemin nedeni program son cout'u yapabilmesi icin donguden sonra bitirmem gerekiyordu
			}


			piece = "";
			for (x; x < divide; x++) {
				piece += pattern[x];
			}
			if ((divide + inc) > pattern.length()) {
				inc = pattern.length() - divide;
			}

			divide = divide + inc;

			if (type == 1) {
				cout << "buf+= \"" << piece << "\"" << ::endl; //python yazimi
			}
			else if (type == 0) {

				cout  << piece ;

			}


		}

		/*


		cout << "buf = \"\" " <<::endl;
		for (int i = 0; i <= pattern.length(); i=i+divide) {

			cout << "buf+= \"" << pattern <<"\"" << ::endl;
		}
		*/

		exit(0);
	}


}
