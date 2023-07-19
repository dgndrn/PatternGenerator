
#include <iostream>
using namespace std;
string pattern;


void checker(int size,int counter) {

	if (counter == size) {
		cout << pattern;
		exit(0);
	}


}




int main(int argc, char** argv)
{
	 int size = atoi(argv[1]);




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

				if (sizeof(pattern) == size) { 
					return 0;
				}
			
			}

			smallA++;
			num = 0;


		}
		bigA++;
		smallA = 'a';
		num = 0;

	}



}
