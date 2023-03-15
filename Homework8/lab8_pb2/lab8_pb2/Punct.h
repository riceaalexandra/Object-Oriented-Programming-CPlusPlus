#pragma once
#include<iostream>

class Punct
{
protected:
	double x, y;
public:
	Punct();
	Punct(double x, double y);
	~Punct();
	void CitirePunct();
    virtual void Arie();
	virtual void Perimetru();
	friend class Patrat;
	friend class Dreptunghi; //am declarat clasa Dreptunghi prietena cu clasa Punct, pentru a putea avea acces la membrii private si protected ai clasei Punct
	friend double Distanta2puncte(Punct& p1, Punct &p2); //am declarat functia independenta prietena cu clasa, pentru a putea accesa la membrii privati si protected
};

