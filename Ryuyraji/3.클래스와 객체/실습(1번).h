#pragma once//언어에서 헤더의 중복 선언을 방지함
class Tower
{
public:
	int height;
	Tower();
	Tower(int r);
	int getHeight();
};
Tower::Tower(): Tower(1) {}
Tower::Tower(int r){
	height = r;
}
int Tower::getHeight() { //->이 부분을 놓치지 말고 써주기 
	return height;
}

