
#include <iostream>
#include <ctime>


const int x = 60;
const int y = 24;

using namespace std;



struct Player {
	char show;
};



Player*** p;



void Intialize() {
	srand(time(NULL));
	int xp, yp;
	p = new Player * *[y];
	for (int j = 0; j < y; j++) {
		p[j] = new Player * [x];
		for (int i = 0; i < x; i++) {
			p[j][i] = NULL;
		}
	}
	xp = rand() % x;
	yp = rand() % y;
	p[yp][xp] = new Player;
	p[yp][xp]->show = '*';
}

void Show() {
	for (int j = 0; j < y; j++) {
		for (int i = 0; i < x; i++) {
			if (p[j][i] != NULL) {
				cout << p[j][i]->show;
			}
			else
				cout << ".";
		}
		cout << endl;
	}
}


int main() {
	Intialize();
	Show();
}


