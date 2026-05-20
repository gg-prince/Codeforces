#include<iostream>
using namespace std;
int main(){

int n, k;

cin >> n;
cin >> k;

int score[n];

for(int i=0; i<n; i++){

	cin >> score[i];

}

int kthscore = score[k-1];
int nextround = 0;

for(int i=0; i<n; i++){
	if(score[i] >= kthscore){
	  nextround +=1;
	}
	else{
	   nextround +=0;
	}
}

cout << nextround;

return 0;

}
