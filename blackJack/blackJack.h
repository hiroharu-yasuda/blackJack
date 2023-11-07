
#pragma once
#ifndef INPUTSTREAM_H_
#define INPUTSTREAM_H_
class BlackJack {
private:
	int* mycard;
	int* enemycard;
	int size = 52;
	int* deck =new int[size];
	int* card=new int[size];
	
	int* Mydeck = new int;
	int* Enemydeck = new int;
	int count = 0;
public:
	BlackJack();

	~BlackJack();

	void ReSet();
	void shuffle();
	void CheckCardClass(int OneCard);
	
};
#endif // !INPUTSTREAM_H_
