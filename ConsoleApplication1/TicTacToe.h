#pragma once
#include <iostream>

class TTT {

	friend std::istream& operator>>(std::istream& os, TTT& game);

	friend std::ostream& operator<<(std::ostream& os, TTT& game);

public:

	TTT(int a);

	~TTT();

	char & operator[](int position);

	void SetPosition(int position);

	int GetSize();

	void NewGame(int a);

private:

	void rows();
	void columns();
	void diagonal1();
	void diagonal2();
	void Winner();

	int size;
	bool first_move;
	bool is_game_over;
	char prev_move;
	char* grid;
};

