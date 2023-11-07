
#pragma once
#ifndef INPUTSTREAM_H_
#define INPUTSTREAM_H_
class BlackJack {
private:
	int size = 52;
	int* deck =new int[size];

	int* Mydeck = new int;
	int* Enemydeck = new int;
	int count = 0;
public:
	BlackJack();

	~BlackJack();

	void MyCardShow();

	void EnemyCardShow();

	void ReSet();
	void shuffle();

	void CheckCardClass(int OneCard);
void  CheckCardNum(int OneCard);
void battle();
int Drawcard();
void mySum();
void enemySum();

};
#endif // !INPUTSTREAM_H_
