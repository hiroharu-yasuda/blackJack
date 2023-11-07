// blackJack.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//
#include"blackJack.h"
#include <iostream>
using namespace std;
BlackJack::BlackJack() {
}
BlackJack::~BlackJack(){

}
void BlackJack::ReSet() {
	int num = 101,count =0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {
			count++;
			num++;
		}
		num = num - 13+100;
		
	}//ちゃんと配列に数字を入っているか確認するやつ
	
}
	}

}
void BlackJack::EnemyCardShow() {
	for (int i = 0; Enemydeck[i] != NULL; i++) {
		CheckCardClass(Enemydeck[i]);
	}
	cout << ",";
}
void BlackJack::shuffle() {
		srand((unsigned int)time(NULL));
		cout << endl;

		for (int i = size; i > 1; --i) {
		}
	}
}
void BlackJack::CheckCardClass(int OneCard) {
	int ClassNum = 0;
	switch (ClassNum)
	{
		break;
		break;
		break;
		break;

	}
}
int BlackJack::Drawcard() {
	int num = deck[count];
	count++;
	return num;
}

void BlackJack::battle() {
	bool myDrawEnd = false;
	bool isburstmy = false;
	bool enemyDrawEnd = false;
	bool isburstenemy = false;
	int enemycards = 0;
	int mycards = 0;
	Mydeck[mycards] = Drawcard();
	mycards++;
	Enemydeck[enemycards] = Drawcard();
	enemycards++;
	MyCardShow();
	EnemyCardShow();
}
int main()
{
	BlackJack blackjack;

	blackjack.ReSet();

	blackjack.Show();
	blackjack.shuffle();
	blackjack.Show();

	blackjack.battle();
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

// 作業を開始するためのヒント: 
//    1. ソリューション エクスプローラー ウィンドウを使用してファイルを追加/管理します 
//   2. チーム エクスプローラー ウィンドウを使用してソース管理に接続します
//   3. 出力ウィンドウを使用して、ビルド出力とその他のメッセージを表示します
//   4. エラー一覧ウィンドウを使用してエラーを表示します
//   5. [プロジェクト] > [新しい項目の追加] と移動して新しいコード ファイルを作成するか、[プロジェクト] > [既存の項目の追加] と移動して既存のコード ファイルをプロジェクトに追加します
//   6. 後ほどこのプロジェクトを再び開く場合、[ファイル] > [開く] > [プロジェクト] と移動して .sln ファイルを選択します
