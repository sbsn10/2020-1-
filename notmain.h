#pragma once
#include"PN.h"
#include<vector>

typedef int index;

int finumber(std::string number1, std::vector<PN>& pb); //전화번호가 중복일 경우를 확인한다.


int Menu();

bool Ncheck(std::string& number1, std::vector<PN>& pb);

void PChange(std::vector<PN>& pb);


void list(std::vector<PN>& pb);
void Phoneinput(std::vector<PN>& pb);

void find(std::vector<PN>& pb);



