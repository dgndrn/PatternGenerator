
#include <iostream>
using namespace std;
string pattern;


void checker(int size,int counter) {

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
		cout << "buf = \"\" " << ::endl;
		for (int j = 0; j < pattern.length(); j=j+inc) {
		
			
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
			
			cout << "buf+= \"" << piece << "\"" << ::endl;



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




int main(int argc, char** argv)
{
	 int size = atoi(argv[1]);

//	int size = 3000;


	char bigA = 'A';
	char smallA = 'a';
	char strnum[5];
	int num = 0; 

	
	
	

	while (bigA <= 'Z') {

		while (smallA <= 'z') {

			while (num <= 9) {
			
				checker(size, pattern.length());

				_itoa(num, strnum, 10);
				pattern += bigA;
				checker(size, pattern.length());
				pattern += smallA;
				checker(size, pattern.length());;
				pattern += strnum;
				checker(size, pattern.length());
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
