#pragma once//���� ����� �ߺ� ������ ������
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
int Tower::getHeight() { //->�� �κ��� ��ġ�� ���� ���ֱ� 
	return height;
}

