
#pragma once
#ifndef INPUTSTREAM_H_
#define INPUTSTREAM_H_
class BlackJack {
private:
	int* mycard;
	int* enemycard;
	int size = 52;
	int* card=new int[size];
	
public:
	BlackJack();

	~BlackJack();

	void Show();
	void ReSet();
	void shuffle();
	void Drawcard();
	void CheckCardClass(int OneCard);
	void CheckCardNum(int OneCard);
	
};
#endif // !INPUTSTREAM_H_
