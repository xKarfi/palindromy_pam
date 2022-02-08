#include <iostream>
#include <fstream>
#include <sstream>
#include <string>


using namespace std;
class palindromy
{
       ifstream p1;
       ofstream p2;

  public:

void otworz()
{
    p1.open("we.txt");
    p2.open("wy.txt");
}





void czy_palindrom()
{

    string napis,slowo, polacz("");


     while(!p1.eof())
{
    getline(p1, napis);

        	stringstream ss(napis);
	    while(ss >> slowo)
	    	polacz += slowo;


    bool palindrom=true;
    int back = polacz.length()-1;
    for (int i=0; i<polacz.length()/2 && palindrom; i++)
        if (polacz[i] != polacz[back--])
            palindrom = false;



		if (palindrom == true)
		p2<<polacz<<" to JEST palindrom"<<endl;
		else
		p2<<polacz<<" to NIE JEST palindrom"<<endl;


    napis = "";
    slowo = "";
    polacz = "";


}

}



void zamknij()
{
    p1.close();
    p2.close();
}

};
int main()
{

    palindromy pa1;
    pa1.otworz();
    pa1.czy_palindrom();
    pa1.zamknij();

    return 0;
}
