#include "Review.h"
#include "Config.h"
int Review::AlgorithmInterface(Bookbase** global_b)
{
	int score = 0;
	cout << "Ñ¡ÔñÄ¬Ð´Ä£Ê½" << endl;
	cout << "1.Ä¬Ð´Ó¢Óï" << endl;
	cout << "2.Ä¬Ð´ÖÐÎÄ" << endl;
	int choose;
	cin >> choose;
	Dictation* target = new Dictation();
	switch (choose)
	{
	case 1:
		target= new DictationC();
		break;
	case 2:
		target = new DictationE();
		break;
	default:
		break;
	}
	score = target->DictationAlgorithm(global_b);
	delete target;
	return score;
}