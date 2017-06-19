#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class Canli // Abstrack Class
{
	string name;
	string surname;
	int height, weight, canliage;

public:
	Canli() {
		cout << "Canli was created " << endl;
	}
	~Canli() {
		cout << "Canli was destroyed" << endl;
	
	}

	
	virtual string eating()=0;

};

class insan:public Canli {
public:
	insan() {
		cout << "Insan was created " << endl;
	}
	~insan() {
		cout << "Insan was destroyed" << endl;

	}
	
	string eating() 
	{
		string write="food";
		return write;
	}


};
class Hayvan:public Canli {
public:
	string hname;
	int hage;
	Hayvan() {
		cout << "Hayvan was created " << endl;
	}
	~Hayvan() {
		cout << "Hayvan was destroyed" << endl;

	}
	
	
	string eating() override
	{
		string write = "Meat,Grass";
		return write;
	}
};
	
class erkek :public insan {
public:

	erkek() {
		cout << "Erkek was created " << endl;
	}

	~erkek() {
		cout << "Erkek was destroyed" << endl;
	}

};
class kadin :public insan {
public:

	kadin() {
		cout << "yapýcý kadin " << endl;
	}
	~kadin() {
		cout << "yýkýcý kadin" << endl;
	}
};
class Aslan :public Hayvan {
public:
	Aslan() {
		cout << "Aslan was destroyed" << endl;
	}
	~Aslan() {
		cout << "Aslan was destroyed" << endl;
	}
	/*--->FONCTIONS WERE CREATED FOR OVERLOAD METHOD<---*/
	void takenameorage() {
		cout << "take or name is empty" << endl;
	}
	int takenameorage(int age) {
		Hayvan h1;
		h1.hage =age;
	return h1.hage;
	}
	string takenameorage(string name) {
		Hayvan h1;
		h1.hname = name;
		
		return h1.hname;
	}
	
};
class Kopek :public Hayvan {
public:
	Kopek() {
		cout << "Kopek was destroyed" << endl;
	}
	~Kopek() {
		cout << "Kopek was destroyed" << endl;
	}

};



int main() {
	//--> Call Aslan Class Overload Method with constructure and deconstructure
	Aslan a1;
	cout << a1.takenameorage(5) << endl;
	cout << a1.takenameorage("King Aslan") << endl;
	a1.takenameorage(); 
	//-->For Polymorphism<--
	Hayvan h2;
	h2 = a1; // appointing  values to h2 from a1 
	system("pause");
	return 0;
}




