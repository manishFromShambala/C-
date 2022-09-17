// C++ program to count occurrences of a given
// character
#include <iostream>
#include <string>
using namespace std;

// Function that return count of the given
// character in the string
int count(string s, char c)
{
	// Count variable
	int res = 0;

	for (int i=0;i<s.length();i++)

		// checking character in string
		if (s[i] == c)
			res++;

	return res;
}

// Driver code
int main()
{
	string str= "I have been constantly following the international issues. Initially when I started watching Then I did not understand the politics. But, as soon as time passed I started understanding the international politics and I have some understanding of the india's relations with various nations. I also have knowledge about the International Terrorism and hence It's a great pleasure for me to work with an organization like yours and be a part of Indian bureaucracy. In recent times India has seen various challenges from our North-Western and Northern neighbouring nationsg  . Not only that, even Myanmar and Sri Lanka are going through a critical phase. Excluding these there are quite issues like rise of terrorism in the West Asian and North African region, Military deployment by Russia near Ukranian border, the kashmir Issue, the great mystery behind the COVID-19 pandemic and many such issues make the department  of External Affairs a fascinating one as dealing with these issues and maintaining relations with the countries is not a piece of cake. Hence I too want to be the part of it, work in it, gain further knowledge and have a position in the Indian buereaucracy in near future. I Hope, I will get this golden opportunity.";
	//char c = 'e';
	cout << str.length()<< endl;
	return 0;
}
//I have been constantly following the international issues. Initially when I started watching Then I did not understand the politics. But, as soon as time passed I started understanding the international politics and I have some understanding of the india's relations with various nations. I also have knowledge about the International Terrorism and hence It's a great pleasure for me to work with an organization like yours and be a part of Indian bureaucracy. In recent times India has seen various challenges from our North-Western and Northern neighbouring nationsg  . Not only that, even Myanmar and Sri Lanka are going through a critical phase. Excluding these there are quite issues like rise of terrorism in the West Asian and North African region, Military deployment by Russia near Ukranian border, the kashmir Issue, the great mystery behind the COVID-19 pandemic and many such issues make the department  of External Affairs a fascinating one as dealing with these issues and maintaining relations with the countries is not a piece of cake. Hence I too want to be the part of it, work in it, gain further knowledge and have a position in the Indian buereaucracy in near future. I Hope, I will get this golden opportunity.
