#include "bilet.h"
#include "bila.h"
#include "agentie.h"

int main() {
	Agentie agentie1;
	agentie1.extragere_6_bile();
	string pers[] = { "ANDREI", "MARIANA", "CATALINA", "MIHAELA", "MARIA", "SORIN"};
	for (int i = 0; i < 6; i++) {
		agentie1.add_bilete(pers[i]);
	}
	agentie1.cautare_castigator();
}