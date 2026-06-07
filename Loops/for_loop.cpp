#include<iostream>
#include<windows.h>
using namespace std;

void typeText(const char text[], int delayMs) {
 for(int i=0; text[i] != '\0'; i++) {
 cout<< text[i]<<flush;
 Sleep(delayMs);
}
cout<< endl;
}

int main(){
	typeText(" YOU ALWAYS ON MY MIND, THAT'S HOW MUCH I CARE", 100);
	typeText(" I CAN'T THINK OF A TIME, THAT YOU WEREN'T THERE", 100);
	typeText(" I KNOW THAT I'D BE LYING, IF I DID'T WANT YOU THERE", 95);
	typeText(" CAUSE BABY, I'M IN LOVE AND WHY CAN'T YOU JUST LIVE NEAR", 95);
	
	return 0;
} 
